//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSMutableArray, NSNumber, NSString, TBOHand;
@protocol TBOHand;

@interface TBOSignFeed : TBJSONModel
{
    long long _signNum;	// 8 = 0x8
    long long _dayNum;	// 16 = 0x10
    NSString *_tips;	// 24 = 0x18
    NSString *_gifUrl;	// 32 = 0x20
    NSNumber *_gifSize;	// 40 = 0x28
    NSMutableArray<TBOHand> *_hands;	// 48 = 0x30
    TBOHand *_currentHand;	// 56 = 0x38
}

@property(retain, nonatomic) TBOHand *currentHand; // @synthesize currentHand=_currentHand;
@property(retain, nonatomic) NSMutableArray<TBOHand> *hands; // @synthesize hands=_hands;
@property(nonatomic) NSNumber *gifSize; // @synthesize gifSize=_gifSize;
@property(retain, nonatomic) NSString *gifUrl; // @synthesize gifUrl=_gifUrl;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) long long dayNum; // @synthesize dayNum=_dayNum;
@property(nonatomic) long long signNum; // @synthesize signNum=_signNum;
- (void).cxx_destruct;
- (id)makeHandDicFrom:(id)arg1;
- (id)makeHandFrom:(id)arg1;
- (id)convertObjToDic;
- (id)initWithDict:(id)arg1;

@end
