//
//  MVMessageScaledImu3.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageScaledImu3.h"

@implementation MVMessageScaledImu3

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs xacc:(int16_t)xacc yacc:(int16_t)yacc zacc:(int16_t)zacc xgyro:(int16_t)xgyro ygyro:(int16_t)ygyro zgyro:(int16_t)zgyro xmag:(int16_t)xmag ymag:(int16_t)ymag zmag:(int16_t)zmag {
  if ((self = [super init])) {
    mavlink_msg_scaled_imu3_pack(systemId, componentId, &(self->_message), timeBootMs, xacc, yacc, zacc, xgyro, ygyro, zgyro, xmag, ymag, zmag);
  }
  return self;
}

- (uint32_t)timeBootMs {
  return mavlink_msg_scaled_imu3_get_time_boot_ms(&(self->_message));
}

- (int16_t)xacc {
  return mavlink_msg_scaled_imu3_get_xacc(&(self->_message));
}

- (int16_t)yacc {
  return mavlink_msg_scaled_imu3_get_yacc(&(self->_message));
}

- (int16_t)zacc {
  return mavlink_msg_scaled_imu3_get_zacc(&(self->_message));
}

- (int16_t)xgyro {
  return mavlink_msg_scaled_imu3_get_xgyro(&(self->_message));
}

- (int16_t)ygyro {
  return mavlink_msg_scaled_imu3_get_ygyro(&(self->_message));
}

- (int16_t)zgyro {
  return mavlink_msg_scaled_imu3_get_zgyro(&(self->_message));
}

- (int16_t)xmag {
  return mavlink_msg_scaled_imu3_get_xmag(&(self->_message));
}

- (int16_t)ymag {
  return mavlink_msg_scaled_imu3_get_ymag(&(self->_message));
}

- (int16_t)zmag {
  return mavlink_msg_scaled_imu3_get_zmag(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeBootMs=%d, xacc=%d, yacc=%d, zacc=%d, xgyro=%d, ygyro=%d, zgyro=%d, xmag=%d, ymag=%d, zmag=%d", [super description], [self timeBootMs], [self xacc], [self yacc], [self zacc], [self xgyro], [self ygyro], [self zgyro], [self xmag], [self ymag], [self zmag]];
}

@end
