//
//  MVMessageDistanceSensor.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a DISTANCE_SENSOR Mavlink message.

 @discussion Distance sensor information for an onboard rangefinder.
 */
@interface MVMessageDistanceSensor : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs minDistance:(uint16_t)minDistance maxDistance:(uint16_t)maxDistance currentDistance:(uint16_t)currentDistance type:(MAV_DISTANCE_SENSOR)type id:(uint8_t)id orientation:(MAV_SENSOR_ORIENTATION)orientation covariance:(uint8_t)covariance;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! Minimum distance the sensor can measure
- (uint16_t)minDistance;

//! Maximum distance the sensor can measure
- (uint16_t)maxDistance;

//! Current distance reading
- (uint16_t)currentDistance;

//! Type of distance sensor.
- (MAV_DISTANCE_SENSOR)type;

//! Onboard ID of the sensor
- (uint8_t)id;

//! Direction the sensor faces. downward-facing: ROTATION_PITCH_270, upward-facing: ROTATION_PITCH_90, backward-facing: ROTATION_PITCH_180, forward-facing: ROTATION_NONE, left-facing: ROTATION_YAW_90, right-facing: ROTATION_YAW_270
- (MAV_SENSOR_ORIENTATION)orientation;

//! Measurement covariance, 0 for unknown / invalid readings
- (uint8_t)covariance;

@end
