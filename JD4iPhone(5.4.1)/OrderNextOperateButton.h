//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDView.h"

@class JDButton, NSString;

@interface OrderNextOperateButton : JDView
{
    _Bool _buttonEnabled;
    _Bool _isShowing;
    JDButton *_myButton;
    NSString *_showLableId;
    id <OrderNextOperateButtonDelegate> _btnDelegate;
}

@property(nonatomic) __weak id <OrderNextOperateButtonDelegate> btnDelegate; // @synthesize btnDelegate=_btnDelegate;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool buttonEnabled; // @synthesize buttonEnabled=_buttonEnabled;
@property(retain, nonatomic) NSString *showLableId; // @synthesize showLableId=_showLableId;
@property(retain, nonatomic) JDButton *myButton; // @synthesize myButton=_myButton;
- (void).cxx_destruct;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)clickedButton;
- (void)setShowLableId:(id)arg1 islastBtn:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

