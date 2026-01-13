# generated from rosidl_generator_py/resource/_idl.py.em
# with input from franky_msgs:msg/GripperGrasp.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GripperGrasp(type):
    """Metaclass of message 'GripperGrasp'."""

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
            module = import_type_support('franky_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'franky_msgs.msg.GripperGrasp')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gripper_grasp
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gripper_grasp
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gripper_grasp
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gripper_grasp
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gripper_grasp

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GripperGrasp(metaclass=Metaclass_GripperGrasp):
    """Message class 'GripperGrasp'."""

    __slots__ = [
        '_width',
        '_speed',
        '_force',
        '_epsilon_inner',
        '_epsilon_outer',
    ]

    _fields_and_field_types = {
        'width': 'double',
        'speed': 'double',
        'force': 'double',
        'epsilon_inner': 'double',
        'epsilon_outer': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.width = kwargs.get('width', float())
        self.speed = kwargs.get('speed', float())
        self.force = kwargs.get('force', float())
        self.epsilon_inner = kwargs.get('epsilon_inner', float())
        self.epsilon_outer = kwargs.get('epsilon_outer', float())

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
        if self.width != other.width:
            return False
        if self.speed != other.speed:
            return False
        if self.force != other.force:
            return False
        if self.epsilon_inner != other.epsilon_inner:
            return False
        if self.epsilon_outer != other.epsilon_outer:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'width' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'width' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._width = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed = value

    @builtins.property
    def force(self):
        """Message field 'force'."""
        return self._force

    @force.setter
    def force(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'force' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'force' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._force = value

    @builtins.property
    def epsilon_inner(self):
        """Message field 'epsilon_inner'."""
        return self._epsilon_inner

    @epsilon_inner.setter
    def epsilon_inner(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'epsilon_inner' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'epsilon_inner' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._epsilon_inner = value

    @builtins.property
    def epsilon_outer(self):
        """Message field 'epsilon_outer'."""
        return self._epsilon_outer

    @epsilon_outer.setter
    def epsilon_outer(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'epsilon_outer' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'epsilon_outer' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._epsilon_outer = value
