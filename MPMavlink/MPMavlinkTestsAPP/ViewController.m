//
//  ViewController.m
//  MPMavlinkTestsAPP
//
//  Created by CmST0us on 2018/12/18.
//  Copyright © 2018 eric3u. All rights reserved.
//

#import "ViewController.h"
#import <MPMavlink/MPMavlink.h>

@interface ViewController () <MVMavlinkDelegate>
@property (nonatomic, strong) MVMavlink *mavlink;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.mavlink = [[MVMavlink alloc] init];
    self.mavlink.delegate = self;
    [self testManualControl];
}


- (void)testManualControl {
    MVMessageManualControl *message = [[MVMessageManualControl alloc] initWithSystemId:MAVPPM_SYSTEM_ID_IOS componentId:MAVPPM_COMPONENT_ID_IOS_APP target:0 x:0 y:0 z:0 r:0 buttons:0];
    NSLog(@"%@", message);
    [self.mavlink sendMessage:message];
}

- (void)mavlink:(MVMavlink *)mavlink didGetMessage:(id<MVMessage>)message {
    NSLog(@"did get message: %@",message);
}

- (BOOL)mavlink:(MVMavlink *)mavlink shouldWriteData:(NSData *)data { 
    NSLog(@"%@", data);
    return YES;
}


@end

