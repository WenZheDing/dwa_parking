# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from perception_msgs/ts_Object.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import perception_msgs.msg

class ts_Object(genpy.Message):
  _md5sum = "2fab78d59d066c44e1549d3ee0b45ece"
  _type = "perception_msgs/ts_Object"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """
int32 object_id

ts_3DPose rel_pose

bool geometry_state
ts_Geometry geometry

================================================================================
MSG: perception_msgs/ts_3DPose
float64 x
float64 y
float64 z
float64 phi
float64 theta
float64 psi

================================================================================
MSG: perception_msgs/ts_Geometry
float64 length
float64 width
float64 height"""
  __slots__ = ['object_id','rel_pose','geometry_state','geometry']
  _slot_types = ['int32','perception_msgs/ts_3DPose','bool','perception_msgs/ts_Geometry']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       object_id,rel_pose,geometry_state,geometry

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ts_Object, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.object_id is None:
        self.object_id = 0
      if self.rel_pose is None:
        self.rel_pose = perception_msgs.msg.ts_3DPose()
      if self.geometry_state is None:
        self.geometry_state = False
      if self.geometry is None:
        self.geometry = perception_msgs.msg.ts_Geometry()
    else:
      self.object_id = 0
      self.rel_pose = perception_msgs.msg.ts_3DPose()
      self.geometry_state = False
      self.geometry = perception_msgs.msg.ts_Geometry()

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
      buff.write(_get_struct_i6dB3d().pack(_x.object_id, _x.rel_pose.x, _x.rel_pose.y, _x.rel_pose.z, _x.rel_pose.phi, _x.rel_pose.theta, _x.rel_pose.psi, _x.geometry_state, _x.geometry.length, _x.geometry.width, _x.geometry.height))
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
      if self.rel_pose is None:
        self.rel_pose = perception_msgs.msg.ts_3DPose()
      if self.geometry is None:
        self.geometry = perception_msgs.msg.ts_Geometry()
      end = 0
      _x = self
      start = end
      end += 77
      (_x.object_id, _x.rel_pose.x, _x.rel_pose.y, _x.rel_pose.z, _x.rel_pose.phi, _x.rel_pose.theta, _x.rel_pose.psi, _x.geometry_state, _x.geometry.length, _x.geometry.width, _x.geometry.height,) = _get_struct_i6dB3d().unpack(str[start:end])
      self.geometry_state = bool(self.geometry_state)
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
      buff.write(_get_struct_i6dB3d().pack(_x.object_id, _x.rel_pose.x, _x.rel_pose.y, _x.rel_pose.z, _x.rel_pose.phi, _x.rel_pose.theta, _x.rel_pose.psi, _x.geometry_state, _x.geometry.length, _x.geometry.width, _x.geometry.height))
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
      if self.rel_pose is None:
        self.rel_pose = perception_msgs.msg.ts_3DPose()
      if self.geometry is None:
        self.geometry = perception_msgs.msg.ts_Geometry()
      end = 0
      _x = self
      start = end
      end += 77
      (_x.object_id, _x.rel_pose.x, _x.rel_pose.y, _x.rel_pose.z, _x.rel_pose.phi, _x.rel_pose.theta, _x.rel_pose.psi, _x.geometry_state, _x.geometry.length, _x.geometry.width, _x.geometry.height,) = _get_struct_i6dB3d().unpack(str[start:end])
      self.geometry_state = bool(self.geometry_state)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_i6dB3d = None
def _get_struct_i6dB3d():
    global _struct_i6dB3d
    if _struct_i6dB3d is None:
        _struct_i6dB3d = struct.Struct("<i6dB3d")
    return _struct_i6dB3d
