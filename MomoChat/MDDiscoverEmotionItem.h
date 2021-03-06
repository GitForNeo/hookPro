//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDDiscoverCellItem.h"

#import "NSCoding.h"

@class NSString;

@interface MDDiscoverEmotionItem : MDDiscoverCellItem <NSCoding>
{
    _Bool _showAlert;
    NSString *tipText;
    double serverUpdateTimestamp;
    double lastViewTimestamp;
    NSString *actionString;
    NSString *_desc;
    NSString *_tipIconURLString;
}

+ (id)emotionItemWithDressUpDictionary:(id)arg1;
+ (id)emotionItemWithDictionary:(id)arg1;
@property(copy, nonatomic) NSString *tipIconURLString; // @synthesize tipIconURLString=_tipIconURLString;
@property(nonatomic) _Bool showAlert; // @synthesize showAlert=_showAlert;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *actionString; // @synthesize actionString;
@property(nonatomic) double lastViewTimestamp; // @synthesize lastViewTimestamp;
@property(nonatomic) double serverUpdateTimestamp; // @synthesize serverUpdateTimestamp;
@property(copy, nonatomic) NSString *tipText; // @synthesize tipText;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (_Bool)hasNewEmotion;
- (id)init;

@end

