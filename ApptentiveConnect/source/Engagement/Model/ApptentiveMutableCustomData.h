//
//  ApptentiveMutableCustomData.h
//  ApptentiveConnect
//
//  Created by Frank Schmitt on 12/21/16.
//  Copyright © 2016 Apptentive, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ApptentiveCustomData;

@interface ApptentiveMutableCustomData : NSObject

- (instancetype)initWithCustomData:(ApptentiveCustomData *)customData;

- (void)addCustomString:(NSString *)string withKey:(NSString *)key NS_SWIFT_NAME(add(_:withKey:));
- (void)addCustomNumber:(NSNumber *)number withKey:(NSString *)key NS_SWIFT_NAME(add(_:withKey:));
- (void)addCustomBool:(BOOL)boolValue withKey:(NSString *)key NS_SWIFT_NAME(add(_:withKey:));
- (void)removeCustomValueWithKey:(NSString *)key NS_SWIFT_NAME(remove(withKey:));

@property (readonly, copy, nonatomic) NSDictionary *customData;
@property (readonly, strong, nonatomic) NSString *identifier;

@end
