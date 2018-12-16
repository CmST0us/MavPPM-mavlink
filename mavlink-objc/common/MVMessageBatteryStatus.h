//
//  MVMessageBatteryStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a BATTERY_STATUS Mavlink message.

 @discussion Battery information
 */
@interface MVMessageBatteryStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId id:(uint8_t)id batteryFunction:(MAV_BATTERY_FUNCTION)batteryFunction type:(MAV_BATTERY_TYPE)type temperature:(int16_t)temperature voltages:(uint16_t *)voltages currentBattery:(int16_t)currentBattery currentConsumed:(int32_t)currentConsumed energyConsumed:(int32_t)energyConsumed batteryRemaining:(int8_t)batteryRemaining;

//! Battery ID
- (uint8_t)id;

//! Function of the battery
- (MAV_BATTERY_FUNCTION)batteryFunction;

//! Type (chemistry) of the battery
- (MAV_BATTERY_TYPE)type;

//! Temperature of the battery. INT16_MAX for unknown temperature.
- (int16_t)temperature;

//! Battery voltage of cells. Cells above the valid cell count for this battery should have the UINT16_MAX value.
- (uint16_t)voltages:(uint16_t *)voltages;

//! Battery current, -1: autopilot does not measure the current
- (int16_t)currentBattery;

//! Consumed charge, -1: autopilot does not provide consumption estimate
- (int32_t)currentConsumed;

//! Consumed energy, -1: autopilot does not provide energy consumption estimate
- (int32_t)energyConsumed;

//! Remaining battery energy. Values: [0-100], -1: autopilot does not estimate the remaining battery.
- (int8_t)batteryRemaining;

@end
