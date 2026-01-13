// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franky_msgs:msg/JointMove.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__JOINT_MOVE__BUILDER_HPP_
#define FRANKY_MSGS__MSG__DETAIL__JOINT_MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franky_msgs/msg/detail/joint_move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franky_msgs
{

namespace msg
{

namespace builder
{

class Init_JointMove_positions
{
public:
  explicit Init_JointMove_positions(::franky_msgs::msg::JointMove & msg)
  : msg_(msg)
  {}
  ::franky_msgs::msg::JointMove positions(::franky_msgs::msg::JointMove::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franky_msgs::msg::JointMove msg_;
};

class Init_JointMove_relative
{
public:
  Init_JointMove_relative()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointMove_positions relative(::franky_msgs::msg::JointMove::_relative_type arg)
  {
    msg_.relative = std::move(arg);
    return Init_JointMove_positions(msg_);
  }

private:
  ::franky_msgs::msg::JointMove msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::franky_msgs::msg::JointMove>()
{
  return franky_msgs::msg::builder::Init_JointMove_relative();
}

}  // namespace franky_msgs

#endif  // FRANKY_MSGS__MSG__DETAIL__JOINT_MOVE__BUILDER_HPP_
