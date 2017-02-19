//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString, UIColor;

@interface MDPersonalProfileCellModel : NSObject
{
    _Bool _showAccessory;
    long long _cellType;
    NSString *_reuseIdentifier;
    NSString *_title;
    NSString *_subtitle;
    NSString *_detail;
    NSString *_detailPlaceholder;
    UIColor *_detailTextColor;
    id _context;
    NSString *_clickSelectorString;
    NSString *_longPressSelectorString;
    double _cellHeight;
    NSAttributedString *_attributedDetailString;
}

+ (id)cellModelWithTitle:(id)arg1 subTitle:(id)arg2 detail:(id)arg3 detailPlaceholder:(id)arg4;
@property(copy, nonatomic) NSAttributedString *attributedDetailString; // @synthesize attributedDetailString=_attributedDetailString;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) _Bool showAccessory; // @synthesize showAccessory=_showAccessory;
@property(copy, nonatomic) NSString *longPressSelectorString; // @synthesize longPressSelectorString=_longPressSelectorString;
@property(copy, nonatomic) NSString *clickSelectorString; // @synthesize clickSelectorString=_clickSelectorString;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(retain, nonatomic) UIColor *detailTextColor; // @synthesize detailTextColor=_detailTextColor;
@property(copy, nonatomic) NSString *detailPlaceholder; // @synthesize detailPlaceholder=_detailPlaceholder;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
- (void)updateWithSubtitle:(id)arg1 detail:(id)arg2;
- (id)displayDetailText;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 detail:(id)arg3 detailPlaceholder:(id)arg4;
- (void)dealloc;

@end
