// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fun5mini_interfaces:srv/EatCall.idl
// generated code does not contain a copyright notice

#ifndef FUN5MINI_INTERFACES__SRV__DETAIL__EAT_CALL__TRAITS_HPP_
#define FUN5MINI_INTERFACES__SRV__DETAIL__EAT_CALL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fun5mini_interfaces/srv/detail/eat_call__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fun5mini_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const EatCall_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: eat
  {
    out << "eat: ";
    rosidl_generator_traits::value_to_yaml(msg.eat, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EatCall_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: eat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eat: ";
    rosidl_generator_traits::value_to_yaml(msg.eat, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EatCall_Request & msg, bool use_flow_style = false)
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

}  // namespace fun5mini_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use fun5mini_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fun5mini_interfaces::srv::EatCall_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  fun5mini_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fun5mini_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const fun5mini_interfaces::srv::EatCall_Request & msg)
{
  return fun5mini_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<fun5mini_interfaces::srv::EatCall_Request>()
{
  return "fun5mini_interfaces::srv::EatCall_Request";
}

template<>
inline const char * name<fun5mini_interfaces::srv::EatCall_Request>()
{
  return "fun5mini_interfaces/srv/EatCall_Request";
}

template<>
struct has_fixed_size<fun5mini_interfaces::srv::EatCall_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fun5mini_interfaces::srv::EatCall_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fun5mini_interfaces::srv::EatCall_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace fun5mini_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const EatCall_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EatCall_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EatCall_Response & msg, bool use_flow_style = false)
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

}  // namespace fun5mini_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use fun5mini_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fun5mini_interfaces::srv::EatCall_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  fun5mini_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fun5mini_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const fun5mini_interfaces::srv::EatCall_Response & msg)
{
  return fun5mini_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<fun5mini_interfaces::srv::EatCall_Response>()
{
  return "fun5mini_interfaces::srv::EatCall_Response";
}

template<>
inline const char * name<fun5mini_interfaces::srv::EatCall_Response>()
{
  return "fun5mini_interfaces/srv/EatCall_Response";
}

template<>
struct has_fixed_size<fun5mini_interfaces::srv::EatCall_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fun5mini_interfaces::srv::EatCall_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fun5mini_interfaces::srv::EatCall_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fun5mini_interfaces::srv::EatCall>()
{
  return "fun5mini_interfaces::srv::EatCall";
}

template<>
inline const char * name<fun5mini_interfaces::srv::EatCall>()
{
  return "fun5mini_interfaces/srv/EatCall";
}

template<>
struct has_fixed_size<fun5mini_interfaces::srv::EatCall>
  : std::integral_constant<
    bool,
    has_fixed_size<fun5mini_interfaces::srv::EatCall_Request>::value &&
    has_fixed_size<fun5mini_interfaces::srv::EatCall_Response>::value
  >
{
};

template<>
struct has_bounded_size<fun5mini_interfaces::srv::EatCall>
  : std::integral_constant<
    bool,
    has_bounded_size<fun5mini_interfaces::srv::EatCall_Request>::value &&
    has_bounded_size<fun5mini_interfaces::srv::EatCall_Response>::value
  >
{
};

template<>
struct is_service<fun5mini_interfaces::srv::EatCall>
  : std::true_type
{
};

template<>
struct is_service_request<fun5mini_interfaces::srv::EatCall_Request>
  : std::true_type
{
};

template<>
struct is_service_response<fun5mini_interfaces::srv::EatCall_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FUN5MINI_INTERFACES__SRV__DETAIL__EAT_CALL__TRAITS_HPP_
