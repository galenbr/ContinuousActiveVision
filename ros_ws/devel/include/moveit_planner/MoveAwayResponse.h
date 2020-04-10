// Generated by gencpp from file moveit_planner/MoveAwayResponse.msg
// DO NOT EDIT!


#ifndef MOVEIT_PLANNER_MESSAGE_MOVEAWAYRESPONSE_H
#define MOVEIT_PLANNER_MESSAGE_MOVEAWAYRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace moveit_planner
{
template <class ContainerAllocator>
struct MoveAwayResponse_
{
  typedef MoveAwayResponse_<ContainerAllocator> Type;

  MoveAwayResponse_()
    : awayPose()  {
    }
  MoveAwayResponse_(const ContainerAllocator& _alloc)
    : awayPose(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _awayPose_type;
  _awayPose_type awayPose;





  typedef boost::shared_ptr< ::moveit_planner::MoveAwayResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_planner::MoveAwayResponse_<ContainerAllocator> const> ConstPtr;

}; // struct MoveAwayResponse_

typedef ::moveit_planner::MoveAwayResponse_<std::allocator<void> > MoveAwayResponse;

typedef boost::shared_ptr< ::moveit_planner::MoveAwayResponse > MoveAwayResponsePtr;
typedef boost::shared_ptr< ::moveit_planner::MoveAwayResponse const> MoveAwayResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_planner::MoveAwayResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_planner::MoveAwayResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace moveit_planner

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::moveit_planner::MoveAwayResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_planner::MoveAwayResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_planner::MoveAwayResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_planner::MoveAwayResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_planner::MoveAwayResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_planner::MoveAwayResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_planner::MoveAwayResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dc8398ca987797364ed0a2af1ee2f0ea";
  }

  static const char* value(const ::moveit_planner::MoveAwayResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdc8398ca98779736ULL;
  static const uint64_t static_value2 = 0x4ed0a2af1ee2f0eaULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_planner::MoveAwayResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_planner/MoveAwayResponse";
  }

  static const char* value(const ::moveit_planner::MoveAwayResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_planner::MoveAwayResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Pose awayPose\n\
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

  static const char* value(const ::moveit_planner::MoveAwayResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_planner::MoveAwayResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.awayPose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveAwayResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_planner::MoveAwayResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_planner::MoveAwayResponse_<ContainerAllocator>& v)
  {
    s << indent << "awayPose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.awayPose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_PLANNER_MESSAGE_MOVEAWAYRESPONSE_H
