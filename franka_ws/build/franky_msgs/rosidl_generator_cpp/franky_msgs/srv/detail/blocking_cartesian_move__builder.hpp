// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franky_msgs:srv/BlockingCartesianMove.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__SRV__DETAIL__BLOCKING_CARTESIAN_MOVE__BUILDER_HPP_
#define FRANKY_MSGS__SRV__DETAIL__BLOCKING_CARTESIAN_MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franky_msgs/srv/detail/blocking_cartesian_move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franky_msgs
{

namespace srv
{

namespace builder
{

class Init_BlockingCartesianMove_Request_target
{
public:
  Init_BlockingCartesianMove_Request_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::franky_msgs::srv::BlockingCartesianMove_Request target(::franky_msgs::srv::BlockingCartesianMove_Request::_target_type arg)
  {
    msg_.target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franky_msgs::srv::BlockingCartesianMove_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::franky_msgs::srv::BlockingCartesianMove_Request>()
{
  return franky_msgs::srv::builder::Init_BlockingCartesianMove_Request_target();
}

}  // namespace franky_msgs


namespace franky_msgs
{

namespace srv
{

namespace builder
{

class Init_BlockingCartesianMove_Response_success
{
public:
  Init_BlockingCartesianMove_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::franky_msgs::srv::BlockingCartesianMove_Response success(::franky_msgs::srv::BlockingCartesianMove_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franky_msgs::srv::BlockingCartesianMove_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::franky_msgs::srv::BlockingCartesianMove_Response>()
{
  return franky_msgs::srv::builder::Init_BlockingCartesianMove_Response_success();
}

}  // namespace franky_msgs

#endif  // FRANKY_MSGS__SRV__DETAIL__BLOCKING_CARTESIAN_MOVE__BUILDER_HPP_
