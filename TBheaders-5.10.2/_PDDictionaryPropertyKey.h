//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol NSCopying;

@interface _PDDictionaryPropertyKey : NSObject
{
    NSString *_stringKey;	// 8 = 0x8
    id <NSCopying> _key;	// 16 = 0x10
}

@property(copy, nonatomic) id <NSCopying> key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *stringKey; // @synthesize stringKey=_stringKey;
- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 stringRepresentation:(id)arg2;

@end
