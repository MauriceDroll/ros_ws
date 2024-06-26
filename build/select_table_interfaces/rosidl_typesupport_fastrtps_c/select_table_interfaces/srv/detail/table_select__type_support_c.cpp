// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from select_table_interfaces:srv/TableSelect.idl
// generated code does not contain a copyright notice
#include "select_table_interfaces/srv/detail/table_select__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "select_table_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "select_table_interfaces/srv/detail/table_select__struct.h"
#include "select_table_interfaces/srv/detail/table_select__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _TableSelect_Request__ros_msg_type = select_table_interfaces__srv__TableSelect_Request;

static bool _TableSelect_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TableSelect_Request__ros_msg_type * ros_message = static_cast<const _TableSelect_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: request
  {
    cdr << (ros_message->request ? true : false);
  }

  return true;
}

static bool _TableSelect_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TableSelect_Request__ros_msg_type * ros_message = static_cast<_TableSelect_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: request
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->request = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_select_table_interfaces
size_t get_serialized_size_select_table_interfaces__srv__TableSelect_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TableSelect_Request__ros_msg_type * ros_message = static_cast<const _TableSelect_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name request
  {
    size_t item_size = sizeof(ros_message->request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TableSelect_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_select_table_interfaces__srv__TableSelect_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_select_table_interfaces
size_t max_serialized_size_select_table_interfaces__srv__TableSelect_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: request
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _TableSelect_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_select_table_interfaces__srv__TableSelect_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TableSelect_Request = {
  "select_table_interfaces::srv",
  "TableSelect_Request",
  _TableSelect_Request__cdr_serialize,
  _TableSelect_Request__cdr_deserialize,
  _TableSelect_Request__get_serialized_size,
  _TableSelect_Request__max_serialized_size
};

static rosidl_message_type_support_t _TableSelect_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TableSelect_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, select_table_interfaces, srv, TableSelect_Request)() {
  return &_TableSelect_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "select_table_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "select_table_interfaces/srv/detail/table_select__struct.h"
// already included above
// #include "select_table_interfaces/srv/detail/table_select__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _TableSelect_Response__ros_msg_type = select_table_interfaces__srv__TableSelect_Response;

static bool _TableSelect_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TableSelect_Response__ros_msg_type * ros_message = static_cast<const _TableSelect_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: table_id
  {
    cdr << ros_message->table_id;
  }

  return true;
}

static bool _TableSelect_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TableSelect_Response__ros_msg_type * ros_message = static_cast<_TableSelect_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: table_id
  {
    cdr >> ros_message->table_id;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_select_table_interfaces
size_t get_serialized_size_select_table_interfaces__srv__TableSelect_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TableSelect_Response__ros_msg_type * ros_message = static_cast<const _TableSelect_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name table_id
  {
    size_t item_size = sizeof(ros_message->table_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TableSelect_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_select_table_interfaces__srv__TableSelect_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_select_table_interfaces
size_t max_serialized_size_select_table_interfaces__srv__TableSelect_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: table_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TableSelect_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_select_table_interfaces__srv__TableSelect_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TableSelect_Response = {
  "select_table_interfaces::srv",
  "TableSelect_Response",
  _TableSelect_Response__cdr_serialize,
  _TableSelect_Response__cdr_deserialize,
  _TableSelect_Response__get_serialized_size,
  _TableSelect_Response__max_serialized_size
};

static rosidl_message_type_support_t _TableSelect_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TableSelect_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, select_table_interfaces, srv, TableSelect_Response)() {
  return &_TableSelect_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "select_table_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "select_table_interfaces/srv/table_select.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TableSelect__callbacks = {
  "select_table_interfaces::srv",
  "TableSelect",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, select_table_interfaces, srv, TableSelect_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, select_table_interfaces, srv, TableSelect_Response)(),
};

static rosidl_service_type_support_t TableSelect__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TableSelect__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, select_table_interfaces, srv, TableSelect)() {
  return &TableSelect__handle;
}

#if defined(__cplusplus)
}
#endif
