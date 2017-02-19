//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FinderCellModelProtocol.h"

@class NSString;

@interface FinderArticleDetailSubCatTitleModel : NSObject <FinderCellModelProtocol>
{
    NSString *_title;
    NSString *_subTitle;
    long long _totalNum;
    NSString *_displayNum;
}

@property(copy, nonatomic) NSString *displayNum; // @synthesize displayNum=_displayNum;
@property(nonatomic) long long totalNum; // @synthesize totalNum=_totalNum;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) double cellHeight;
- (id)initWithTitle:(id)arg1 subTite:(id)arg2 totalNum:(long long)arg3;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
