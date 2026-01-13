// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franky_msgs:msg/CartesianMove.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__CARTESIAN_MOVE__BUILDER_HPP_
#define FRANKY_MSGS__MSG__DETAIL__CARTESIAN_MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franky_msgs/msg/detail/cartesian_move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franky_msgs
{

namespace msg
{

namespace builder
{

class Init_CartesianMove_pose
{
public:
  explicit Init_CartesianMove_pose(::franky_msgs::msg::CartesianMove & msg)
  : msg_(msg)
  {}
  ::franky_msgs::msg::CartesianMove pose(::franky_msgs::msg::CartesianMove::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franky_msgs::msg::CartesianMove msg_;
};

class Init_CartesianMove_relative
{
public:
  Init_CartesianMove_relative()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CartesianMove_pose relative(::franky_msgs::msg::CartesianMove::_relative_type arg)
  {
    msg_.relative = std::move(arg);
    return Init_CartesianMove_pose(msg_);
  }

private:
  ::franky_msgs::msg::CartesianMove msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::franky_msgs::msg::CartesianMove>()
{
  return franky_msgs::msg::builder::Init_CartesianMove_relative();
}

}  // namespace franky_msgs

#endif  // FRANKY_MSGS__MSG__DETAIL__CARTESIAN_MOVE__BUILDER_HPP_
