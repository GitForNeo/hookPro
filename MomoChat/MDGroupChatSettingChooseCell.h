//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDMutiTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface MDGroupChatSettingChooseCell : MDMutiTableViewCell
{
    UILabel *_titleTextLabel;
    UILabel *_detailLabel;
    UIImageView *_arrowImage;
    UIView *_lineView;
}

+ (double)cellHeightWithModel:(id)arg1;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleTextLabel; // @synthesize titleTextLabel=_titleTextLabel;
- (void).cxx_destruct;
- (void)bindModel:(id)arg1;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
