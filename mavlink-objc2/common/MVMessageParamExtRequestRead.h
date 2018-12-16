//
//  MVMessageParamExtRequestRead.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a PARAM_EXT_REQUEST_READ Mavlink message.

 @discussion Request to read the value of a parameter with the either the param_id string id or param_index.
 */
@interface MVMessageParamExtRequestRead : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent paramId:(char *)paramId paramIndex:(int16_t)paramIndex;

//! System ID
- (uint8_t)targetSystem;

//! Component ID
- (uint8_t)targetComponent;

//! Parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
- (NSString *)paramId;

//! Parameter index. Set to -1 to use the Parameter ID field as identifier (else param_id will be ignored)
- (int16_t)paramIndex;

@end
