# generated from rosidl_generator_py/resource/_idl.py.em
# with input from opencat_msgs:srv/BaseTask.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'arguments'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BaseTask_Request(type):
    """Metaclass of message 'BaseTask_Request'."""

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
            module = import_type_support('opencat_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'opencat_msgs.srv.BaseTask_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__base_task__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__base_task__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__base_task__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__base_task__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__base_task__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BaseTask_Request(metaclass=Metaclass_BaseTask_Request):
    """Message class 'BaseTask_Request'."""

    __slots__ = [
        '_cmd',
        '_arguments',
        '_delay',
    ]

    _fields_and_field_types = {
        'cmd': 'uint8',
        'arguments': 'sequence<int16>',
        'delay': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cmd = kwargs.get('cmd', int())
        self.arguments = array.array('h', kwargs.get('arguments', []))
        self.delay = kwargs.get('delay', float())

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
        if self.cmd != other.cmd:
            return False
        if self.arguments != other.arguments:
            return False
        if self.delay != other.delay:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cmd(self):
        """Message field 'cmd'."""
        return self._cmd

    @cmd.setter
    def cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cmd' field must be an unsigned integer in [0, 255]"
        self._cmd = value

    @builtins.property
    def arguments(self):
        """Message field 'arguments'."""
        return self._arguments

    @arguments.setter
    def arguments(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'arguments' array.array() must have the type code of 'h'"
            self._arguments = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'arguments' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._arguments = array.array('h', value)

    @builtins.property
    def delay(self):
        """Message field 'delay'."""
        return self._delay

    @delay.setter
    def delay(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delay' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'delay' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._delay = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_BaseTask_Response(type):
    """Metaclass of message 'BaseTask_Response'."""

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
            module = import_type_support('opencat_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'opencat_msgs.srv.BaseTask_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__base_task__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__base_task__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__base_task__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__base_task__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__base_task__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BaseTask_Response(metaclass=Metaclass_BaseTask_Response):
    """Message class 'BaseTask_Response'."""

    __slots__ = [
        '_res',
    ]

    _fields_and_field_types = {
        'res': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.res = kwargs.get('res', bool())

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
        if self.res != other.res:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def res(self):
        """Message field 'res'."""
        return self._res

    @res.setter
    def res(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'res' field must be of type 'bool'"
        self._res = value


class Metaclass_BaseTask(type):
    """Metaclass of service 'BaseTask'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('opencat_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'opencat_msgs.srv.BaseTask')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__base_task

            from opencat_msgs.srv import _base_task
            if _base_task.Metaclass_BaseTask_Request._TYPE_SUPPORT is None:
                _base_task.Metaclass_BaseTask_Request.__import_type_support__()
            if _base_task.Metaclass_BaseTask_Response._TYPE_SUPPORT is None:
                _base_task.Metaclass_BaseTask_Response.__import_type_support__()


class BaseTask(metaclass=Metaclass_BaseTask):
    from opencat_msgs.srv._base_task import BaseTask_Request as Request
    from opencat_msgs.srv._base_task import BaseTask_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
