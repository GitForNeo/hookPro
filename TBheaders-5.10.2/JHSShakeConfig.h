//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface JHSShakeConfig : NSObject
{
    CDUnknownBlockType _shakeConfigChange;	// 8 = 0x8
    NSDictionary *_shakeConfigDict;	// 16 = 0x10
}

+ (id)sharedShakeConfig;
@property(retain, nonatomic) NSDictionary *shakeConfigDict; // @synthesize shakeConfigDict=_shakeConfigDict;
@property(copy, nonatomic) CDUnknownBlockType shakeConfigChange; // @synthesize shakeConfigChange=_shakeConfigChange;
- (void).cxx_destruct;
- (_Bool)switchStatus:(id)arg1 defaultValue:(_Bool)arg2;
- (id)valueFromDictionary:(id)arg1 forKey:(id)arg2;
- (id)valueFromDictionaryForKey:(id)arg1;
- (_Bool)isValueOn:(id)arg1;
- (_Bool)enableShakeToChange;
- (void)onConfigChange;

@end
