//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableOrderedSet;

@interface AppMonitorMeasureSet : NSObject <NSCoding>
{
    int _oslock;	// 8 = 0x8
    NSMutableOrderedSet *_measures;	// 16 = 0x10
}

+ (id)setWithArray:(id)arg1;
@property(retain, nonatomic) NSMutableOrderedSet *measures; // @synthesize measures=_measures;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setConstantValue:(id)arg1;
- (id)measureForName:(id)arg1;
- (void)addMeasureWithName:(id)arg1;
- (void)addMeasure:(id)arg1;
- (_Bool)valid:(id)arg1 MonitorPoint:(id)arg2 measureValues:(id)arg3;
- (id)init;

@end
