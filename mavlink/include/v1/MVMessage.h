//
//  MVMessage.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import <Foundation/Foundation.h>
#import "mavlink.h"

@protocol MVMessage <NSObject>
- (id)initWithCMessage:(mavlink_message_t)message;
- (NSData *)data;
@property (readonly, nonatomic) mavlink_message_t message;
@end

@interface MVMessage : NSObject <MVMessage> {
  mavlink_message_t _message;
}

/**
 Create an MVMessage subclass from message id.
 User needs to set systemId and componentId.

 @param messageId messageId
 @param systemId systemId
 @param componentId componentId
 @return MVMessage or subclass representing the message.
 */
+ (id<MVMessage>)messageWithMessageId:(uint8_t)messageId
                             systemId:(uint8_t)systemId
                          componentId:(uint8_t)componentId;

/*!
 Create an MVMessage subclass from a mavlink_message_t.

 @param message Struct containing the details of the message
 @result MVMessage or subclass representing the message
 */
+ (id<MVMessage>)messageWithCMessage:(mavlink_message_t)message;

//! System ID of the sender of the message.
- (uint8_t)systemId;

//! Component ID of the sender of the message.
- (uint8_t)componentId;

//! Message ID of this message.
- (uint8_t)messageId;

@end
