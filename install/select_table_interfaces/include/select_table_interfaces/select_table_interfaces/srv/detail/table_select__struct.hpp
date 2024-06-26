// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from select_table_interfaces:srv/TableSelect.idl
// generated code does not contain a copyright notice

#ifndef SELECT_TABLE_INTERFACES__SRV__DETAIL__TABLE_SELECT__STRUCT_HPP_
#define SELECT_TABLE_INTERFACES__SRV__DETAIL__TABLE_SELECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__select_table_interfaces__srv__TableSelect_Request __attribute__((deprecated))
#else
# define DEPRECATED__select_table_interfaces__srv__TableSelect_Request __declspec(deprecated)
#endif

namespace select_table_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TableSelect_Request_
{
  using Type = TableSelect_Request_<ContainerAllocator>;

  explicit TableSelect_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request = false;
    }
  }

  explicit TableSelect_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request = false;
    }
  }

  // field types and members
  using _request_type =
    bool;
  _request_type request;

  // setters for named parameter idiom
  Type & set__request(
    const bool & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    select_table_interfaces::srv::TableSelect_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const select_table_interfaces::srv::TableSelect_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<select_table_interfaces::srv::TableSelect_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<select_table_interfaces::srv::TableSelect_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      select_table_interfaces::srv::TableSelect_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<select_table_interfaces::srv::TableSelect_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      select_table_interfaces::srv::TableSelect_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<select_table_interfaces::srv::TableSelect_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<select_table_interfaces::srv::TableSelect_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<select_table_interfaces::srv::TableSelect_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__select_table_interfaces__srv__TableSelect_Request
    std::shared_ptr<select_table_interfaces::srv::TableSelect_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__select_table_interfaces__srv__TableSelect_Request
    std::shared_ptr<select_table_interfaces::srv::TableSelect_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TableSelect_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const TableSelect_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TableSelect_Request_

// alias to use template instance with default allocator
using TableSelect_Request =
  select_table_interfaces::srv::TableSelect_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace select_table_interfaces


#ifndef _WIN32
# define DEPRECATED__select_table_interfaces__srv__TableSelect_Response __attribute__((deprecated))
#else
# define DEPRECATED__select_table_interfaces__srv__TableSelect_Response __declspec(deprecated)
#endif

namespace select_table_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TableSelect_Response_
{
  using Type = TableSelect_Response_<ContainerAllocator>;

  explicit TableSelect_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->table_id = 0;
    }
  }

  explicit TableSelect_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->table_id = 0;
    }
  }

  // field types and members
  using _table_id_type =
    int16_t;
  _table_id_type table_id;

  // setters for named parameter idiom
  Type & set__table_id(
    const int16_t & _arg)
  {
    this->table_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    select_table_interfaces::srv::TableSelect_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const select_table_interfaces::srv::TableSelect_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<select_table_interfaces::srv::TableSelect_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<select_table_interfaces::srv::TableSelect_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      select_table_interfaces::srv::TableSelect_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<select_table_interfaces::srv::TableSelect_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      select_table_interfaces::srv::TableSelect_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<select_table_interfaces::srv::TableSelect_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<select_table_interfaces::srv::TableSelect_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<select_table_interfaces::srv::TableSelect_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__select_table_interfaces__srv__TableSelect_Response
    std::shared_ptr<select_table_interfaces::srv::TableSelect_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__select_table_interfaces__srv__TableSelect_Response
    std::shared_ptr<select_table_interfaces::srv::TableSelect_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TableSelect_Response_ & other) const
  {
    if (this->table_id != other.table_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TableSelect_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TableSelect_Response_

// alias to use template instance with default allocator
using TableSelect_Response =
  select_table_interfaces::srv::TableSelect_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace select_table_interfaces

namespace select_table_interfaces
{

namespace srv
{

struct TableSelect
{
  using Request = select_table_interfaces::srv::TableSelect_Request;
  using Response = select_table_interfaces::srv::TableSelect_Response;
};

}  // namespace srv

}  // namespace select_table_interfaces

#endif  // SELECT_TABLE_INTERFACES__SRV__DETAIL__TABLE_SELECT__STRUCT_HPP_
