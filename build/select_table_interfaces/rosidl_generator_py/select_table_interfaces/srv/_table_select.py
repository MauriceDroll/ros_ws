# generated from rosidl_generator_py/resource/_idl.py.em
# with input from select_table_interfaces:srv/TableSelect.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TableSelect_Request(type):
    """Metaclass of message 'TableSelect_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('select_table_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'select_table_interfaces.srv.TableSelect_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__table_select__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__table_select__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__table_select__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__table_select__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__table_select__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TableSelect_Request(metaclass=Metaclass_TableSelect_Request):
    """Message class 'TableSelect_Request'."""

    __slots__ = [
        '_request',
    ]

    _fields_and_field_types = {
        'request': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.request = kwargs.get('request', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.request != other.request:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'request' field must be of type 'bool'"
        self._request = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TableSelect_Response(type):
    """Metaclass of message 'TableSelect_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('select_table_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'select_table_interfaces.srv.TableSelect_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__table_select__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__table_select__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__table_select__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__table_select__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__table_select__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TableSelect_Response(metaclass=Metaclass_TableSelect_Response):
    """Message class 'TableSelect_Response'."""

    __slots__ = [
        '_table_id',
    ]

    _fields_and_field_types = {
        'table_id': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.table_id = kwargs.get('table_id', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.table_id != other.table_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def table_id(self):
        """Message field 'table_id'."""
        return self._table_id

    @table_id.setter
    def table_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'table_id' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'table_id' field must be an integer in [-32768, 32767]"
        self._table_id = value


class Metaclass_TableSelect(type):
    """Metaclass of service 'TableSelect'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('select_table_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'select_table_interfaces.srv.TableSelect')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__table_select

            from select_table_interfaces.srv import _table_select
            if _table_select.Metaclass_TableSelect_Request._TYPE_SUPPORT is None:
                _table_select.Metaclass_TableSelect_Request.__import_type_support__()
            if _table_select.Metaclass_TableSelect_Response._TYPE_SUPPORT is None:
                _table_select.Metaclass_TableSelect_Response.__import_type_support__()


class TableSelect(metaclass=Metaclass_TableSelect):
    from select_table_interfaces.srv._table_select import TableSelect_Request as Request
    from select_table_interfaces.srv._table_select import TableSelect_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
