// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franky_msgs:msg/GripperState.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__GRIPPER_STATE__BUILDER_HPP_
#define FRANKY_MSGS__MSG__DETAIL__GRIPPER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franky_msgs/msg/detail/gripper_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franky_msgs
{

namespace msg
{

namespace builder
{

class Init_GripperState_is_grasped
{
public:
  explicit Init_GripperState_is_grasped(::franky_msgs::msg::GripperState & msg)
  : msg_(msg)
  {}
  ::franky_msgs::msg::GripperState is_grasped(::franky_msgs::msg::GripperState::_is_grasped_type arg)
  {
    msg_.is_grasped = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franky_msgs::msg::GripperState msg_;
};

class Init_GripperState_width
{
public:
  Init_GripperState_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperState_is_grasped width(::franky_msgs::msg::GripperState::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_GripperState_is_grasped(msg_);
  }

private:
  ::franky_msgs::msg::GripperState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::franky_msgs::msg::GripperState>()
{
  return franky_msgs::msg::builder::Init_GripperState_width();
}

}  // namespace franky_msgs

#endif  // FRANKY_MSGS__MSG__DETAIL__GRIPPER_STATE__BUILDER_HPP_
