//
//  MVMessageWifiConfigAp.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a WIFI_CONFIG_AP Mavlink message.

 @discussion Configure AP SSID and Password.
 */
@interface MVMessageWifiConfigAp : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId ssid:(char *)ssid password:(char *)password;

//! Name of Wi-Fi network (SSID). Leave it blank to leave it unchanged.
- (NSString *)ssid;

//! Password. Leave it blank for an open AP.
- (NSString *)password;

@end
