// Generated by gencpp from file piercing_experiments_msgs/CartesianPathRequest.msg
// DO NOT EDIT!


#ifndef PIERCING_EXPERIMENTS_MSGS_MESSAGE_CARTESIANPATHREQUEST_H
#define PIERCING_EXPERIMENTS_MSGS_MESSAGE_CARTESIANPATHREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace piercing_experiments_msgs
{
template <class ContainerAllocator>
struct CartesianPathRequest_
{
  typedef CartesianPathRequest_<ContainerAllocator> Type;

  CartesianPathRequest_()
    : final_target()
    , vel(0.0)  {
    }
  CartesianPathRequest_(const ContainerAllocator& _alloc)
    : final_target(_alloc)
    , vel(0.0)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _final_target_type;
  _final_target_type final_target;

   typedef float _vel_type;
  _vel_type vel;





  typedef boost::shared_ptr< ::piercing_experiments_msgs::CartesianPathRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::piercing_experiments_msgs::CartesianPathRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CartesianPathRequest_

typedef ::piercing_experiments_msgs::CartesianPathRequest_<std::allocator<void> > CartesianPathRequest;

typedef boost::shared_ptr< ::piercing_experiments_msgs::CartesianPathRequest > CartesianPathRequestPtr;
typedef boost::shared_ptr< ::piercing_experiments_msgs::CartesianPathRequest const> CartesianPathRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::piercing_experiments_msgs::CartesianPathRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::piercing_experiments_msgs::CartesianPathRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace piercing_experiments_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::piercing_experiments_msgs::CartesianPathRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::piercing_experiments_msgs::CartesianPathRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::piercing_experiments_msgs::CartesianPathRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::piercing_experiments_msgs::CartesianPathRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piercing_experiments_msgs::CartesianPathRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piercing_experiments_msgs::CartesianPathRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::piercing_experiments_msgs::CartesianPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c01a67c204f217a13fc2a48450b5290b";
  }

  static const char* value(const ::piercing_experiments_msgs::CartesianPathRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc01a67c204f217a1ULL;
  static const uint64_t static_value2 = 0x3fc2a48450b5290bULL;
};

template<class ContainerAllocator>
struct DataType< ::piercing_experiments_msgs::CartesianPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "piercing_experiments_msgs/CartesianPathRequest";
  }

  static const char* value(const ::piercing_experiments_msgs::CartesianPathRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::piercing_experiments_msgs::CartesianPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Pose final_target\n\
float32 vel\n\
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

  static const char* value(const ::piercing_experiments_msgs::CartesianPathRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::piercing_experiments_msgs::CartesianPathRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.final_target);
      stream.next(m.vel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CartesianPathRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::piercing_experiments_msgs::CartesianPathRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::piercing_experiments_msgs::CartesianPathRequest_<ContainerAllocator>& v)
  {
    s << indent << "final_target: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.final_target);
    s << indent << "vel: ";
    Printer<float>::stream(s, indent + "  ", v.vel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PIERCING_EXPERIMENTS_MSGS_MESSAGE_CARTESIANPATHREQUEST_H
