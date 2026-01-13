# generated from rosidl_generator_py/resource/_idl.py.em
# with input from franky_msgs:srv/BlockingCartesianMove.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BlockingCartesianMove_Request(type):
    """Metaclass of message 'BlockingCartesianMove_Request'."""

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
                'franky_msgs.srv.BlockingCartesianMove_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__blocking_cartesian_move__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__blocking_cartesian_move__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__blocking_cartesian_move__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__blocking_cartesian_move__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__blocking_cartesian_move__request

            from franky_msgs.msg import CartesianMove
            if CartesianMove.__class__._TYPE_SUPPORT is None:
                CartesianMove.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BlockingCartesianMove_Request(metaclass=Metaclass_BlockingCartesianMove_Request):
    """Message class 'BlockingCartesianMove_Request'."""

    __slots__ = [
        '_target',
    ]

    _fields_and_field_types = {
        'target': 'franky_msgs/CartesianMove',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['franky_msgs', 'msg'], 'CartesianMove'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from franky_msgs.msg import CartesianMove
        self.target = kwargs.get('target', CartesianMove())

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
        if self.target != other.target:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target(self):
        """Message field 'target'."""
        return self._target

    @target.setter
    def target(self, value):
        if __debug__:
            from franky_msgs.msg import CartesianMove
            assert \
                isinstance(value, CartesianMove), \
                "The 'target' field must be a sub message of type 'CartesianMove'"
        self._target = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_BlockingCartesianMove_Response(type):
    """Metaclass of message 'BlockingCartesianMove_Response'."""

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
                'franky_msgs.srv.BlockingCartesianMove_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__blocking_cartesian_move__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__blocking_cartesian_move__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__blocking_cartesian_move__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__blocking_cartesian_move__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__blocking_cartesian_move__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BlockingCartesianMove_Response(metaclass=Metaclass_BlockingCartesianMove_Response):
    """Message class 'BlockingCartesianMove_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_BlockingCartesianMove(type):
    """Metaclass of service 'BlockingCartesianMove'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('franky_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'franky_msgs.srv.BlockingCartesianMove')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__blocking_cartesian_move

            from franky_msgs.srv import _blocking_cartesian_move
            if _blocking_cartesian_move.Metaclass_BlockingCartesianMove_Request._TYPE_SUPPORT is None:
                _blocking_cartesian_move.Metaclass_BlockingCartesianMove_Request.__import_type_support__()
            if _blocking_cartesian_move.Metaclass_BlockingCartesianMove_Response._TYPE_SUPPORT is None:
                _blocking_cartesian_move.Metaclass_BlockingCartesianMove_Response.__import_type_support__()


class BlockingCartesianMove(metaclass=Metaclass_BlockingCartesianMove):
    from franky_msgs.srv._blocking_cartesian_move import BlockingCartesianMove_Request as Request
    from franky_msgs.srv._blocking_cartesian_move import BlockingCartesianMove_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
