//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDMobileOrderDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CustomActivityIndicatorView, JDFooterLoadingView, JDStoreNetwork, NSMutableArray, NSString, RefreshTableHeaderView, UILabel, UITableView, UIView;

@interface JDMobileOrderListViewController : JDViewController <UITableViewDataSource, UITableViewDelegate, JDMobileOrderDelegate, UIScrollViewDelegate>
{
    UITableView *orderListTabelView;
    NSMutableArray *m_orderList;
    UIView *m_emptyTipView;
    CustomActivityIndicatorView *indicatorView;
    UILabel *errorTipLabel;
    JDFooterLoadingView *_footerLoadingView;
    RefreshTableHeaderView *_refreshTableHeaderView;
    int _nCurrentPage;
    int _refreshType;
    _Bool _bLoading;
    _Bool _bRefresh;
    _Bool _bGetMore;
    NSString *_strPayBackUrl;
    JDStoreNetwork *net_;
    int m_currentPage;
    int m_totalItem;
    _Bool isLoadMore;
}

- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)buyOrPayBtnPressed:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)goToDetailView:(id)arg1;
- (void)setRefreshLoadViewStatus;
- (void)setFootLoadViewStatus;
- (void)setOrderListDateAndPageInfo:(id)arg1;
- (void)getChargeOrderList:(int)arg1;
- (void)addTableFootView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadMainView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

