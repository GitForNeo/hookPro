//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, NSArray, NSString, UIColor;

@interface FBGifImg : UIView
{
    NSString *_imgSrc;	// 8 = 0x8
    double _gifWidth;	// 16 = 0x10
    UIColor *_gifColor;	// 24 = 0x18
    NSArray *_gifArray;	// 32 = 0x20
    unsigned long long _gifCurr;	// 40 = 0x28
    CADisplayLink *_displayLink;	// 48 = 0x30
}

@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) unsigned long long gifCurr; // @synthesize gifCurr=_gifCurr;
@property(retain, nonatomic) NSArray *gifArray; // @synthesize gifArray=_gifArray;
@property(retain, nonatomic) UIColor *gifColor; // @synthesize gifColor=_gifColor;
@property(nonatomic) double gifWidth; // @synthesize gifWidth=_gifWidth;
@property(copy, nonatomic) NSString *imgSrc; // @synthesize imgSrc=_imgSrc;
- (void).cxx_destruct;
- (void)updateNewFrame;
- (void)waitForNextGifFrame:(unsigned long long)arg1;
- (void)setSuccGifWithColor:(id)arg1 andWidth:(double)arg2;
- (void)setLoadGifWithColor:(id)arg1 andWidth:(double)arg2;
- (void)setFBGifImg:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end
