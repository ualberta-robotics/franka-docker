// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franky_msgs:msg/JointVelocity.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__JOINT_VELOCITY__BUILDER_HPP_
#define FRANKY_MSGS__MSG__DETAIL__JOINT_VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franky_msgs/msg/detail/joint_velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franky_msgs
{

namespace msg
{

namespace builder
{

class Init_JointVelocity_vels
{
public:
  explicit Init_JointVelocity_vels(::franky_msgs::msg::JointVelocity & msg)
  : msg_(msg)
  {}
  ::franky_msgs::msg::JointVelocity vels(::franky_msgs::msg::JointVelocity::_vels_type arg)
  {
    msg_.vels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franky_msgs::msg::JointVelocity msg_;
};

class Init_JointVelocity_duration_millis
{
public:
  Init_JointVelocity_duration_millis()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointVelocity_vels duration_millis(::franky_msgs::msg::JointVelocity::_duration_millis_type arg)
  {
    msg_.duration_millis = std::move(arg);
    return Init_JointVelocity_vels(msg_);
  }

private:
  ::franky_msgs::msg::JointVelocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::franky_msgs::msg::JointVelocity>()
{
  return franky_msgs::msg::builder::Init_JointVelocity_duration_millis();
}

}  // namespace franky_msgs

#endif  // FRANKY_MSGS__MSG__DETAIL__JOINT_VELOCITY__BUILDER_HPP_
