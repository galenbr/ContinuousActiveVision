// Generated by gencpp from file moveit_planner/MovePoseRequest.msg
// DO NOT EDIT!


#ifndef MOVEIT_PLANNER_MESSAGE_MOVEPOSEREQUEST_H
#define MOVEIT_PLANNER_MESSAGE_MOVEPOSEREQUEST_H


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
struct MovePoseRequest_
{
  typedef MovePoseRequest_<ContainerAllocator> Type;

  MovePoseRequest_()
    : val()
    , execute(false)  {
    }
  MovePoseRequest_(const ContainerAllocator& _alloc)
    : val(_alloc)
    , execute(false)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _val_type;
  _val_type val;

   typedef uint8_t _execute_type;
  _execute_type execute;





  typedef boost::shared_ptr< ::moveit_planner::MovePoseRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_planner::MovePoseRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MovePoseRequest_

typedef ::moveit_planner::MovePoseRequest_<std::allocator<void> > MovePoseRequest;

typedef boost::shared_ptr< ::moveit_planner::MovePoseRequest > MovePoseRequestPtr;
typedef boost::shared_ptr< ::moveit_planner::MovePoseRequest const> MovePoseRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_planner::MovePoseRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_planner::MovePoseRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::moveit_planner::MovePoseRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_planner::MovePoseRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_planner::MovePoseRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_planner::MovePoseRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_planner::MovePoseRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_planner::MovePoseRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_planner::MovePoseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a77c545a10fa137b7b4acf08012288bf";
  }

  static const char* value(const ::moveit_planner::MovePoseRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa77c545a10fa137bULL;
  static const uint64_t static_value2 = 0x7b4acf08012288bfULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_planner::MovePoseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_planner/MovePoseRequest";
  }

  static const char* value(const ::moveit_planner::MovePoseRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_planner::MovePoseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Pose val\n\
bool execute\n\
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

  static const char* value(const ::moveit_planner::MovePoseRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_planner::MovePoseRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.val);
      stream.next(m.execute);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MovePoseRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_planner::MovePoseRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_planner::MovePoseRequest_<ContainerAllocator>& v)
  {
    s << indent << "val: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.val);
    s << indent << "execute: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.execute);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_PLANNER_MESSAGE_MOVEPOSEREQUEST_H
