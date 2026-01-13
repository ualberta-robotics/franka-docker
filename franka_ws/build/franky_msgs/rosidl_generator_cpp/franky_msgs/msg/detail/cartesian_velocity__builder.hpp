// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franky_msgs:msg/CartesianVelocity.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__CARTESIAN_VELOCITY__BUILDER_HPP_
#define FRANKY_MSGS__MSG__DETAIL__CARTESIAN_VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franky_msgs/msg/detail/cartesian_velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franky_msgs
{

namespace msg
{

namespace builder
{

class Init_CartesianVelocity_twist
{
public:
  explicit Init_CartesianVelocity_twist(::franky_msgs::msg::CartesianVelocity & msg)
  : msg_(msg)
  {}
  ::franky_msgs::msg::CartesianVelocity twist(::franky_msgs::msg::CartesianVelocity::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franky_msgs::msg::CartesianVelocity msg_;
};

class Init_CartesianVelocity_duration_millis
{
public:
  Init_CartesianVelocity_duration_millis()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CartesianVelocity_twist duration_millis(::franky_msgs::msg::CartesianVelocity::_duration_millis_type arg)
  {
    msg_.duration_millis = std::move(arg);
    return Init_CartesianVelocity_twist(msg_);
  }

private:
  ::franky_msgs::msg::CartesianVelocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::franky_msgs::msg::CartesianVelocity>()
{
  return franky_msgs::msg::builder::Init_CartesianVelocity_duration_millis();
}

}  // namespace franky_msgs

#endif  // FRANKY_MSGS__MSG__DETAIL__CARTESIAN_VELOCITY__BUILDER_HPP_
