//
//  MVMessageGlobalVisionPositionEstimate.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a GLOBAL_VISION_POSITION_ESTIMATE Mavlink message.

 @discussion Global position/attitude estimate from a vision source.
 */
@interface MVMessageGlobalVisionPositionEstimate : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId usec:(uint64_t)usec x:(float)x y:(float)y z:(float)z roll:(float)roll pitch:(float)pitch yaw:(float)yaw covariance:(float *)covariance;

//! Timestamp (UNIX time or since system boot)
- (uint64_t)usec;

//! Global X position
- (float)x;

//! Global Y position
- (float)y;

//! Global Z position
- (float)z;

//! Roll angle
- (float)roll;

//! Pitch angle
- (float)pitch;

//! Yaw angle
- (float)yaw;

//! Pose covariance matrix upper right triangular (first six entries are the first ROW, next five entries are the second ROW, etc.)
- (uint16_t)covariance:(float *)covariance;

@end
