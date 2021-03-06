//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSearchBaseCell.h"

@class TBSearchTopicTipListTitleView, TBSearchTopicTipModel, TBSearchTopicTipWaterFLongImageTitleView, TBSearchTopicTipWaterFSquareImageTitleView, UIImageView;

@interface TBSearchTopicTipView : TBSearchBaseCell
{
    TBSearchTopicTipModel *_model;	// 8 = 0x8
    UIImageView *_topicImg;	// 16 = 0x10
    TBSearchTopicTipListTitleView *_listTitleView;	// 24 = 0x18
    TBSearchTopicTipWaterFLongImageTitleView *_waterFLongImageTitleView;	// 32 = 0x20
    TBSearchTopicTipWaterFSquareImageTitleView *_waterFSquareImageTitleView;	// 40 = 0x28
}

+ (double)heightOfWaterF:(id)arg1:(float)arg2;
+ (double)heightOfList;
+ (struct CGSize)cellSizeWithModel:(id)arg1 searchService:(id)arg2 layoutStyle:(int)arg3;
@property(retain, nonatomic) TBSearchTopicTipWaterFSquareImageTitleView *waterFSquareImageTitleView; // @synthesize waterFSquareImageTitleView=_waterFSquareImageTitleView;
@property(retain, nonatomic) TBSearchTopicTipWaterFLongImageTitleView *waterFLongImageTitleView; // @synthesize waterFLongImageTitleView=_waterFLongImageTitleView;
@property(retain, nonatomic) TBSearchTopicTipListTitleView *listTitleView; // @synthesize listTitleView=_listTitleView;
@property(retain, nonatomic) UIImageView *topicImg; // @synthesize topicImg=_topicImg;
- (void)setModel:(id)arg1;
- (id)model;
- (void).cxx_destruct;
- (void)didSelect;
- (void)adjustViews;
- (void)render;
- (id)initWithFrame:(struct CGRect)arg1;

@end

