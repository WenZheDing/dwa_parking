# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from parking_lot_msgs/parking_lot.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg

class parking_lot(genpy.Message):
  _md5sum = "577a610f517c24e44cbfed4f97891954"
  _type = "parking_lot_msgs/parking_lot"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """# 全局
Header header

# 车辆最终泊进车位时 从上往下看
geometry_msgs/Point corner_left_upper
geometry_msgs/Point corner_left_low
geometry_msgs/Point corner_right_upper
geometry_msgs/Point corner_right_low

geometry_msgs/Point center           # 方块的中心
geometry_msgs/Point entrance_center  # 入口边的中心

int8 type  # 0- 垂直  1 - 侧方位 
int8 is_occupied # 0- 无占据 1- 占据
================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z
"""
  __slots__ = ['header','corner_left_upper','corner_left_low','corner_right_upper','corner_right_low','center','entrance_center','type','is_occupied']
  _slot_types = ['std_msgs/Header','geometry_msgs/Point','geometry_msgs/Point','geometry_msgs/Point','geometry_msgs/Point','geometry_msgs/Point','geometry_msgs/Point','int8','int8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,corner_left_upper,corner_left_low,corner_right_upper,corner_right_low,center,entrance_center,type,is_occupied

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(parking_lot, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.corner_left_upper is None:
        self.corner_left_upper = geometry_msgs.msg.Point()
      if self.corner_left_low is None:
        self.corner_left_low = geometry_msgs.msg.Point()
      if self.corner_right_upper is None:
        self.corner_right_upper = geometry_msgs.msg.Point()
      if self.corner_right_low is None:
        self.corner_right_low = geometry_msgs.msg.Point()
      if self.center is None:
        self.center = geometry_msgs.msg.Point()
      if self.entrance_center is None:
        self.entrance_center = geometry_msgs.msg.Point()
      if self.type is None:
        self.type = 0
      if self.is_occupied is None:
        self.is_occupied = 0
    else:
      self.header = std_msgs.msg.Header()
      self.corner_left_upper = geometry_msgs.msg.Point()
      self.corner_left_low = geometry_msgs.msg.Point()
      self.corner_right_upper = geometry_msgs.msg.Point()
      self.corner_right_low = geometry_msgs.msg.Point()
      self.center = geometry_msgs.msg.Point()
      self.entrance_center = geometry_msgs.msg.Point()
      self.type = 0
      self.is_occupied = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_18d2b().pack(_x.corner_left_upper.x, _x.corner_left_upper.y, _x.corner_left_upper.z, _x.corner_left_low.x, _x.corner_left_low.y, _x.corner_left_low.z, _x.corner_right_upper.x, _x.corner_right_upper.y, _x.corner_right_upper.z, _x.corner_right_low.x, _x.corner_right_low.y, _x.corner_right_low.z, _x.center.x, _x.center.y, _x.center.z, _x.entrance_center.x, _x.entrance_center.y, _x.entrance_center.z, _x.type, _x.is_occupied))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.corner_left_upper is None:
        self.corner_left_upper = geometry_msgs.msg.Point()
      if self.corner_left_low is None:
        self.corner_left_low = geometry_msgs.msg.Point()
      if self.corner_right_upper is None:
        self.corner_right_upper = geometry_msgs.msg.Point()
      if self.corner_right_low is None:
        self.corner_right_low = geometry_msgs.msg.Point()
      if self.center is None:
        self.center = geometry_msgs.msg.Point()
      if self.entrance_center is None:
        self.entrance_center = geometry_msgs.msg.Point()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 146
      (_x.corner_left_upper.x, _x.corner_left_upper.y, _x.corner_left_upper.z, _x.corner_left_low.x, _x.corner_left_low.y, _x.corner_left_low.z, _x.corner_right_upper.x, _x.corner_right_upper.y, _x.corner_right_upper.z, _x.corner_right_low.x, _x.corner_right_low.y, _x.corner_right_low.z, _x.center.x, _x.center.y, _x.center.z, _x.entrance_center.x, _x.entrance_center.y, _x.entrance_center.z, _x.type, _x.is_occupied,) = _get_struct_18d2b().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_18d2b().pack(_x.corner_left_upper.x, _x.corner_left_upper.y, _x.corner_left_upper.z, _x.corner_left_low.x, _x.corner_left_low.y, _x.corner_left_low.z, _x.corner_right_upper.x, _x.corner_right_upper.y, _x.corner_right_upper.z, _x.corner_right_low.x, _x.corner_right_low.y, _x.corner_right_low.z, _x.center.x, _x.center.y, _x.center.z, _x.entrance_center.x, _x.entrance_center.y, _x.entrance_center.z, _x.type, _x.is_occupied))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.corner_left_upper is None:
        self.corner_left_upper = geometry_msgs.msg.Point()
      if self.corner_left_low is None:
        self.corner_left_low = geometry_msgs.msg.Point()
      if self.corner_right_upper is None:
        self.corner_right_upper = geometry_msgs.msg.Point()
      if self.corner_right_low is None:
        self.corner_right_low = geometry_msgs.msg.Point()
      if self.center is None:
        self.center = geometry_msgs.msg.Point()
      if self.entrance_center is None:
        self.entrance_center = geometry_msgs.msg.Point()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 146
      (_x.corner_left_upper.x, _x.corner_left_upper.y, _x.corner_left_upper.z, _x.corner_left_low.x, _x.corner_left_low.y, _x.corner_left_low.z, _x.corner_right_upper.x, _x.corner_right_upper.y, _x.corner_right_upper.z, _x.corner_right_low.x, _x.corner_right_low.y, _x.corner_right_low.z, _x.center.x, _x.center.y, _x.center.z, _x.entrance_center.x, _x.entrance_center.y, _x.entrance_center.z, _x.type, _x.is_occupied,) = _get_struct_18d2b().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_18d2b = None
def _get_struct_18d2b():
    global _struct_18d2b
    if _struct_18d2b is None:
        _struct_18d2b = struct.Struct("<18d2b")
    return _struct_18d2b
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
