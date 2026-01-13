// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from franky_msgs:msg/GripperGrasp.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__GRIPPER_GRASP__TRAITS_HPP_
#define FRANKY_MSGS__MSG__DETAIL__GRIPPER_GRASP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "franky_msgs/msg/detail/gripper_grasp__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace franky_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GripperGrasp & msg,
  std::ostream & out)
{
  out << "{";
  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: force
  {
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
    out << ", ";
  }

  // member: epsilon_inner
  {
    out << "epsilon_inner: ";
    rosidl_generator_traits::value_to_yaml(msg.epsilon_inner, out);
    out << ", ";
  }

  // member: epsilon_outer
  {
    out << "epsilon_outer: ";
    rosidl_generator_traits::value_to_yaml(msg.epsilon_outer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperGrasp & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
    out << "\n";
  }

  // member: epsilon_inner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epsilon_inner: ";
    rosidl_generator_traits::value_to_yaml(msg.epsilon_inner, out);
    out << "\n";
  }

  // member: epsilon_outer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epsilon_outer: ";
    rosidl_generator_traits::value_to_yaml(msg.epsilon_outer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperGrasp & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace franky_msgs

namespace rosidl_generator_traits
{

[[deprecated("use franky_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const franky_msgs::msg::GripperGrasp & msg,
  std::ostream & out, size_t indentation = 0)
{
  franky_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franky_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const franky_msgs::msg::GripperGrasp & msg)
{
  return franky_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<franky_msgs::msg::GripperGrasp>()
{
  return "franky_msgs::msg::GripperGrasp";
}

template<>
inline const char * name<franky_msgs::msg::GripperGrasp>()
{
  return "franky_msgs/msg/GripperGrasp";
}

template<>
struct has_fixed_size<franky_msgs::msg::GripperGrasp>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<franky_msgs::msg::GripperGrasp>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<franky_msgs::msg::GripperGrasp>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FRANKY_MSGS__MSG__DETAIL__GRIPPER_GRASP__TRAITS_HPP_
