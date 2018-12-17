//
//  MVMessageOdometry.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a ODOMETRY Mavlink message.

 @discussion Odometry message to communicate odometry information with an external interface. Fits ROS REP 147 standard for aerial vehicles (http://www.ros.org/reps/rep-0147.html).
 */
@interface MVMessageOdometry : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec frameId:(MAV_FRAME)frameId childFrameId:(MAV_FRAME)childFrameId x:(float)x y:(float)y z:(float)z q:(float *)q vx:(float)vx vy:(float)vy vz:(float)vz rollspeed:(float)rollspeed pitchspeed:(float)pitchspeed yawspeed:(float)yawspeed poseCovariance:(float *)poseCovariance twistCovariance:(float *)twistCovariance;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude the number.
- (uint64_t)timeUsec;

//! Coordinate frame of reference for the pose data.
- (MAV_FRAME)frameId;

//! Coordinate frame of reference for the velocity in free space (twist) data.
- (MAV_FRAME)childFrameId;

//! X Position
- (float)x;

//! Y Position
- (float)y;

//! Z Position
- (float)z;

//! Quaternion components, w, x, y, z (1 0 0 0 is the null-rotation)
- (uint16_t)q:(float *)q;

//! X linear speed
- (float)vx;

//! Y linear speed
- (float)vy;

//! Z linear speed
- (float)vz;

//! Roll angular speed
- (float)rollspeed;

//! Pitch angular speed
- (float)pitchspeed;

//! Yaw angular speed
- (float)yawspeed;

//! Pose (states: x, y, z, roll, pitch, yaw) covariance matrix upper right triangle (first six entries are the first ROW, next five entries are the second ROW, etc.)
- (uint16_t)poseCovariance:(float *)pose_covariance;

//! Twist (states: vx, vy, vz, rollspeed, pitchspeed, yawspeed) covariance matrix upper right triangle (first six entries are the first ROW, next five entries are the second ROW, etc.)
- (uint16_t)twistCovariance:(float *)twist_covariance;

@end
