// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_service_interfaces:msg/TargetCoordinates.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_INTERFACES__MSG__DETAIL__TARGET_COORDINATES__TRAITS_HPP_
#define MY_SERVICE_INTERFACES__MSG__DETAIL__TARGET_COORDINATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_service_interfaces/msg/detail/target_coordinates__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'coordinate'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace my_service_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TargetCoordinates & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: coordinate
  {
    out << "coordinate: ";
    to_flow_style_yaml(msg.coordinate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetCoordinates & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: coordinate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coordinate:\n";
    to_block_style_yaml(msg.coordinate, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetCoordinates & msg, bool use_flow_style = false)
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

}  // namespace my_service_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_service_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_service_interfaces::msg::TargetCoordinates & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_service_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_service_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_service_interfaces::msg::TargetCoordinates & msg)
{
  return my_service_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_service_interfaces::msg::TargetCoordinates>()
{
  return "my_service_interfaces::msg::TargetCoordinates";
}

template<>
inline const char * name<my_service_interfaces::msg::TargetCoordinates>()
{
  return "my_service_interfaces/msg/TargetCoordinates";
}

template<>
struct has_fixed_size<my_service_interfaces::msg::TargetCoordinates>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_service_interfaces::msg::TargetCoordinates>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_service_interfaces::msg::TargetCoordinates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_SERVICE_INTERFACES__MSG__DETAIL__TARGET_COORDINATES__TRAITS_HPP_
