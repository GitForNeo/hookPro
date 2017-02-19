//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMutableSet;

@interface UTMCCache : NSObject
{
    NSMutableSet *logCache;	// 8 = 0x8
    NSLock *lock;	// 16 = 0x10
    long long _maxCacheSize;	// 24 = 0x18
}

@property(nonatomic) long long maxCacheSize; // @synthesize maxCacheSize=_maxCacheSize;
- (void).cxx_destruct;
- (void)flush;
- (long long)count;
- (void)addLog:(id)arg1;
- (id)init;

@end
