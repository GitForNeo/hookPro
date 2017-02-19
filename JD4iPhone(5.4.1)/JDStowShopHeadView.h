//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDView.h"

@class NSArray, NSMutableArray, UIButton, UIImageView, UIView;

@interface JDStowShopHeadView : JDView
{
    JDView *_sortUnderBar;
    JDView *_sortBg;
    UIImageView *_hookImgeView;
    int selectIndex;
    int fromTag;
    int allSelectIndex;
    _Bool allPriceSort;
    _Bool _isLoading;
    _Bool _isComeFromHandleSingle;
    NSMutableArray *headButtonArray;
    NSMutableArray *defaultButtonArray;
    UIView *whiteBgView;
    id <JDStowShopHeadViewDelegate> sortAllViewDelegate_;
    NSArray *_defaultButtonsInfo;
    UIButton *_filterBtn;
}

@property(retain, nonatomic) UIButton *filterBtn; // @synthesize filterBtn=_filterBtn;
@property(retain, nonatomic) NSArray *defaultButtonsInfo; // @synthesize defaultButtonsInfo=_defaultButtonsInfo;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) id <JDStowShopHeadViewDelegate> sortAllViewDelegate; // @synthesize sortAllViewDelegate=sortAllViewDelegate_;
@property(retain, nonatomic) JDView *sortBg; // @synthesize sortBg=_sortBg;
- (void)isHiddenView:(_Bool)arg1;
- (void)sortDidSelectIndex:(int)arg1;
- (void)selectTabButton:(id)arg1;
- (void)tabButtonPressed:(id)arg1;
- (void)setTitleInsets:(struct UIEdgeInsets)arg1 ImageInsets:(struct UIEdgeInsets)arg2 button:(id)arg3;
- (void)firstButtonOrientation:(long long)arg1;
- (void)selectHeadButton:(id)arg1;
- (void)headButtonPressed:(id)arg1;
- (void)addTabButtons;
- (void)addHeadButtons;
- (void)filterProductList;
- (void)handleSingleTapFrom;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
