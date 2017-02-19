//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AMPBodyObject-Protocol.h"

@class NSString;

@interface AMPNotifyGroupCheck : NSObject <AMPBodyObject>
{
    long long _packTargetId;	// 8 = 0x8
    long long _bizId;	// 16 = 0x10
    NSString *_ccode;	// 24 = 0x18
    unsigned long long _messageType;	// 32 = 0x20
    long long _time;	// 40 = 0x28
}

@property(nonatomic) long long time; // @synthesize time=_time;
@property(nonatomic) unsigned long long messageType; // @synthesize messageType=_messageType;
@property(copy, nonatomic) NSString *ccode; // @synthesize ccode=_ccode;
@property(nonatomic) long long bizId; // @synthesize bizId=_bizId;
@property(nonatomic) long long packTargetId; // @synthesize packTargetId=_packTargetId;
- (void).cxx_destruct;
- (void)parseFromDict:(id)arg1;
- (void)parseFromData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
