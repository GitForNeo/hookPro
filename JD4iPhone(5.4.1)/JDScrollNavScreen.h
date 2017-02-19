//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, ScreenShotView, UINavigationController, UIPanGestureRecognizer, UIView;

@interface JDScrollNavScreen : NSObject
{
    struct CGPoint startTouch;
    ScreenShotView *sScreenShotView;
    UIPanGestureRecognizer *_recognizer;
    UIView *blackMask;
    _Bool _canDragBack;
    _Bool _isMoving;
    int transitionOption;
    UIView *_backgroundView;
    UINavigationController *_navigationController;
    NSMutableArray *_screenshotKeys;
}

@property(retain, nonatomic) NSMutableArray *screenshotKeys; // @synthesize screenshotKeys=_screenshotKeys;
@property(nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(nonatomic) _Bool canDragBack; // @synthesize canDragBack=_canDragBack;
@property(nonatomic) int transitionOption; // @synthesize transitionOption;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)paningGestureReceive:(id)arg1;
- (void)resetTransitionEffect;
- (struct CGAffineTransform)transformWithMovex:(float)arg1;
- (void)moveViewWithX:(float)arg1;
- (void)applyLastScreenshots;
- (void)setViewControllers;
- (void)popToRootViewController;
- (void)popViewController;
- (void)pushViewController;
- (void)clearAllCapture;
- (void)popClearLastCaptureAndReadBeforLastCapture;
- (void)pushClearBeforLastImagesFromMemAndCaptureLast;
- (void)screenCaptureSaveImageWithViewController:(id)arg1;
- (id)croppedImage:(id)arg1 cropRect:(struct CGRect)arg2;
- (id)captureWithView:(id)arg1 size:(struct CGSize)arg2;
- (id)getFolder;
- (id)initWithNavigationController:(id)arg1;
- (void)dealloc;

@end
