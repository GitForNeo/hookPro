//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSArray, NSMutableArray, NSString;

@interface JDShopDynamicTabListsResultModel : JDModel
{
    NSString *_channelImg;
    NSString *_channelImg2x;
    NSArray *_tabs;
    NSMutableArray *_modelTabs;
}

@property(retain, nonatomic) NSMutableArray *modelTabs; // @synthesize modelTabs=_modelTabs;
@property(retain, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
@property(retain, nonatomic) NSString *channelImg2x; // @synthesize channelImg2x=_channelImg2x;
@property(retain, nonatomic) NSString *channelImg; // @synthesize channelImg=_channelImg;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
