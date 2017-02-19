//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDAPIOperatorItem, MDPrivateKeyGenerator, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface MDAPIOperatorLayer : NSObject
{
    _Bool _exchanging;
    NSString *_currentUserID;
    unsigned long long _currentLV;
    NSString *_plaintextToken;
    NSMutableDictionary *_secretDictionary;
    NSMutableDictionary *_oldSecretDic;
    NSMutableArray *_secretArray;
    unsigned long long _currentStatus;
    MDPrivateKeyGenerator *_generator;
    NSString *_currentPK;
    NSString *_cachedPK;
    unsigned long long _currentPKVersion;
    unsigned long long _latestVersion;
    unsigned long long _finishedVersion;
    MDAPIOperatorItem *_currentItem;
    NSMutableSet *_cacheSet;
    NSString *_verifiedToken;
    unsigned long long _exchangeFailedCount;
    NSString *_tempString;
    NSString *_lastChangedKey;
    unsigned long long _exchangeThreshold;
    unsigned long long _registerFailedCount;
    NSString *_mapID;
}

+ (id)defaultOperatorLayer;
@property(retain, nonatomic) NSString *mapID; // @synthesize mapID=_mapID;
@property(nonatomic) unsigned long long registerFailedCount; // @synthesize registerFailedCount=_registerFailedCount;
@property(nonatomic) unsigned long long exchangeThreshold; // @synthesize exchangeThreshold=_exchangeThreshold;
@property(retain, nonatomic) NSString *lastChangedKey; // @synthesize lastChangedKey=_lastChangedKey;
@property(retain, nonatomic) NSString *tempString; // @synthesize tempString=_tempString;
@property(nonatomic) unsigned long long exchangeFailedCount; // @synthesize exchangeFailedCount=_exchangeFailedCount;
@property(retain, nonatomic) NSString *verifiedToken; // @synthesize verifiedToken=_verifiedToken;
@property(retain, nonatomic) NSMutableSet *cacheSet; // @synthesize cacheSet=_cacheSet;
@property(retain, nonatomic) MDAPIOperatorItem *currentItem; // @synthesize currentItem=_currentItem;
@property(nonatomic) unsigned long long finishedVersion; // @synthesize finishedVersion=_finishedVersion;
@property(nonatomic) unsigned long long latestVersion; // @synthesize latestVersion=_latestVersion;
@property(nonatomic) unsigned long long currentPKVersion; // @synthesize currentPKVersion=_currentPKVersion;
@property(retain, nonatomic) NSString *cachedPK; // @synthesize cachedPK=_cachedPK;
@property(retain, nonatomic) NSString *currentPK; // @synthesize currentPK=_currentPK;
@property(retain, nonatomic) MDPrivateKeyGenerator *generator; // @synthesize generator=_generator;
@property(nonatomic) unsigned long long currentStatus; // @synthesize currentStatus=_currentStatus;
@property(nonatomic, getter=isExchanging) _Bool exchanging; // @synthesize exchanging=_exchanging;
@property(retain, nonatomic) NSMutableArray *secretArray; // @synthesize secretArray=_secretArray;
@property(retain, nonatomic) NSMutableDictionary *oldSecretDic; // @synthesize oldSecretDic=_oldSecretDic;
@property(retain, nonatomic) NSMutableDictionary *secretDictionary; // @synthesize secretDictionary=_secretDictionary;
@property(retain, nonatomic) NSString *plaintextToken; // @synthesize plaintextToken=_plaintextToken;
@property(nonatomic) unsigned long long currentLV; // @synthesize currentLV=_currentLV;
@property(copy, nonatomic) NSString *currentUserID; // @synthesize currentUserID=_currentUserID;
- (void).cxx_destruct;
- (void)makeCachedRequestFailedWithError:(id)arg1;
- (void)makeCachedRequestFailedWithResponse:(id)arg1;
- (void)exchangeFailed:(id)arg1;
- (void)exchangeErrored:(id)arg1;
- (void)exchangeSuccessed:(id)arg1;
- (void)cancelRequestWithPara:(id)arg1;
- (void)doClearWorkWhileLogout;
- (void)resendRequests;
- (void)beginExchangePKWithKey:(id)arg1;
- (unsigned long long)statusOfCompletedResponse:(id)arg1;
- (void)prepareResendingWithRequestPara:(id)arg1;
- (void)handleParsedPlainTextToken:(id)arg1;
- (void)handlePlainTextTokenWithoutLogging:(id)arg1;
- (id)generateSecretKeyForPK:(id)arg1;
- (id)userAgentSignString;
- (unsigned long long)statusOfCommonRequestWithPara:(id)arg1;
- (unsigned long long)statusOfSendingRequestPara:(id)arg1;
- (void)updateSecret:(id)arg1 licience:(id)arg2 plainTextToken:(id)arg3;
- (void)user:(id)arg1 injectSecret:(id)arg2 licience:(id)arg3 plainTextToken:(id)arg4;
- (void)resendRequestWithPara:(id)arg1;
- (void)resendRequestWithPara:(id)arg1 shouldIgnoreToken:(_Bool)arg2;
- (void)handleDecodeFailedWithPara:(id)arg1;
- (void)fillSecretDictionary;
- (id)hexStringForData:(id)arg1 length:(unsigned long long)arg2;
- (void)updatePlainTextTokenCache;
- (void)loadPlainTextTokenCache;
- (void)updateSecretCache;
- (void)loadSecretCache;
- (id)encryptKeyWithSecret:(id)arg1;
- (id)defaultServerPK;
- (unsigned long long)defaultPKVersion;
- (id)currentServerPK;
- (unsigned long long)pkVersion;
- (id)handlingSecret;
- (id)defaultHandlingSecret;
- (unsigned long long)lVersion;
- (void)checkIfNeededUpdate;
- (id)init;

@end
