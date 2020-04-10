// Generated by gencpp from file netft_utils/SetToolDataRequest.msg
// DO NOT EDIT!


#ifndef NETFT_UTILS_MESSAGE_SETTOOLDATAREQUEST_H
#define NETFT_UTILS_MESSAGE_SETTOOLDATAREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace netft_utils
{
template <class ContainerAllocator>
struct SetToolDataRequest_
{
  typedef SetToolDataRequest_<ContainerAllocator> Type;

  SetToolDataRequest_()
    : mass(0.0)
    , COM(0.0)  {
    }
  SetToolDataRequest_(const ContainerAllocator& _alloc)
    : mass(0.0)
    , COM(0.0)  {
  (void)_alloc;
    }



   typedef double _mass_type;
  _mass_type mass;

   typedef double _COM_type;
  _COM_type COM;





  typedef boost::shared_ptr< ::netft_utils::SetToolDataRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::netft_utils::SetToolDataRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetToolDataRequest_

typedef ::netft_utils::SetToolDataRequest_<std::allocator<void> > SetToolDataRequest;

typedef boost::shared_ptr< ::netft_utils::SetToolDataRequest > SetToolDataRequestPtr;
typedef boost::shared_ptr< ::netft_utils::SetToolDataRequest const> SetToolDataRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::netft_utils::SetToolDataRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::netft_utils::SetToolDataRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace netft_utils

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'netft_utils': ['/home/agandhi2/mer_lab/ros_ws/src/projects/piercing_experiments/netft_utils/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::netft_utils::SetToolDataRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::netft_utils::SetToolDataRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::netft_utils::SetToolDataRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::netft_utils::SetToolDataRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::netft_utils::SetToolDataRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::netft_utils::SetToolDataRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::netft_utils::SetToolDataRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3561800cb8c5c1eae6f9b51fbc418bcc";
  }

  static const char* value(const ::netft_utils::SetToolDataRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3561800cb8c5c1eaULL;
  static const uint64_t static_value2 = 0xe6f9b51fbc418bccULL;
};

template<class ContainerAllocator>
struct DataType< ::netft_utils::SetToolDataRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "netft_utils/SetToolDataRequest";
  }

  static const char* value(const ::netft_utils::SetToolDataRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::netft_utils::SetToolDataRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 mass\n\
float64 COM\n\
";
  }

  static const char* value(const ::netft_utils::SetToolDataRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::netft_utils::SetToolDataRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mass);
      stream.next(m.COM);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetToolDataRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::netft_utils::SetToolDataRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::netft_utils::SetToolDataRequest_<ContainerAllocator>& v)
  {
    s << indent << "mass: ";
    Printer<double>::stream(s, indent + "  ", v.mass);
    s << indent << "COM: ";
    Printer<double>::stream(s, indent + "  ", v.COM);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NETFT_UTILS_MESSAGE_SETTOOLDATAREQUEST_H
