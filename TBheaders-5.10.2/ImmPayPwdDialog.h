//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ImmPayPwdDelegate-Protocol.h"

@class ImmPayPwd, NSString, UIButton, UIView;
@protocol ImmPayPwdDialogDelegate;

@interface ImmPayPwdDialog : NSObject <ImmPayPwdDelegate>
{
    id <ImmPayPwdDialogDelegate> _delegate;	// 8 = 0x8
    unsigned long long _pwdType;	// 16 = 0x10
    UIView *_dialog;	// 24 = 0x18
    UIView *_maskView;	// 32 = 0x20
    ImmPayPwd *_pwdField;	// 40 = 0x28
    UIButton *_submitBtn;	// 48 = 0x30
}

@property(retain, nonatomic) UIButton *submitBtn; // @synthesize submitBtn=_submitBtn;
@property(retain, nonatomic) ImmPayPwd *pwdField; // @synthesize pwdField=_pwdField;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *dialog; // @synthesize dialog=_dialog;
@property(nonatomic) unsigned long long pwdType; // @synthesize pwdType=_pwdType;
@property(nonatomic) __weak id <ImmPayPwdDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)onSubmitAction:(id)arg1;
- (void)onCloseAction:(id)arg1;
- (void)onPwdUpdated:(long long)arg1;
- (void)closeWithAnimation:(_Bool)arg1;
- (void)show;
- (void)dealloc;
- (id)initWithPwdType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
