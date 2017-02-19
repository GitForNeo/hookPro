//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIColor, UIImage, UIViewController;

@protocol JHSNavigationProtocol <NSObject>
- (void)presentViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3 withContainer:(UIViewController *)arg4;
- (void)popViewControllerAnimated:(_Bool)arg1 withContainer:(UIViewController *)arg2;
- (void)pushViewController:(UIViewController *)arg1 animated:(_Bool)arg2 withContainer:(UIViewController *)arg3;
- (void)updateNavigationItemWithItems:(NSArray *)arg1 position:(long long)arg2 withContainer:(UIViewController *)arg3;
- (void)updateNavigationItemWithItem:(id)arg1 position:(long long)arg2 withContainer:(UIViewController *)arg3;
- (void)updateNavigationItemWithImage:(UIImage *)arg1 position:(long long)arg2 withContainer:(UIViewController *)arg3;
- (void)updateNavigationItemWithText:(NSString *)arg1 position:(long long)arg2 withContainer:(UIViewController *)arg3;
- (void)setBarBackgroundColor:(UIColor *)arg1 withContainer:(UIViewController *)arg2;
- (void)setBarBackgroundImage:(UIImage *)arg1 withContainer:(UIViewController *)arg2;
- (id)backButtonItemOfContainer:(UIViewController *)arg1 withSelector:(SEL)arg2 withType:(long long)arg3;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2 withContainer:(UIViewController *)arg3;
- (id)navigationControllerOfContainer:(UIViewController *)arg1;
@end
