//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MTAWX : NSObject
{
    NSString *_appkey;	// 8 = 0x8
}

+ (void)onBackground;
+ (void)startWithAppkey:(id)arg1;
+ (id)ConvertWXappkey:(id)arg1;
+ (id)getInstance;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
- (void)dealloc;
- (id)init;

@end

