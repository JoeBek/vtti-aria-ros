// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aria_vtti_interfaces:srv/Start.idl
// generated code does not contain a copyright notice

#ifndef ARIA_VTTI_INTERFACES__SRV__DETAIL__START__TRAITS_HPP_
#define ARIA_VTTI_INTERFACES__SRV__DETAIL__START__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aria_vtti_interfaces/srv/detail/start__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aria_vtti_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Start_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: optval
  {
    out << "optval: ";
    rosidl_generator_traits::value_to_yaml(msg.optval, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Start_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: optval
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "optval: ";
    rosidl_generator_traits::value_to_yaml(msg.optval, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Start_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace aria_vtti_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use aria_vtti_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aria_vtti_interfaces::srv::Start_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aria_vtti_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aria_vtti_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const aria_vtti_interfaces::srv::Start_Request & msg)
{
  return aria_vtti_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aria_vtti_interfaces::srv::Start_Request>()
{
  return "aria_vtti_interfaces::srv::Start_Request";
}

template<>
inline const char * name<aria_vtti_interfaces::srv::Start_Request>()
{
  return "aria_vtti_interfaces/srv/Start_Request";
}

template<>
struct has_fixed_size<aria_vtti_interfaces::srv::Start_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aria_vtti_interfaces::srv::Start_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aria_vtti_interfaces::srv::Start_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace aria_vtti_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Start_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Start_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Start_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace aria_vtti_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use aria_vtti_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aria_vtti_interfaces::srv::Start_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aria_vtti_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aria_vtti_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const aria_vtti_interfaces::srv::Start_Response & msg)
{
  return aria_vtti_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aria_vtti_interfaces::srv::Start_Response>()
{
  return "aria_vtti_interfaces::srv::Start_Response";
}

template<>
inline const char * name<aria_vtti_interfaces::srv::Start_Response>()
{
  return "aria_vtti_interfaces/srv/Start_Response";
}

template<>
struct has_fixed_size<aria_vtti_interfaces::srv::Start_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aria_vtti_interfaces::srv::Start_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aria_vtti_interfaces::srv::Start_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aria_vtti_interfaces::srv::Start>()
{
  return "aria_vtti_interfaces::srv::Start";
}

template<>
inline const char * name<aria_vtti_interfaces::srv::Start>()
{
  return "aria_vtti_interfaces/srv/Start";
}

template<>
struct has_fixed_size<aria_vtti_interfaces::srv::Start>
  : std::integral_constant<
    bool,
    has_fixed_size<aria_vtti_interfaces::srv::Start_Request>::value &&
    has_fixed_size<aria_vtti_interfaces::srv::Start_Response>::value
  >
{
};

template<>
struct has_bounded_size<aria_vtti_interfaces::srv::Start>
  : std::integral_constant<
    bool,
    has_bounded_size<aria_vtti_interfaces::srv::Start_Request>::value &&
    has_bounded_size<aria_vtti_interfaces::srv::Start_Response>::value
  >
{
};

template<>
struct is_service<aria_vtti_interfaces::srv::Start>
  : std::true_type
{
};

template<>
struct is_service_request<aria_vtti_interfaces::srv::Start_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aria_vtti_interfaces::srv::Start_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARIA_VTTI_INTERFACES__SRV__DETAIL__START__TRAITS_HPP_
