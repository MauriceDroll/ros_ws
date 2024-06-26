// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from select_table_interfaces:srv/TableSelect.idl
// generated code does not contain a copyright notice

#ifndef SELECT_TABLE_INTERFACES__SRV__DETAIL__TABLE_SELECT__STRUCT_H_
#define SELECT_TABLE_INTERFACES__SRV__DETAIL__TABLE_SELECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TableSelect in the package select_table_interfaces.
typedef struct select_table_interfaces__srv__TableSelect_Request
{
  bool request;
} select_table_interfaces__srv__TableSelect_Request;

// Struct for a sequence of select_table_interfaces__srv__TableSelect_Request.
typedef struct select_table_interfaces__srv__TableSelect_Request__Sequence
{
  select_table_interfaces__srv__TableSelect_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} select_table_interfaces__srv__TableSelect_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/TableSelect in the package select_table_interfaces.
typedef struct select_table_interfaces__srv__TableSelect_Response
{
  int16_t table_id;
} select_table_interfaces__srv__TableSelect_Response;

// Struct for a sequence of select_table_interfaces__srv__TableSelect_Response.
typedef struct select_table_interfaces__srv__TableSelect_Response__Sequence
{
  select_table_interfaces__srv__TableSelect_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} select_table_interfaces__srv__TableSelect_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SELECT_TABLE_INTERFACES__SRV__DETAIL__TABLE_SELECT__STRUCT_H_
