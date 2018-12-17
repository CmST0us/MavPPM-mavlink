//
//  MVMessageObstacleDistance.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a OBSTACLE_DISTANCE Mavlink message.

 @discussion Obstacle distances in front of the sensor, starting from the left in increment degrees to the right
 */
@interface MVMessageObstacleDistance : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec sensorType:(MAV_DISTANCE_SENSOR)sensorType distances:(uint16_t *)distances increment:(uint8_t)increment minDistance:(uint16_t)minDistance maxDistance:(uint16_t)maxDistance;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude the number.
- (uint64_t)timeUsec;

//! Class id of the distance sensor type.
- (MAV_DISTANCE_SENSOR)sensorType;

//! Distance of obstacles around the UAV with index 0 corresponding to local North. A value of 0 means that the obstacle is right in front of the sensor. A value of max_distance +1 means no obstacle is present. A value of UINT16_MAX for unknown/not used. In a array element, one unit corresponds to 1cm.
- (uint16_t)distances:(uint16_t *)distances;

//! Angular width in degrees of each array element.
- (uint8_t)increment;

//! Minimum distance the sensor can measure.
- (uint16_t)minDistance;

//! Maximum distance the sensor can measure.
- (uint16_t)maxDistance;

@end
