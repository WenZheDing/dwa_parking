;; Auto-generated. Do not edit!


(when (boundp 'location_msgs::RTK)
  (if (not (find-package "LOCATION_MSGS"))
    (make-package "LOCATION_MSGS"))
  (shadow 'RTK (find-package "LOCATION_MSGS")))
(unless (find-package "LOCATION_MSGS::RTK")
  (make-package "LOCATION_MSGS::RTK"))

(in-package "ROS")
;;//! \htmlinclude RTK.msg.html


(defclass location_msgs::RTK
  :super ros::object
  :slots (_status _stamp _gpstime _longitude _latitude _height _heading _pitch _roll _velocity _AccelRawX _AccelRawY _AccelRawZ _AngRateRawX _AngRateRawY _AngRateRawZ ))

(defmethod location_msgs::RTK
  (:init
   (&key
    ((:status __status) 0)
    ((:stamp __stamp) (instance ros::time :init))
    ((:gpstime __gpstime) 0.0)
    ((:longitude __longitude) 0.0)
    ((:latitude __latitude) 0.0)
    ((:height __height) 0.0)
    ((:heading __heading) 0.0)
    ((:pitch __pitch) 0.0)
    ((:roll __roll) 0.0)
    ((:velocity __velocity) 0.0)
    ((:AccelRawX __AccelRawX) 0.0)
    ((:AccelRawY __AccelRawY) 0.0)
    ((:AccelRawZ __AccelRawZ) 0.0)
    ((:AngRateRawX __AngRateRawX) 0.0)
    ((:AngRateRawY __AngRateRawY) 0.0)
    ((:AngRateRawZ __AngRateRawZ) 0.0)
    )
   (send-super :init)
   (setq _status (round __status))
   (setq _stamp __stamp)
   (setq _gpstime (float __gpstime))
   (setq _longitude (float __longitude))
   (setq _latitude (float __latitude))
   (setq _height (float __height))
   (setq _heading (float __heading))
   (setq _pitch (float __pitch))
   (setq _roll (float __roll))
   (setq _velocity (float __velocity))
   (setq _AccelRawX (float __AccelRawX))
   (setq _AccelRawY (float __AccelRawY))
   (setq _AccelRawZ (float __AccelRawZ))
   (setq _AngRateRawX (float __AngRateRawX))
   (setq _AngRateRawY (float __AngRateRawY))
   (setq _AngRateRawZ (float __AngRateRawZ))
   self)
  (:status
   (&optional __status)
   (if __status (setq _status __status)) _status)
  (:stamp
   (&optional __stamp)
   (if __stamp (setq _stamp __stamp)) _stamp)
  (:gpstime
   (&optional __gpstime)
   (if __gpstime (setq _gpstime __gpstime)) _gpstime)
  (:longitude
   (&optional __longitude)
   (if __longitude (setq _longitude __longitude)) _longitude)
  (:latitude
   (&optional __latitude)
   (if __latitude (setq _latitude __latitude)) _latitude)
  (:height
   (&optional __height)
   (if __height (setq _height __height)) _height)
  (:heading
   (&optional __heading)
   (if __heading (setq _heading __heading)) _heading)
  (:pitch
   (&optional __pitch)
   (if __pitch (setq _pitch __pitch)) _pitch)
  (:roll
   (&optional __roll)
   (if __roll (setq _roll __roll)) _roll)
  (:velocity
   (&optional __velocity)
   (if __velocity (setq _velocity __velocity)) _velocity)
  (:AccelRawX
   (&optional __AccelRawX)
   (if __AccelRawX (setq _AccelRawX __AccelRawX)) _AccelRawX)
  (:AccelRawY
   (&optional __AccelRawY)
   (if __AccelRawY (setq _AccelRawY __AccelRawY)) _AccelRawY)
  (:AccelRawZ
   (&optional __AccelRawZ)
   (if __AccelRawZ (setq _AccelRawZ __AccelRawZ)) _AccelRawZ)
  (:AngRateRawX
   (&optional __AngRateRawX)
   (if __AngRateRawX (setq _AngRateRawX __AngRateRawX)) _AngRateRawX)
  (:AngRateRawY
   (&optional __AngRateRawY)
   (if __AngRateRawY (setq _AngRateRawY __AngRateRawY)) _AngRateRawY)
  (:AngRateRawZ
   (&optional __AngRateRawZ)
   (if __AngRateRawZ (setq _AngRateRawZ __AngRateRawZ)) _AngRateRawZ)
  (:serialization-length
   ()
   (+
    ;; int32 _status
    4
    ;; time _stamp
    8
    ;; float64 _gpstime
    8
    ;; float64 _longitude
    8
    ;; float64 _latitude
    8
    ;; float64 _height
    8
    ;; float64 _heading
    8
    ;; float64 _pitch
    8
    ;; float64 _roll
    8
    ;; float64 _velocity
    8
    ;; float64 _AccelRawX
    8
    ;; float64 _AccelRawY
    8
    ;; float64 _AccelRawZ
    8
    ;; float64 _AngRateRawX
    8
    ;; float64 _AngRateRawY
    8
    ;; float64 _AngRateRawZ
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _status
       (write-long _status s)
     ;; time _stamp
       (write-long (send _stamp :sec) s) (write-long (send _stamp :nsec) s)
     ;; float64 _gpstime
       (sys::poke _gpstime (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _longitude
       (sys::poke _longitude (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _latitude
       (sys::poke _latitude (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _height
       (sys::poke _height (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _heading
       (sys::poke _heading (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _pitch
       (sys::poke _pitch (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _roll
       (sys::poke _roll (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _velocity
       (sys::poke _velocity (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AccelRawX
       (sys::poke _AccelRawX (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AccelRawY
       (sys::poke _AccelRawY (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AccelRawZ
       (sys::poke _AccelRawZ (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AngRateRawX
       (sys::poke _AngRateRawX (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AngRateRawY
       (sys::poke _AngRateRawY (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AngRateRawZ
       (sys::poke _AngRateRawZ (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _status
     (setq _status (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; time _stamp
     (send _stamp :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _stamp :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float64 _gpstime
     (setq _gpstime (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _longitude
     (setq _longitude (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _latitude
     (setq _latitude (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _height
     (setq _height (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _heading
     (setq _heading (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _pitch
     (setq _pitch (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _roll
     (setq _roll (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _velocity
     (setq _velocity (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AccelRawX
     (setq _AccelRawX (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AccelRawY
     (setq _AccelRawY (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AccelRawZ
     (setq _AccelRawZ (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AngRateRawX
     (setq _AngRateRawX (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AngRateRawY
     (setq _AngRateRawY (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AngRateRawZ
     (setq _AngRateRawZ (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get location_msgs::RTK :md5sum-) "14854cd4132bb36ed5bbe6de9299da19")
(setf (get location_msgs::RTK :datatype-) "location_msgs/RTK")
(setf (get location_msgs::RTK :definition-)
      "int32 status
time stamp
float64 gpstime

float64 longitude
float64 latitude
float64 height

float64 heading
float64 pitch
float64 roll

float64 velocity

float64 AccelRawX
float64 AccelRawY
float64 AccelRawZ

float64 AngRateRawX
float64 AngRateRawY
float64 AngRateRawZ
")



(provide :location_msgs/RTK "14854cd4132bb36ed5bbe6de9299da19")

