//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSNumber, NSString;

@interface FinderAttentionModel : NSObject
{
    NSNumber *_currentPage;
    NSMutableArray *_itemList;
    NSString *_testID;
    NSNumber *_totalPage;
    NSString *_updateCount;
    NSNumber *_type;
    NSString *_typeName;
    NSNumber *_visiteTime;
    NSString *_showMessage;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) NSString *showMessage; // @synthesize showMessage=_showMessage;
@property(retain, nonatomic) NSNumber *visiteTime; // @synthesize visiteTime=_visiteTime;
@property(retain, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *updateCount; // @synthesize updateCount=_updateCount;
@property(retain, nonatomic) NSNumber *totalPage; // @synthesize totalPage=_totalPage;
@property(retain, nonatomic) NSString *testID; // @synthesize testID=_testID;
@property(retain, nonatomic) NSMutableArray *itemList; // @synthesize itemList=_itemList;
@property(retain, nonatomic) NSNumber *currentPage; // @synthesize currentPage=_currentPage;
- (void).cxx_destruct;
- (void)updateListData:(id)arg1;
- (id)processHeaderData;
- (void)keyValuesDidFinishConvertingToObject;
- (void)dealloc;

@end
