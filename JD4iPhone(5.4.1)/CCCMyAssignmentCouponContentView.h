//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class CCCouponMyAssignMentAndRevocationView, NSMutableArray, NSString, UICollectionView, UILabel;

@interface CCCMyAssignmentCouponContentView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _ynShowMore;
    UILabel *_haveLabel;
    UILabel *_myAssignmentTitleLabel;
    UILabel *_lineLabel;
    UILabel *_onAssignmentTitleLabel;
    UICollectionView *_collectionView;
    NSMutableArray *_itemsArray;
    CDUnknownBlockType _updateBlock;
    long long _onAssignCount;
    long long _readyAssignCount;
    CCCouponMyAssignMentAndRevocationView *_myAssignMentAndRevocationView;
    UILabel *_titleLabel;
    CDUnknownBlockType _handleItemsBlock;
}

@property(copy, nonatomic) CDUnknownBlockType handleItemsBlock; // @synthesize handleItemsBlock=_handleItemsBlock;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CCCouponMyAssignMentAndRevocationView *myAssignMentAndRevocationView; // @synthesize myAssignMentAndRevocationView=_myAssignMentAndRevocationView;
@property(nonatomic) _Bool ynShowMore; // @synthesize ynShowMore=_ynShowMore;
@property(nonatomic) long long readyAssignCount; // @synthesize readyAssignCount=_readyAssignCount;
@property(nonatomic) long long onAssignCount; // @synthesize onAssignCount=_onAssignCount;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @synthesize itemsArray=_itemsArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *onAssignmentTitleLabel; // @synthesize onAssignmentTitleLabel=_onAssignmentTitleLabel;
@property(retain, nonatomic) UILabel *lineLabel; // @synthesize lineLabel=_lineLabel;
@property(retain, nonatomic) UILabel *myAssignmentTitleLabel; // @synthesize myAssignmentTitleLabel=_myAssignmentTitleLabel;
@property(retain, nonatomic) UILabel *haveLabel; // @synthesize haveLabel=_haveLabel;
- (void).cxx_destruct;
- (void)jumpRule;
- (void)showMyAssignmnetAndRevocationView:(id)arg1 index:(long long)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateOnAssignCount:(long long)arg1 readyAssignCount:(long long)arg2 ynShowMore:(_Bool)arg3;
- (void)reloadViewWithItems:(id)arg1 handleItemsBlock:(CDUnknownBlockType)arg2;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
