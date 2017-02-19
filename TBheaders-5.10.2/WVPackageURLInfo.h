//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSString, WVURL;

@interface WVPackageURLInfo : NSObject
{
    WVURL *_url;	// 8 = 0x8
    long long _fromType;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    NSString *_appName;	// 32 = 0x20
    NSString *_version;	// 40 = 0x28
    unsigned long long _seq;	// 48 = 0x30
    NSString *_originPath;	// 56 = 0x38
    long long _appMonitor;	// 64 = 0x40
    NSString *_filePath;	// 72 = 0x48
}

@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, nonatomic) long long appMonitor; // @synthesize appMonitor=_appMonitor;
@property(readonly, nonatomic) NSString *originPath; // @synthesize originPath=_originPath;
@property(readonly, nonatomic) unsigned long long seq; // @synthesize seq=_seq;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(readonly, nonatomic) WVURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 withOriginPath:(id)arg2 withConfig:(id)arg3;
- (id)initWithURL:(id)arg1 withAppName:(id)arg2 withError:(id)arg3;

@end
