//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSArray, UIColor, UIFont, UIView;

@interface ATCLanLanInterestSegmentControl : UIScrollView
{
    int _segmentWidthStyle;	// 8 = 0x8
    NSArray *_segmentItems;	// 16 = 0x10
    double _segmentWidth;	// 24 = 0x18
    UIColor *_selectionIndicatorColor;	// 32 = 0x20
    CDUnknownBlockType _indexDidSelectedBlock;	// 40 = 0x28
    double _segmentMargins;	// 48 = 0x30
    UIFont *_segmentTitleFont;	// 56 = 0x38
    long long _currentSelectedIndex;	// 64 = 0x40
    UIView *_selectionIndicatorView;	// 72 = 0x48
}

@property(retain, nonatomic) UIView *selectionIndicatorView; // @synthesize selectionIndicatorView=_selectionIndicatorView;
@property(nonatomic) long long currentSelectedIndex; // @synthesize currentSelectedIndex=_currentSelectedIndex;
@property(retain, nonatomic) UIFont *segmentTitleFont; // @synthesize segmentTitleFont=_segmentTitleFont;
@property(nonatomic) double segmentMargins; // @synthesize segmentMargins=_segmentMargins;
@property(copy, nonatomic) CDUnknownBlockType indexDidSelectedBlock; // @synthesize indexDidSelectedBlock=_indexDidSelectedBlock;
@property(retain, nonatomic) UIColor *selectionIndicatorColor; // @synthesize selectionIndicatorColor=_selectionIndicatorColor;
@property(nonatomic) double segmentWidth; // @synthesize segmentWidth=_segmentWidth;
@property(retain, nonatomic) NSArray *segmentItems; // @synthesize segmentItems=_segmentItems;
@property(nonatomic) int segmentWidthStyle; // @synthesize segmentWidthStyle=_segmentWidthStyle;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setSelectedSegmentIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)updateSelectionIndicatorByProgress:(float)arg1;
- (void)buildSubMenu;
- (id)initWithFrame:(struct CGRect)arg1;

@end
