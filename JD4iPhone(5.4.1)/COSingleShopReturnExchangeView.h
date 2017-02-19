//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "COReturnAndExchangeBaseView.h"

#import "JDBaseToastTextListViewDataSource.h"
#import "JDBaseToastViewDelegate.h"

@class JDSwitch, NSArray, NSString, UIButton, UILabel, UIView;

@interface COSingleShopReturnExchangeView : COReturnAndExchangeBaseView <JDBaseToastTextListViewDataSource, JDBaseToastViewDelegate>
{
    id <COSingleReturnExchangeDelegate> _singleReturnExchangeDelegate;
    UIView *_bottomLineView;
    JDSwitch *_jdSwitch;
    UILabel *_titleLb;
    UILabel *_priceLb;
    UIView *_explainBackView;
    UILabel *_explainLb;
    UIButton *_explainBtn;
    long long _type;
    NSArray *_notices;
}

@property(retain, nonatomic) NSArray *notices; // @synthesize notices=_notices;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIButton *explainBtn; // @synthesize explainBtn=_explainBtn;
@property(retain, nonatomic) UILabel *explainLb; // @synthesize explainLb=_explainLb;
@property(retain, nonatomic) UIView *explainBackView; // @synthesize explainBackView=_explainBackView;
@property(retain, nonatomic) UILabel *priceLb; // @synthesize priceLb=_priceLb;
@property(retain, nonatomic) UILabel *titleLb; // @synthesize titleLb=_titleLb;
@property(retain, nonatomic) JDSwitch *jdSwitch; // @synthesize jdSwitch=_jdSwitch;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(nonatomic) id <COSingleReturnExchangeDelegate> singleReturnExchangeDelegate; // @synthesize singleReturnExchangeDelegate=_singleReturnExchangeDelegate;
- (void).cxx_destruct;
- (void)didClickBackgroundInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (id)toastView:(id)arg1 DetailForSection:(long long)arg2;
- (id)toastView:(id)arg1 titleForSection:(long long)arg2;
- (long long)numberOfSectionsInToastView:(id)arg1;
- (void)explainBtnTaped;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)showWithModel:(id)arg1;
- (void)setupUI;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
