// Generated by gencpp from file assist_feeding/finger_orientation.msg
// DO NOT EDIT!


#ifndef ASSIST_FEEDING_MESSAGE_FINGER_ORIENTATION_H
#define ASSIST_FEEDING_MESSAGE_FINGER_ORIENTATION_H

#include <ros/service_traits.h>


#include <assist_feeding/finger_orientationRequest.h>
#include <assist_feeding/finger_orientationResponse.h>


namespace assist_feeding
{

struct finger_orientation
{

typedef finger_orientationRequest Request;
typedef finger_orientationResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct finger_orientation
} // namespace assist_feeding


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::assist_feeding::finger_orientation > {
  static const char* value()
  {
    return "2649f48d233c8c347b13cd50f5edf8d2";
  }

  static const char* value(const ::assist_feeding::finger_orientation&) { return value(); }
};

template<>
struct DataType< ::assist_feeding::finger_orientation > {
  static const char* value()
  {
    return "assist_feeding/finger_orientation";
  }

  static const char* value(const ::assist_feeding::finger_orientation&) { return value(); }
};


// service_traits::MD5Sum< ::assist_feeding::finger_orientationRequest> should match 
// service_traits::MD5Sum< ::assist_feeding::finger_orientation > 
template<>
struct MD5Sum< ::assist_feeding::finger_orientationRequest>
{
  static const char* value()
  {
    return MD5Sum< ::assist_feeding::finger_orientation >::value();
  }
  static const char* value(const ::assist_feeding::finger_orientationRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::assist_feeding::finger_orientationRequest> should match 
// service_traits::DataType< ::assist_feeding::finger_orientation > 
template<>
struct DataType< ::assist_feeding::finger_orientationRequest>
{
  static const char* value()
  {
    return DataType< ::assist_feeding::finger_orientation >::value();
  }
  static const char* value(const ::assist_feeding::finger_orientationRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::assist_feeding::finger_orientationResponse> should match 
// service_traits::MD5Sum< ::assist_feeding::finger_orientation > 
template<>
struct MD5Sum< ::assist_feeding::finger_orientationResponse>
{
  static const char* value()
  {
    return MD5Sum< ::assist_feeding::finger_orientation >::value();
  }
  static const char* value(const ::assist_feeding::finger_orientationResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::assist_feeding::finger_orientationResponse> should match 
// service_traits::DataType< ::assist_feeding::finger_orientation > 
template<>
struct DataType< ::assist_feeding::finger_orientationResponse>
{
  static const char* value()
  {
    return DataType< ::assist_feeding::finger_orientation >::value();
  }
  static const char* value(const ::assist_feeding::finger_orientationResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ASSIST_FEEDING_MESSAGE_FINGER_ORIENTATION_H
