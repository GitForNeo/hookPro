//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AppCenterJumpProtocolModel, NSString;

@interface SHAppCenterBannerModel : NSObject
{
    long long _ID;
    NSString *_img;
    NSString *_title;
    long long _activityId;
    NSString *_sourceValue;
    AppCenterJumpProtocolModel *_jump;
}

+ (id)replacedKeyFromPropertyName;
@property(retain, nonatomic) AppCenterJumpProtocolModel *jump; // @synthesize jump=_jump;
@property(retain, nonatomic) NSString *sourceValue; // @synthesize sourceValue=_sourceValue;
@property(nonatomic) long long activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
- (void).cxx_destruct;

@end
