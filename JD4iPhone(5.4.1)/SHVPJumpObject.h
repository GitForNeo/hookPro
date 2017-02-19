//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SHVPBuryDataModel, SHVPJumpModel;

@interface SHVPJumpObject : NSObject
{
    unsigned long long _jumpType;
    SHVPJumpModel *_jumpModel;
    NSObject *_para;
    SHVPBuryDataModel *_buryDataModel;
}

@property(retain, nonatomic) SHVPBuryDataModel *buryDataModel; // @synthesize buryDataModel=_buryDataModel;
@property(retain, nonatomic) NSObject *para; // @synthesize para=_para;
@property(retain, nonatomic) SHVPJumpModel *jumpModel; // @synthesize jumpModel=_jumpModel;
@property(nonatomic) unsigned long long jumpType; // @synthesize jumpType=_jumpType;
- (void).cxx_destruct;

@end
