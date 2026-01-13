// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franky_msgs:msg/GripperGrasp.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__GRIPPER_GRASP__BUILDER_HPP_
#define FRANKY_MSGS__MSG__DETAIL__GRIPPER_GRASP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franky_msgs/msg/detail/gripper_grasp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franky_msgs
{

namespace msg
{

namespace builder
{

class Init_GripperGrasp_epsilon_outer
{
public:
  explicit Init_GripperGrasp_epsilon_outer(::franky_msgs::msg::GripperGrasp & msg)
  : msg_(msg)
  {}
  ::franky_msgs::msg::GripperGrasp epsilon_outer(::franky_msgs::msg::GripperGrasp::_epsilon_outer_type arg)
  {
    msg_.epsilon_outer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franky_msgs::msg::GripperGrasp msg_;
};

class Init_GripperGrasp_epsilon_inner
{
public:
  explicit Init_GripperGrasp_epsilon_inner(::franky_msgs::msg::GripperGrasp & msg)
  : msg_(msg)
  {}
  Init_GripperGrasp_epsilon_outer epsilon_inner(::franky_msgs::msg::GripperGrasp::_epsilon_inner_type arg)
  {
    msg_.epsilon_inner = std::move(arg);
    return Init_GripperGrasp_epsilon_outer(msg_);
  }

private:
  ::franky_msgs::msg::GripperGrasp msg_;
};

class Init_GripperGrasp_force
{
public:
  explicit Init_GripperGrasp_force(::franky_msgs::msg::GripperGrasp & msg)
  : msg_(msg)
  {}
  Init_GripperGrasp_epsilon_inner force(::franky_msgs::msg::GripperGrasp::_force_type arg)
  {
    msg_.force = std::move(arg);
    return Init_GripperGrasp_epsilon_inner(msg_);
  }

private:
  ::franky_msgs::msg::GripperGrasp msg_;
};

class Init_GripperGrasp_speed
{
public:
  explicit Init_GripperGrasp_speed(::franky_msgs::msg::GripperGrasp & msg)
  : msg_(msg)
  {}
  Init_GripperGrasp_force speed(::franky_msgs::msg::GripperGrasp::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_GripperGrasp_force(msg_);
  }

private:
  ::franky_msgs::msg::GripperGrasp msg_;
};

class Init_GripperGrasp_width
{
public:
  Init_GripperGrasp_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperGrasp_speed width(::franky_msgs::msg::GripperGrasp::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_GripperGrasp_speed(msg_);
  }

private:
  ::franky_msgs::msg::GripperGrasp msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::franky_msgs::msg::GripperGrasp>()
{
  return franky_msgs::msg::builder::Init_GripperGrasp_width();
}

}  // namespace franky_msgs

#endif  // FRANKY_MSGS__MSG__DETAIL__GRIPPER_GRASP__BUILDER_HPP_
