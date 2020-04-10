// Generated by gencpp from file moveit_planner/MovePointRequest.msg
// DO NOT EDIT!


#ifndef MOVEIT_PLANNER_MESSAGE_MOVEPOINTREQUEST_H
#define MOVEIT_PLANNER_MESSAGE_MOVEPOINTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace moveit_planner
{
template <class ContainerAllocator>
struct MovePointRequest_
{
  typedef MovePointRequest_<ContainerAllocator> Type;

  MovePointRequest_()
    : val()
    , execute(false)  {
    }
  MovePointRequest_(const ContainerAllocator& _alloc)
    : val(_alloc)
    , execute(false)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _val_type;
  _val_type val;

   typedef uint8_t _execute_type;
  _execute_type execute;





  typedef boost::shared_ptr< ::moveit_planner::MovePointRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_planner::MovePointRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MovePointRequest_

typedef ::moveit_planner::MovePointRequest_<std::allocator<void> > MovePointRequest;

typedef boost::shared_ptr< ::moveit_planner::MovePointRequest > MovePointRequestPtr;
typedef boost::shared_ptr< ::moveit_planner::MovePointRequest const> MovePointRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_planner::MovePointRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_planner::MovePointRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::moveit_planner::MovePointRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_planner::MovePointRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_planner::MovePointRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_planner::MovePointRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_planner::MovePointRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_planner::MovePointRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_planner::MovePointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "09d178cfe7c05e5d8c3ba0747602407a";
  }

  static const char* value(const ::moveit_planner::MovePointRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x09d178cfe7c05e5dULL;
  static const uint64_t static_value2 = 0x8c3ba0747602407aULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_planner::MovePointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_planner/MovePointRequest";
  }

  static const char* value(const ::moveit_planner::MovePointRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_planner::MovePointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Point val\n\
bool execute\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::moveit_planner::MovePointRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_planner::MovePointRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.val);
      stream.next(m.execute);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MovePointRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_planner::MovePointRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_planner::MovePointRequest_<ContainerAllocator>& v)
  {
    s << indent << "val: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.val);
    s << indent << "execute: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.execute);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_PLANNER_MESSAGE_MOVEPOINTREQUEST_H
