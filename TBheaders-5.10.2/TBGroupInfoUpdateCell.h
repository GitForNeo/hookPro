//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TBIMShadowLine, UILabel;

@interface TBGroupInfoUpdateCell : UITableViewCell
{
    UILabel *_cellTitle;	// 8 = 0x8
    UILabel *_cellContent;	// 16 = 0x10
    TBIMShadowLine *_shadowLine;	// 24 = 0x18
    UILabel *_groupQRCodeLabel;	// 32 = 0x20
}

@property(retain, nonatomic) UILabel *groupQRCodeLabel; // @synthesize groupQRCodeLabel=_groupQRCodeLabel;
@property(retain, nonatomic) TBIMShadowLine *shadowLine; // @synthesize shadowLine=_shadowLine;
@property(retain, nonatomic) UILabel *cellContent; // @synthesize cellContent=_cellContent;
@property(retain, nonatomic) UILabel *cellTitle; // @synthesize cellTitle=_cellTitle;
- (void).cxx_destruct;
- (void)setGroupQRCodeLabelHidden:(_Bool)arg1;
- (void)setContent:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)isLastCell:(_Bool)arg1;
- (void)prepareForReuse;
- (void)initStyle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
