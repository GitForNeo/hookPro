//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MDUserIconsView, MDUserProfile, NSString, UIImageView, UILabel;

@interface MDFriendRadarViewCell : UITableViewCell
{
    UIImageView *_headIcon;
    UIImageView *_bubbleBg;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    UILabel *_textDesLabel;
    MDUserIconsView *_userIconsView;
    NSString *_targetId;
    MDUserProfile *_upi;
}

@property(retain, nonatomic) MDUserProfile *upi; // @synthesize upi=_upi;
@property(copy, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) MDUserIconsView *userIconsView; // @synthesize userIconsView=_userIconsView;
@property(retain, nonatomic) UILabel *textDesLabel; // @synthesize textDesLabel=_textDesLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *bubbleBg; // @synthesize bubbleBg=_bubbleBg;
@property(retain, nonatomic) UIImageView *headIcon; // @synthesize headIcon=_headIcon;
- (void).cxx_destruct;
- (void)updateUI;
- (void)setupUI;
- (void)gotoUserProfile:(id)arg1;
- (void)layoutSubviews;
- (void)bindModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

