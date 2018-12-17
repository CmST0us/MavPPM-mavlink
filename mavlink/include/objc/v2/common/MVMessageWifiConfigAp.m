//
//  MVMessageWifiConfigAp.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageWifiConfigAp.h"

@implementation MVMessageWifiConfigAp

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId ssid:(char *)ssid password:(char *)password {
  if ((self = [super init])) {
    mavlink_msg_wifi_config_ap_pack(systemId, componentId, &(self->_message), ssid, password);
  }
  return self;
}

- (NSString *)ssid {
  char string[32];
  mavlink_msg_wifi_config_ap_get_ssid(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:32 encoding:NSASCIIStringEncoding];
}

- (NSString *)password {
  char string[64];
  mavlink_msg_wifi_config_ap_get_password(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:64 encoding:NSASCIIStringEncoding];
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, ssid=%@, password=%@", [super description], [self ssid], [self password]];
}

@end
