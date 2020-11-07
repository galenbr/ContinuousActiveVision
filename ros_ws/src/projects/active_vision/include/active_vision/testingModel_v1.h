#ifndef TESTING_MODEL_V1
#define TESTING_MODEL_V1

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <vector>
#include <array>
#include <string>
#include <fstream>
#include <chrono>
#include <boost/make_shared.hpp>

#include <ros/ros.h>
#include <ros/package.h>
#include <tf/transform_datatypes.h>

// PCL specific includes
#include <pcl_ros/point_cloud.h>
#include <pcl/io/ply_io.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/common/transforms.h>
#include <pcl/common/common.h>
#include <pcl/common/generate.h>
#include <pcl/common/random.h>
#include <pcl/common/distances.h>
#include <pcl/common/centroid.h>
#include <pcl/filters/voxel_grid.h>
#include <pcl/filters/passthrough.h>
#include <pcl/filters/extract_indices.h>
#include <pcl/filters/crop_hull.h>
#include <pcl/filters/crop_box.h>
#include <pcl/visualization/cloud_viewer.h>
#include <pcl/ModelCoefficients.h>
#include <pcl/sample_consensus/method_types.h>
#include <pcl/sample_consensus/model_types.h>
#include <pcl/segmentation/sac_segmentation.h>
#include <pcl/segmentation/extract_polygonal_prism_data.h>
#include <pcl/surface/convex_hull.h>
#include <pcl/features/normal_3d.h>

//Gazebo specific includes
#include <gazebo_msgs/SetModelState.h>
#include <gazebo_msgs/SpawnModel.h>
#include <gazebo_msgs/DeleteModel.h>

// Typedef for convinience
typedef pcl::PointCloud<pcl::PointXYZRGB> ptCldColor;
typedef pcl::PointCloud<pcl::Normal> ptCldNormal;
typedef pcl::visualization::PCLVisualizer ptCldVis;

// Structure to store one grasp related data
struct graspPoint{
  float quality;
  float gripperWidth;
  pcl::PointXYZRGB p1;
  pcl::PointXYZRGB p2;
  std::vector<float> pose;    // Note: This is not the final gripper pose
  float addnlPitch;
};

bool compareGrasp(graspPoint A, graspPoint B);

// Structure to store state for rollback
struct stateConfig{
  ptCldColor env;                   // Environment point cloud
  ptCldColor unexp;                 // Unexplored point cloud
  std::vector<double> kinectPose;   // Kinect Pose in Viewsphere
  std::string description;          // Description of the configuration
};

void rbgVis(ptCldVis::Ptr viewer, ptCldColor::ConstPtr cloud, std::string name,int vp);

void rbgNormalVis(ptCldVis::Ptr viewer, ptCldColor::ConstPtr cloud, ptCldNormal::ConstPtr normal, std::string name,int vp);

Eigen::Affine3f homoMatTranspose(const Eigen::Affine3f& tf);

Eigen::Vector3f getEuler(const Eigen::Affine3f& tf);

Eigen::Vector3f getTranslation(const Eigen::Affine3f& tf);

void printStateVector(std::vector<float> &stateVec, int dim);

// Class to store data of environment and its processing
class environment{
private:
  ros::Rate r{10};                      // ROS sleep rate
  ros::Publisher pubKinectPose;         // Publisher : Kinect pose
  ros::Subscriber subKinectPtCld;       // Subscriber : Kinect pointcloud
  // NOT USED (JUST FOR REFERENCE)
  /*ros::Subscriber subKinectRGB;       // Subscriber : Kinect RGB
  ros::Subscriber subKinectDepth;       // Subscriber : Kinect DepthMap */
  ros::ServiceClient gazeboSpawnModel;  // Service : Spawn Model
  ros::ServiceClient gazeboDeleteModel; // Service : Delete Model

  pcl::PassThrough<pcl::PointXYZRGB> pass;                  // Passthrough filter
  pcl::VoxelGrid<pcl::PointXYZRGB> voxelGrid;               // VoxelGrid object
  pcl::SACSegmentation<pcl::PointXYZRGB> seg;               // Segmentation object
  pcl::ExtractIndices<pcl::PointXYZRGB> extract;            // Extracting object
  pcl::ConvexHull<pcl::PointXYZRGB> cvHull;                 // Convex hull object
  pcl::CropBox<pcl::PointXYZRGB> cpBox;                     // Crop box object
  pcl::ExtractPolygonalPrismData<pcl::PointXYZRGB> prism;   // Prism object
  pcl::NormalEstimation<pcl::PointXYZRGB, pcl::Normal> ne;  // Normal Estimation

  Eigen::MatrixXf projectionMat;   // Camera projection matrix
  Eigen::Affine3f tfKinOptGaz;     // Transform : Kinect Optical Frame to Kinect Gazebo frame
  Eigen::Affine3f tfGazWorld;      // Transform : Kinect Gazebo Frame to Gazebo World frame
  Eigen::Affine3f tfGripper;       // Transform : For gripper based on grasp points found

  int readFlag[3];              // Flag used to read data from kinect only when needed
  float fingerZOffset;     // Z axis offset between gripper hand and finger

  std::string path;                // Path the active vision package


public:
  // PtCld: Last recorded viewpoint
  ptCldColor::Ptr ptrPtCldLast{new ptCldColor};      ptCldColor::ConstPtr cPtrPtCldLast{ptrPtCldLast};

  // PtCld: Environment after fusing multiple view points, extracted table, object and its normal
  ptCldColor::Ptr ptrPtCldEnv{new ptCldColor};       ptCldColor::ConstPtr cPtrPtCldEnv{ptrPtCldEnv};
  ptCldColor::Ptr ptrPtCldTable{new ptCldColor};     ptCldColor::ConstPtr cPtrPtCldTable{ptrPtCldTable};
  ptCldColor::Ptr ptrPtCldObject{new ptCldColor};    ptCldColor::ConstPtr cPtrPtCldObject{ptrPtCldObject};
  ptCldNormal::Ptr ptrObjNormal{new ptCldNormal};    ptCldNormal::ConstPtr cPtrObjNormal{ptrObjNormal};

  // PtCld: Sorting the convex hull generated
  ptCldColor::Ptr ptrPtCldHull{new ptCldColor};      ptCldColor::ConstPtr cPtrPtCldHull{ptrPtCldHull};

  // PtCld: Unexplored point cloud
  ptCldColor::Ptr ptrPtCldUnexp{new ptCldColor};     ptCldColor::ConstPtr cPtrPtCldUnexp{ptrPtCldUnexp};

  // PtCld: Gripper related
  ptCldColor::Ptr ptrPtCldGrpHnd{new ptCldColor};    ptCldColor::ConstPtr cPtrPtCldGrpHnd{ptrPtCldGrpHnd};
  ptCldColor::Ptr ptrPtCldGrpRfgr{new ptCldColor};   ptCldColor::ConstPtr cPtrPtCldGrpRfgr{ptrPtCldGrpRfgr};
  ptCldColor::Ptr ptrPtCldGrpLfgr{new ptCldColor};   ptCldColor::ConstPtr cPtrPtCldGrpLfgr{ptrPtCldGrpLfgr};
  ptCldColor::Ptr ptrPtCldGripper{new ptCldColor};   ptCldColor::ConstPtr cPtrPtCldGripper{ptrPtCldGripper};

  // PtCld: Points colliding with gripper
  ptCldColor::Ptr ptrPtCldCollided{new ptCldColor};  ptCldColor::ConstPtr cPtrPtCldCollided{ptrPtCldCollided};

  // PtCld: Temporary variable
  ptCldColor::Ptr ptrPtCldTemp{new ptCldColor};      ptCldColor::ConstPtr cPtrPtCldTemp{ptrPtCldTemp};

  // Variables used in table and object extraction
  pcl::ModelCoefficients::Ptr tableCoeff{new pcl::ModelCoefficients()};
  pcl::PointIndices::Ptr tableIndices{new pcl::PointIndices()};
  pcl::PointIndices::Ptr objectIndices{new pcl::PointIndices()};

  std::vector<pcl::Vertices> hullVertices;          // Used in convex hull during collision check
  std::vector<double> lastKinectPoseCartesian;      // Last Kinect pose where it was moved in cartesian co-ordiantes
  std::vector<double> lastKinectPoseViewsphere;     // Last Kinect pose where it was moved in viewsphere co-ordinates
  std::vector<double> minUnexp, maxUnexp;           // Min and Max x,y,z of unexplored pointcloud generated
  std::vector<graspPoint> graspsPossible;           // List of possible grasps
  pcl::PointXYZRGB minPtObj, maxPtObj;              // Min and Max x,y,z co-ordinates of the object
  pcl::PointXYZRGB minPtGrp[3], maxPtGrp[3];        // Min and Max x,y,z co-ordinates of the gripper
  pcl::PointXYZRGB minPtCol[5], maxPtCol[5];        // Min and Max x,y,z co-ordinates of the gripper used for collision check

  std::vector<std::vector<std::string>> objectDict; // List of objects which can be spawned
  double voxelGridSize;                       // Voxel Grid size for environment
  double voxelGridSizeUnexp;                  // Voxel Grid size for unexplored point cloud
  std::vector<double> tableCentre;         // Co-ordinates of table centre
  int scale;                                     // Scale value for unexplored point cloud generation
  double maxGripperWidth;                    // Gripper max width (Actual is 8 cm)
  double minGraspQuality;                      // Min grasp quality threshold
  int selectedGrasp;                            // Index of the selected grasp
  int gridDim;                                   // Grid dimension for state vector
  std::vector<float> stateVec;                      // State Vector
  std::vector<stateConfig> configurations;          // Vector to store states for rollback

  environment(ros::NodeHandle *nh);

  // Function to reset the environment
  void reset();

  // Store the configuration
  void saveConfiguration(std::string name);

  // Rollback to a configuration
  void rollbackConfiguration(int index);

  // 1A: Callback function to point cloud subscriber
  void cbPtCld (const ptCldColor::ConstPtr& msg);

  // 2: Spawning objects in gazebo on the table centre for a given RPY
  void spawnObject(int objectID, float R, float P, float Y);

  // 3: Deleting objects in gazebo
  void deleteObject(int objectID);

  // 4: Load Gripper Hand and Finger file
  void loadGripper();

  // 5: Update gripper
  // 0 -> Visualization
  // 1 -> Axis Collision Check
  // 2 -> Gripper Collision Check
  void updateGripper(int index ,int choice);

  // 6A: Function to move the kinect. Args: Array of X,Y,Z,Roll,Pitch,Yaw
  void moveKinectCartesian(std::vector<double> pose);

  // 6B: Funtion to move the Kinect in a viewsphere which has the table cente as its centre
  // R (Radius)
  // Theta (Polar Angle) -> 0 to 2*PI
  // Phi (Azhimuthal angle) -> 0 to PI/2
  void moveKinectViewsphere(std::vector<double> pose);

  // 8: Function to Fuse last data with existing data
  void fuseLastData();

  // 9: Extracting the major plane (Table) and object
  void dataExtract();

  // 10: Generating unexplored point cloud
  void genUnexploredPtCld();

  // 11: Updating the unexplored point cloud
  void updateUnexploredPtCld();

  // 12: Finding normals and pairs of grasp points from object point cloud
  void graspsynthesis();

  // 13: Given a grasp point pair find the gripper orientation
  void findGripperPose(int index);

  // 14: Collision check for gripper and unexplored point cloud
  void collisionCheck();

  // 15: Grasp and Collision check combined
  int graspAndCollisionCheck();

  // 16: Creating the State vector
  void createStateVector();
};

void singlePass(environment &av, std::vector<double> kinectPose, bool initial);

#endif