// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from select_table_interfaces:srv/TableSelect.idl
// generated code does not contain a copyright notice

#ifndef SELECT_TABLE_INTERFACES__SRV__DETAIL__TABLE_SELECT__BUILDER_HPP_
#define SELECT_TABLE_INTERFACES__SRV__DETAIL__TABLE_SELECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "select_table_interfaces/srv/detail/table_select__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace select_table_interfaces
{

namespace srv
{

namespace builder
{

class Init_TableSelect_Request_request
{
public:
  Init_TableSelect_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::select_table_interfaces::srv::TableSelect_Request request(::select_table_interfaces::srv::TableSelect_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::select_table_interfaces::srv::TableSelect_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::select_table_interfaces::srv::TableSelect_Request>()
{
  return select_table_interfaces::srv::builder::Init_TableSelect_Request_request();
}

}  // namespace select_table_interfaces


namespace select_table_interfaces
{

namespace srv
{

namespace builder
{

class Init_TableSelect_Response_table_id
{
public:
  Init_TableSelect_Response_table_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::select_table_interfaces::srv::TableSelect_Response table_id(::select_table_interfaces::srv::TableSelect_Response::_table_id_type arg)
  {
    msg_.table_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::select_table_interfaces::srv::TableSelect_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::select_table_interfaces::srv::TableSelect_Response>()
{
  return select_table_interfaces::srv::builder::Init_TableSelect_Response_table_id();
}

}  // namespace select_table_interfaces

#endif  // SELECT_TABLE_INTERFACES__SRV__DETAIL__TABLE_SELECT__BUILDER_HPP_
