// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from select_table_interfaces:srv/TableSelect.idl
// generated code does not contain a copyright notice

#ifndef SELECT_TABLE_INTERFACES__SRV__DETAIL__TABLE_SELECT__TRAITS_HPP_
#define SELECT_TABLE_INTERFACES__SRV__DETAIL__TABLE_SELECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "select_table_interfaces/srv/detail/table_select__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace select_table_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TableSelect_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    out << "request: ";
    rosidl_generator_traits::value_to_yaml(msg.request, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TableSelect_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request: ";
    rosidl_generator_traits::value_to_yaml(msg.request, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TableSelect_Request & msg, bool use_flow_style = false)
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

}  // namespace select_table_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use select_table_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const select_table_interfaces::srv::TableSelect_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  select_table_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use select_table_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const select_table_interfaces::srv::TableSelect_Request & msg)
{
  return select_table_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<select_table_interfaces::srv::TableSelect_Request>()
{
  return "select_table_interfaces::srv::TableSelect_Request";
}

template<>
inline const char * name<select_table_interfaces::srv::TableSelect_Request>()
{
  return "select_table_interfaces/srv/TableSelect_Request";
}

template<>
struct has_fixed_size<select_table_interfaces::srv::TableSelect_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<select_table_interfaces::srv::TableSelect_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<select_table_interfaces::srv::TableSelect_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace select_table_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TableSelect_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: table_id
  {
    out << "table_id: ";
    rosidl_generator_traits::value_to_yaml(msg.table_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TableSelect_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: table_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "table_id: ";
    rosidl_generator_traits::value_to_yaml(msg.table_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TableSelect_Response & msg, bool use_flow_style = false)
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

}  // namespace select_table_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use select_table_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const select_table_interfaces::srv::TableSelect_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  select_table_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use select_table_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const select_table_interfaces::srv::TableSelect_Response & msg)
{
  return select_table_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<select_table_interfaces::srv::TableSelect_Response>()
{
  return "select_table_interfaces::srv::TableSelect_Response";
}

template<>
inline const char * name<select_table_interfaces::srv::TableSelect_Response>()
{
  return "select_table_interfaces/srv/TableSelect_Response";
}

template<>
struct has_fixed_size<select_table_interfaces::srv::TableSelect_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<select_table_interfaces::srv::TableSelect_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<select_table_interfaces::srv::TableSelect_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<select_table_interfaces::srv::TableSelect>()
{
  return "select_table_interfaces::srv::TableSelect";
}

template<>
inline const char * name<select_table_interfaces::srv::TableSelect>()
{
  return "select_table_interfaces/srv/TableSelect";
}

template<>
struct has_fixed_size<select_table_interfaces::srv::TableSelect>
  : std::integral_constant<
    bool,
    has_fixed_size<select_table_interfaces::srv::TableSelect_Request>::value &&
    has_fixed_size<select_table_interfaces::srv::TableSelect_Response>::value
  >
{
};

template<>
struct has_bounded_size<select_table_interfaces::srv::TableSelect>
  : std::integral_constant<
    bool,
    has_bounded_size<select_table_interfaces::srv::TableSelect_Request>::value &&
    has_bounded_size<select_table_interfaces::srv::TableSelect_Response>::value
  >
{
};

template<>
struct is_service<select_table_interfaces::srv::TableSelect>
  : std::true_type
{
};

template<>
struct is_service_request<select_table_interfaces::srv::TableSelect_Request>
  : std::true_type
{
};

template<>
struct is_service_response<select_table_interfaces::srv::TableSelect_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SELECT_TABLE_INTERFACES__SRV__DETAIL__TABLE_SELECT__TRAITS_HPP_
