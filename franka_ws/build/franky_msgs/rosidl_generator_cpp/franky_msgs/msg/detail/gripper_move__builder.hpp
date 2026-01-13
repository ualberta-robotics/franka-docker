// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franky_msgs:msg/GripperMove.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__GRIPPER_MOVE__BUILDER_HPP_
#define FRANKY_MSGS__MSG__DETAIL__GRIPPER_MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franky_msgs/msg/detail/gripper_move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franky_msgs
{

namespace msg
{

namespace builder
{

class Init_GripperMove_speed
{
public:
  explicit Init_GripperMove_speed(::franky_msgs::msg::GripperMove & msg)
  : msg_(msg)
  {}
  ::franky_msgs::msg::GripperMove speed(::franky_msgs::msg::GripperMove::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franky_msgs::msg::GripperMove msg_;
};

class Init_GripperMove_width
{
public:
  Init_GripperMove_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperMove_speed width(::franky_msgs::msg::GripperMove::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_GripperMove_speed(msg_);
  }

private:
  ::franky_msgs::msg::GripperMove msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::franky_msgs::msg::GripperMove>()
{
  return franky_msgs::msg::builder::Init_GripperMove_width();
}

}  // namespace franky_msgs

#endif  // FRANKY_MSGS__MSG__DETAIL__GRIPPER_MOVE__BUILDER_HPP_
