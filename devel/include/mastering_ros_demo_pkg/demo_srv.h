// Generated by gencpp from file mastering_ros_demo_pkg/demo_srv.msg
// DO NOT EDIT!


#ifndef MASTERING_ROS_DEMO_PKG_MESSAGE_DEMO_SRV_H
#define MASTERING_ROS_DEMO_PKG_MESSAGE_DEMO_SRV_H

#include <ros/service_traits.h>


#include <mastering_ros_demo_pkg/demo_srvRequest.h>
#include <mastering_ros_demo_pkg/demo_srvResponse.h>


namespace mastering_ros_demo_pkg
{

struct demo_srv
{

typedef demo_srvRequest Request;
typedef demo_srvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct demo_srv
} // namespace mastering_ros_demo_pkg


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mastering_ros_demo_pkg::demo_srv > {
  static const char* value()
  {
    return "e21fb7853ad73d6d988d6371d4fed1e2";
  }

  static const char* value(const ::mastering_ros_demo_pkg::demo_srv&) { return value(); }
};

template<>
struct DataType< ::mastering_ros_demo_pkg::demo_srv > {
  static const char* value()
  {
    return "mastering_ros_demo_pkg/demo_srv";
  }

  static const char* value(const ::mastering_ros_demo_pkg::demo_srv&) { return value(); }
};


// service_traits::MD5Sum< ::mastering_ros_demo_pkg::demo_srvRequest> should match
// service_traits::MD5Sum< ::mastering_ros_demo_pkg::demo_srv >
template<>
struct MD5Sum< ::mastering_ros_demo_pkg::demo_srvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mastering_ros_demo_pkg::demo_srv >::value();
  }
  static const char* value(const ::mastering_ros_demo_pkg::demo_srvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mastering_ros_demo_pkg::demo_srvRequest> should match
// service_traits::DataType< ::mastering_ros_demo_pkg::demo_srv >
template<>
struct DataType< ::mastering_ros_demo_pkg::demo_srvRequest>
{
  static const char* value()
  {
    return DataType< ::mastering_ros_demo_pkg::demo_srv >::value();
  }
  static const char* value(const ::mastering_ros_demo_pkg::demo_srvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mastering_ros_demo_pkg::demo_srvResponse> should match
// service_traits::MD5Sum< ::mastering_ros_demo_pkg::demo_srv >
template<>
struct MD5Sum< ::mastering_ros_demo_pkg::demo_srvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mastering_ros_demo_pkg::demo_srv >::value();
  }
  static const char* value(const ::mastering_ros_demo_pkg::demo_srvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mastering_ros_demo_pkg::demo_srvResponse> should match
// service_traits::DataType< ::mastering_ros_demo_pkg::demo_srv >
template<>
struct DataType< ::mastering_ros_demo_pkg::demo_srvResponse>
{
  static const char* value()
  {
    return DataType< ::mastering_ros_demo_pkg::demo_srv >::value();
  }
  static const char* value(const ::mastering_ros_demo_pkg::demo_srvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MASTERING_ROS_DEMO_PKG_MESSAGE_DEMO_SRV_H
