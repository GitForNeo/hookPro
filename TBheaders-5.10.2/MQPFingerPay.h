//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MQPFingerPay : NSObject
{
}

+ (id)hardwarePayDeviceID;
+ (id)hardwarePayAuthInfo;
+ (id)regAuthDataWithUid:(id)arg1;
+ (id)payAuthDataWithUid:(id)arg1;
+ (_Bool)isSupportFingerprint;
+ (_Bool)isFPAvailable;
+ (_Bool)isCutieSugar;
+ (void)preprocess:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (_Bool)touchId:(long long)arg1 data:(id)arg2 ext:(id)arg3 callback:(CDUnknownBlockType)arg4;

@end

