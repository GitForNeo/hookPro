//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface KSAudioHelper : NSObject
{
}

+ (unsigned int)hintForFileExtension:(id)arg1;
+ (unsigned int)getAudioFormatByFileHeader:(id)arg1 fileExtension:(id)arg2;
+ (id)guessAudioFileType:(id)arg1 propertyId:(unsigned int)arg2;
+ (id)formatOSStatus:(int)arg1;

@end

