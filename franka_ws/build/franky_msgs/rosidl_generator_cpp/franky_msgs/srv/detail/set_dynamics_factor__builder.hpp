// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franky_msgs:srv/SetDynamicsFactor.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__SRV__DETAIL__SET_DYNAMICS_FACTOR__BUILDER_HPP_
#define FRANKY_MSGS__SRV__DETAIL__SET_DYNAMICS_FACTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franky_msgs/srv/detail/set_dynamics_factor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franky_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDynamicsFactor_Request_jerk_limit
{
public:
  explicit Init_SetDynamicsFactor_Request_jerk_limit(::franky_msgs::srv::SetDynamicsFactor_Request & msg)
  : msg_(msg)
  {}
  ::franky_msgs::srv::SetDynamicsFactor_Request jerk_limit(::franky_msgs::srv::SetDynamicsFactor_Request::_jerk_limit_type arg)
  {
    msg_.jerk_limit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franky_msgs::srv::SetDynamicsFactor_Request msg_;
};

class Init_SetDynamicsFactor_Request_acceleration_limit
{
public:
  explicit Init_SetDynamicsFactor_Request_acceleration_limit(::franky_msgs::srv::SetDynamicsFactor_Request & msg)
  : msg_(msg)
  {}
  Init_SetDynamicsFactor_Request_jerk_limit acceleration_limit(::franky_msgs::srv::SetDynamicsFactor_Request::_acceleration_limit_type arg)
  {
    msg_.acceleration_limit = std::move(arg);
    return Init_SetDynamicsFactor_Request_jerk_limit(msg_);
  }

private:
  ::franky_msgs::srv::SetDynamicsFactor_Request msg_;
};

class Init_SetDynamicsFactor_Request_velocity_limit
{
public:
  Init_SetDynamicsFactor_Request_velocity_limit()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDynamicsFactor_Request_acceleration_limit velocity_limit(::franky_msgs::srv::SetDynamicsFactor_Request::_velocity_limit_type arg)
  {
    msg_.velocity_limit = std::move(arg);
    return Init_SetDynamicsFactor_Request_acceleration_limit(msg_);
  }

private:
  ::franky_msgs::srv::SetDynamicsFactor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::franky_msgs::srv::SetDynamicsFactor_Request>()
{
  return franky_msgs::srv::builder::Init_SetDynamicsFactor_Request_velocity_limit();
}

}  // namespace franky_msgs


namespace franky_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDynamicsFactor_Response_success
{
public:
  Init_SetDynamicsFactor_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::franky_msgs::srv::SetDynamicsFactor_Response success(::franky_msgs::srv::SetDynamicsFactor_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franky_msgs::srv::SetDynamicsFactor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::franky_msgs::srv::SetDynamicsFactor_Response>()
{
  return franky_msgs::srv::builder::Init_SetDynamicsFactor_Response_success();
}

}  // namespace franky_msgs

#endif  // FRANKY_MSGS__SRV__DETAIL__SET_DYNAMICS_FACTOR__BUILDER_HPP_
