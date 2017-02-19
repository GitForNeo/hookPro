//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFSimpleDatabase;

@interface DBMyPurchasedEmotionProvider : NSObject
{
    MFSimpleDatabase *mfdb;
}

+ (id)providerWithMFDB:(id)arg1;
- (void)addInusedPacketWithPacketId:(id)arg1 index:(long long)arg2;
- (void)updateAllInusedItemsStateWithPackIds:(id)arg1;
- (void)updateAllUsableItemsStateWithPackets:(id)arg1;
- (void)setMyPurchasedEmotion:(id)arg1;
- (id)getMyPurchasedEmotion;
- (void)ensureDbTables;
- (void)dealloc;
- (id)initWithMFDB:(id)arg1;

@end
