//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MDImageView, UIImageView, UILabel;

@interface MDBirthdayFriendTableViewCell : UITableViewCell
{
    MDImageView *_avatarImageView;
    UILabel *_nameLabel;
    UIImageView *_birthdayIcon;
}

+ (double)cellHeight;
@property(nonatomic) __weak UIImageView *birthdayIcon; // @synthesize birthdayIcon=_birthdayIcon;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak MDImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)configureWithFriendInfo:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
