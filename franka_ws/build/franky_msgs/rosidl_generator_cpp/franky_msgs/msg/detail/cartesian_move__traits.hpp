// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from franky_msgs:msg/CartesianMove.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__CARTESIAN_MOVE__TRAITS_HPP_
#define FRANKY_MSGS__MSG__DETAIL__CARTESIAN_MOVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "franky_msgs/msg/detail/cartesian_move__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace franky_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CartesianMove & msg,
  std::ostream & out)
{
  out << "{";
  // member: relative
  {
    out << "relative: ";
    rosidl_generator_traits::value_to_yaml(msg.relative, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CartesianMove & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: relative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative: ";
    rosidl_generator_traits::value_to_yaml(msg.relative, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CartesianMove & msg, bool use_flow_style = false)
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
  const franky_msgs::msg::CartesianMove & msg,
  std::ostream & out, size_t indentation = 0)
{
  franky_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franky_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const franky_msgs::msg::CartesianMove & msg)
{
  return franky_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<franky_msgs::msg::CartesianMove>()
{
  return "franky_msgs::msg::CartesianMove";
}

template<>
inline const char * name<franky_msgs::msg::CartesianMove>()
{
  return "franky_msgs/msg/CartesianMove";
}

template<>
struct has_fixed_size<franky_msgs::msg::CartesianMove>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<franky_msgs::msg::CartesianMove>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<franky_msgs::msg::CartesianMove>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FRANKY_MSGS__MSG__DETAIL__CARTESIAN_MOVE__TRAITS_HPP_
