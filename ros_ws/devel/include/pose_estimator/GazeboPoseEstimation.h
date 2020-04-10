// Generated by gencpp from file pose_estimator/GazeboPoseEstimation.msg
// DO NOT EDIT!


#ifndef POSE_ESTIMATOR_MESSAGE_GAZEBOPOSEESTIMATION_H
#define POSE_ESTIMATOR_MESSAGE_GAZEBOPOSEESTIMATION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>

namespace pose_estimator
{
template <class ContainerAllocator>
struct GazeboPoseEstimation_
{
  typedef GazeboPoseEstimation_<ContainerAllocator> Type;

  GazeboPoseEstimation_()
    : header()
    , model_names()
    , model_poses()  {
    }
  GazeboPoseEstimation_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , model_names(_alloc)
    , model_poses(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _model_names_type;
  _model_names_type model_names;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Pose_<ContainerAllocator> >::other >  _model_poses_type;
  _model_poses_type model_poses;





  typedef boost::shared_ptr< ::pose_estimator::GazeboPoseEstimation_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pose_estimator::GazeboPoseEstimation_<ContainerAllocator> const> ConstPtr;

}; // struct GazeboPoseEstimation_

typedef ::pose_estimator::GazeboPoseEstimation_<std::allocator<void> > GazeboPoseEstimation;

typedef boost::shared_ptr< ::pose_estimator::GazeboPoseEstimation > GazeboPoseEstimationPtr;
typedef boost::shared_ptr< ::pose_estimator::GazeboPoseEstimation const> GazeboPoseEstimationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pose_estimator::GazeboPoseEstimation_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pose_estimator::GazeboPoseEstimation_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pose_estimator

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'pose_estimator': ['/home/agandhi2/mer_lab/ros_ws/src/projects/table_rearrange/pose_estimator/msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pose_estimator::GazeboPoseEstimation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pose_estimator::GazeboPoseEstimation_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pose_estimator::GazeboPoseEstimation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pose_estimator::GazeboPoseEstimation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pose_estimator::GazeboPoseEstimation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pose_estimator::GazeboPoseEstimation_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pose_estimator::GazeboPoseEstimation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3bbf8867409277371ff3ab48c9274b56";
  }

  static const char* value(const ::pose_estimator::GazeboPoseEstimation_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3bbf886740927737ULL;
  static const uint64_t static_value2 = 0x1ff3ab48c9274b56ULL;
};

template<class ContainerAllocator>
struct DataType< ::pose_estimator::GazeboPoseEstimation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pose_estimator/GazeboPoseEstimation";
  }

  static const char* value(const ::pose_estimator::GazeboPoseEstimation_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pose_estimator::GazeboPoseEstimation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
string[] model_names\n\
geometry_msgs/Pose[] model_poses\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::pose_estimator::GazeboPoseEstimation_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pose_estimator::GazeboPoseEstimation_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.model_names);
      stream.next(m.model_poses);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GazeboPoseEstimation_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pose_estimator::GazeboPoseEstimation_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pose_estimator::GazeboPoseEstimation_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "model_names[]" << std::endl;
    for (size_t i = 0; i < v.model_names.size(); ++i)
    {
      s << indent << "  model_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.model_names[i]);
    }
    s << indent << "model_poses[]" << std::endl;
    for (size_t i = 0; i < v.model_poses.size(); ++i)
    {
      s << indent << "  model_poses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.model_poses[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // POSE_ESTIMATOR_MESSAGE_GAZEBOPOSEESTIMATION_H
