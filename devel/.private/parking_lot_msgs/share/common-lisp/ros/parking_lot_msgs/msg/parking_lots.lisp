; Auto-generated. Do not edit!


(cl:in-package parking_lot_msgs-msg)


;//! \htmlinclude parking_lots.msg.html

(cl:defclass <parking_lots> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (parking_lots
    :reader parking_lots
    :initarg :parking_lots
    :type (cl:vector parking_lot_msgs-msg:parking_lot)
   :initform (cl:make-array 0 :element-type 'parking_lot_msgs-msg:parking_lot :initial-element (cl:make-instance 'parking_lot_msgs-msg:parking_lot))))
)

(cl:defclass parking_lots (<parking_lots>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <parking_lots>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'parking_lots)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name parking_lot_msgs-msg:<parking_lots> is deprecated: use parking_lot_msgs-msg:parking_lots instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <parking_lots>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader parking_lot_msgs-msg:header-val is deprecated.  Use parking_lot_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'parking_lots-val :lambda-list '(m))
(cl:defmethod parking_lots-val ((m <parking_lots>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader parking_lot_msgs-msg:parking_lots-val is deprecated.  Use parking_lot_msgs-msg:parking_lots instead.")
  (parking_lots m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <parking_lots>) ostream)
  "Serializes a message object of type '<parking_lots>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'parking_lots))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'parking_lots))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <parking_lots>) istream)
  "Deserializes a message object of type '<parking_lots>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'parking_lots) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'parking_lots)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'parking_lot_msgs-msg:parking_lot))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<parking_lots>)))
  "Returns string type for a message object of type '<parking_lots>"
  "parking_lot_msgs/parking_lots")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'parking_lots)))
  "Returns string type for a message object of type 'parking_lots"
  "parking_lot_msgs/parking_lots")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<parking_lots>)))
  "Returns md5sum for a message object of type '<parking_lots>"
  "192e520702045372955648661836b8ae")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'parking_lots)))
  "Returns md5sum for a message object of type 'parking_lots"
  "192e520702045372955648661836b8ae")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<parking_lots>)))
  "Returns full string definition for message of type '<parking_lots>"
  (cl:format cl:nil "# 全局
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'parking_lots)))
  "Returns full string definition for message of type 'parking_lots"
  (cl:format cl:nil "# 全局
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <parking_lots>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'parking_lots) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <parking_lots>))
  "Converts a ROS message object to a list"
  (cl:list 'parking_lots
    (cl:cons ':header (header msg))
    (cl:cons ':parking_lots (parking_lots msg))
))