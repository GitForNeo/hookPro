//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@class UIView;

@interface UITableView (TBCommon)
- (void)touchRowAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)scrollFirstResponderIntoView;
- (void)scrollToLastRow:(_Bool)arg1;
- (void)scrollToFirstRow:(_Bool)arg1;
- (void)scrollToBottom:(_Bool)arg1;
- (void)scrollToTop:(_Bool)arg1;
@property(readonly, nonatomic) double tableCellMargin;
@property(readonly, nonatomic) UIView *indexView;
@end
