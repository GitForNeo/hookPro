//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class EditOrderAddressModel, FreightRiskInfosModel, JDBeanModel, NSArray, NSDictionary, NSNumber, NSString, OrderInvoiceModel, OrderPayShipMapModel, OrderVirtualPayModel, PreShipmentTypesInfoModel, UserInfoModel;

@interface OrderInfoModel : JDModel
{
    _Bool _isHasLspSku;
    _Bool _hasTang9;
    _Bool _isPresale;
    _Bool _forbidJdBean;
    _Bool _forbidGiftCard;
    _Bool _forbidCoupon;
    _Bool _forbidBalance;
    _Bool _giftbuy;
    _Bool _giftBuyHidePrice;
    _Bool _bigItemChangeFlag;
    _Bool _isAreaWrong;
    _Bool _isLimitBuyVender;
    _Bool _isIdCardVerifyRequired;
    _Bool _samItemChangeFlag;
    long long _stockStatus;
    NSNumber *_IdShipmentType;
    NSNumber *_IdPickSite;
    NSNumber *_CODTime;
    NSNumber *_IdPaymentType;
    NSNumber *_PaymentWay;
    NSNumber *_IsCodInform;
    NSNumber *_IdSchool;
    NSNumber *_isAddEasyBuyBool;
    NSNumber *_TypeId;
    NSNumber *_isChange;
    NSNumber *_paymentId;
    NSNumber *_shipmentId;
    NSNumber *_sopOtherShipmentId;
    NSNumber *_promiseTypeNew;
    NSNumber *_PromiseType;
    NSNumber *_codeTimeId;
    NSNumber *_pickSiteId;
    NSNumber *_invoiceChangeFlag;
    NSNumber *_consigneeChangeFlag;
    NSNumber *_paymentShipmentChangeFlag;
    NSNumber *_balanceChangeFlag;
    NSNumber *_liPinKaChangeFlag;
    NSNumber *_couponChangeFlag;
    NSNumber *_jdBeanChangeFlag;
    NSNumber *_presaleStepPay;
    NSString *_Email;
    NSString *_Zip;
    NSString *_CodDate;
    NSString *_Remark;
    NSString *_AgentUserName;
    NSString *_SubWayName;
    NSString *_BigItemCodDate;
    NSString *_isDefaultEasy;
    NSString *_Label;
    NSString *_IdPaymentTypeName;
    NSString *_IdInvoiceTypeName;
    NSString *_PromiseSendPay;
    NSString *_PromiseDate;
    NSString *_PromiseTimeRage;
    NSString *_promiseDateNew;
    NSString *_promiseTimeRangeNew;
    NSString *_bigItemShipDate;
    NSString *_bigItemInstallDate;
    NSString *_pickDateId;
    NSString *_CODTimeName;
    NSString *_PickSiteAddress;
    NSString *_PostCustomerId;
    NSString *_PostPayee;
    NSString *_PaymentType;
    NSString *_PaymentWayName;
    NSString *_InvoiceHeaderTypeName;
    NSString *_PickSiteName;
    NSString *_ShipmentType;
    NSString *_BigItemCodDateName;
    NSString *_show311Text;
    NSString *_show411Text;
    NSString *_popInvoiceTip;
    NSString *_lastPriceTip;
    NSString *_notifyMobile;
    NSString *_forthAddMessage;
    NSString *_bigItemChangeMsg;
    NSString *_areaWrongMsg;
    NSArray *_TheCoupons;
    NSArray *_TheLipinkas;
    NSArray *_payWaysArray;
    NSArray *_wareListArray;
    NSArray *_unuseJQSkus;
    NSArray *_unuseCouponsSkus;
    NSArray *_unuseDQSkus;
    NSDictionary *_manfanPromotion;
    NSArray *_preSalePaymentInfoArray;
    NSDictionary *_promiseSendPayNew;
    NSDictionary *_invoiceDic;
    NSDictionary *_param;
    JDBeanModel *_beanModel;
    OrderPayShipMapModel *_payShipModel;
    OrderInvoiceModel *_orderInvoiceModel;
    OrderVirtualPayModel *_orderVirtualPayModel;
    EditOrderAddressModel *_orderAddressModel;
    PreShipmentTypesInfoModel *_preShipmentTypesInfoModel;
    NSArray *_yunfeiDetail;
    NSString *_yunfeiWarnMsg;
    NSString *_yunfeiWarnUrl;
    NSString *_factPaymentName;
    NSArray *_deliverySkuList;
    NSDictionary *_transferJson;
    NSString *_earnestDescription;
    NSArray *_taxDetail;
    NSString *_taxWarnMsg;
    NSString *_taxWarnUrl;
    NSString *_areaExplainMsg;
    NSString *_areaExplainUrl;
    NSString *_deliveryWarnMsg;
    NSString *_deliveryWarnUrl;
    NSArray *_deliveryDetail;
    NSArray *_payMentTypeArray;
    NSString *_samItemChangeMsg;
    NSArray *_samItemChangeSkus;
    long long _samItemStockStatus;
    NSString *_internationalMessage;
    long long _promotionTime;
    double _timestamp;
    UserInfoModel *_userInfo;
    FreightRiskInfosModel *_freightRiskInfosModel;
}

@property(retain, nonatomic) FreightRiskInfosModel *freightRiskInfosModel; // @synthesize freightRiskInfosModel=_freightRiskInfosModel;
@property(retain, nonatomic) UserInfoModel *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long promotionTime; // @synthesize promotionTime=_promotionTime;
@property(copy, nonatomic) NSString *internationalMessage; // @synthesize internationalMessage=_internationalMessage;
@property(nonatomic) long long samItemStockStatus; // @synthesize samItemStockStatus=_samItemStockStatus;
@property(retain, nonatomic) NSArray *samItemChangeSkus; // @synthesize samItemChangeSkus=_samItemChangeSkus;
@property(copy, nonatomic) NSString *samItemChangeMsg; // @synthesize samItemChangeMsg=_samItemChangeMsg;
@property(nonatomic) _Bool samItemChangeFlag; // @synthesize samItemChangeFlag=_samItemChangeFlag;
@property(readonly, nonatomic) NSArray *payMentTypeArray; // @synthesize payMentTypeArray=_payMentTypeArray;
@property(retain, nonatomic) NSArray *deliveryDetail; // @synthesize deliveryDetail=_deliveryDetail;
@property(copy, nonatomic) NSString *deliveryWarnUrl; // @synthesize deliveryWarnUrl=_deliveryWarnUrl;
@property(copy, nonatomic) NSString *deliveryWarnMsg; // @synthesize deliveryWarnMsg=_deliveryWarnMsg;
@property(copy, nonatomic) NSString *areaExplainUrl; // @synthesize areaExplainUrl=_areaExplainUrl;
@property(copy, nonatomic) NSString *areaExplainMsg; // @synthesize areaExplainMsg=_areaExplainMsg;
@property(copy, nonatomic) NSString *taxWarnUrl; // @synthesize taxWarnUrl=_taxWarnUrl;
@property(copy, nonatomic) NSString *taxWarnMsg; // @synthesize taxWarnMsg=_taxWarnMsg;
@property(retain, nonatomic) NSArray *taxDetail; // @synthesize taxDetail=_taxDetail;
@property(nonatomic) _Bool isIdCardVerifyRequired; // @synthesize isIdCardVerifyRequired=_isIdCardVerifyRequired;
@property(nonatomic) _Bool isLimitBuyVender; // @synthesize isLimitBuyVender=_isLimitBuyVender;
@property(retain, nonatomic) NSString *earnestDescription; // @synthesize earnestDescription=_earnestDescription;
@property(retain, nonatomic) NSDictionary *transferJson; // @synthesize transferJson=_transferJson;
@property(retain, nonatomic) NSArray *deliverySkuList; // @synthesize deliverySkuList=_deliverySkuList;
@property(copy, nonatomic) NSString *factPaymentName; // @synthesize factPaymentName=_factPaymentName;
@property(copy, nonatomic) NSString *yunfeiWarnUrl; // @synthesize yunfeiWarnUrl=_yunfeiWarnUrl;
@property(copy, nonatomic) NSString *yunfeiWarnMsg; // @synthesize yunfeiWarnMsg=_yunfeiWarnMsg;
@property(retain, nonatomic) NSArray *yunfeiDetail; // @synthesize yunfeiDetail=_yunfeiDetail;
@property(retain, nonatomic) PreShipmentTypesInfoModel *preShipmentTypesInfoModel; // @synthesize preShipmentTypesInfoModel=_preShipmentTypesInfoModel;
@property(retain, nonatomic) EditOrderAddressModel *orderAddressModel; // @synthesize orderAddressModel=_orderAddressModel;
@property(retain, nonatomic) OrderVirtualPayModel *orderVirtualPayModel; // @synthesize orderVirtualPayModel=_orderVirtualPayModel;
@property(retain, nonatomic) OrderInvoiceModel *orderInvoiceModel; // @synthesize orderInvoiceModel=_orderInvoiceModel;
@property(retain, nonatomic) OrderPayShipMapModel *payShipModel; // @synthesize payShipModel=_payShipModel;
@property(retain, nonatomic) JDBeanModel *beanModel; // @synthesize beanModel=_beanModel;
@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
@property(retain, nonatomic) NSDictionary *invoiceDic; // @synthesize invoiceDic=_invoiceDic;
@property(retain, nonatomic) NSDictionary *promiseSendPayNew; // @synthesize promiseSendPayNew=_promiseSendPayNew;
@property(retain, nonatomic) NSArray *preSalePaymentInfoArray; // @synthesize preSalePaymentInfoArray=_preSalePaymentInfoArray;
@property(retain, nonatomic) NSDictionary *manfanPromotion; // @synthesize manfanPromotion=_manfanPromotion;
@property(retain, nonatomic) NSArray *unuseDQSkus; // @synthesize unuseDQSkus=_unuseDQSkus;
@property(retain, nonatomic) NSArray *unuseCouponsSkus; // @synthesize unuseCouponsSkus=_unuseCouponsSkus;
@property(retain, nonatomic) NSArray *unuseJQSkus; // @synthesize unuseJQSkus=_unuseJQSkus;
@property(retain, nonatomic) NSArray *wareListArray; // @synthesize wareListArray=_wareListArray;
@property(retain, nonatomic) NSArray *payWaysArray; // @synthesize payWaysArray=_payWaysArray;
@property(retain, nonatomic) NSArray *TheLipinkas; // @synthesize TheLipinkas=_TheLipinkas;
@property(retain, nonatomic) NSArray *TheCoupons; // @synthesize TheCoupons=_TheCoupons;
@property(readonly, copy, nonatomic) NSString *areaWrongMsg; // @synthesize areaWrongMsg=_areaWrongMsg;
@property(copy, nonatomic) NSString *bigItemChangeMsg; // @synthesize bigItemChangeMsg=_bigItemChangeMsg;
@property(copy, nonatomic) NSString *forthAddMessage; // @synthesize forthAddMessage=_forthAddMessage;
@property(copy, nonatomic) NSString *notifyMobile; // @synthesize notifyMobile=_notifyMobile;
@property(copy, nonatomic) NSString *lastPriceTip; // @synthesize lastPriceTip=_lastPriceTip;
@property(copy, nonatomic) NSString *popInvoiceTip; // @synthesize popInvoiceTip=_popInvoiceTip;
@property(copy, nonatomic) NSString *show411Text; // @synthesize show411Text=_show411Text;
@property(copy, nonatomic) NSString *show311Text; // @synthesize show311Text=_show311Text;
@property(copy, nonatomic) NSString *BigItemCodDateName; // @synthesize BigItemCodDateName=_BigItemCodDateName;
@property(copy, nonatomic) NSString *ShipmentType; // @synthesize ShipmentType=_ShipmentType;
@property(copy, nonatomic) NSString *PickSiteName; // @synthesize PickSiteName=_PickSiteName;
@property(copy, nonatomic) NSString *InvoiceHeaderTypeName; // @synthesize InvoiceHeaderTypeName=_InvoiceHeaderTypeName;
@property(copy, nonatomic) NSString *PaymentWayName; // @synthesize PaymentWayName=_PaymentWayName;
@property(copy, nonatomic) NSString *PaymentType; // @synthesize PaymentType=_PaymentType;
@property(copy, nonatomic) NSString *PostPayee; // @synthesize PostPayee=_PostPayee;
@property(copy, nonatomic) NSString *PostCustomerId; // @synthesize PostCustomerId=_PostCustomerId;
@property(copy, nonatomic) NSString *PickSiteAddress; // @synthesize PickSiteAddress=_PickSiteAddress;
@property(copy, nonatomic) NSString *CODTimeName; // @synthesize CODTimeName=_CODTimeName;
@property(copy, nonatomic) NSString *pickDateId; // @synthesize pickDateId=_pickDateId;
@property(copy, nonatomic) NSString *bigItemInstallDate; // @synthesize bigItemInstallDate=_bigItemInstallDate;
@property(copy, nonatomic) NSString *bigItemShipDate; // @synthesize bigItemShipDate=_bigItemShipDate;
@property(copy, nonatomic) NSString *promiseTimeRangeNew; // @synthesize promiseTimeRangeNew=_promiseTimeRangeNew;
@property(copy, nonatomic) NSString *promiseDateNew; // @synthesize promiseDateNew=_promiseDateNew;
@property(copy, nonatomic) NSString *PromiseTimeRage; // @synthesize PromiseTimeRage=_PromiseTimeRage;
@property(copy, nonatomic) NSString *PromiseDate; // @synthesize PromiseDate=_PromiseDate;
@property(copy, nonatomic) NSString *PromiseSendPay; // @synthesize PromiseSendPay=_PromiseSendPay;
@property(copy, nonatomic) NSString *IdInvoiceTypeName; // @synthesize IdInvoiceTypeName=_IdInvoiceTypeName;
@property(copy, nonatomic) NSString *IdPaymentTypeName; // @synthesize IdPaymentTypeName=_IdPaymentTypeName;
@property(copy, nonatomic) NSString *Label; // @synthesize Label=_Label;
@property(copy, nonatomic) NSString *isDefaultEasy; // @synthesize isDefaultEasy=_isDefaultEasy;
@property(copy, nonatomic) NSString *BigItemCodDate; // @synthesize BigItemCodDate=_BigItemCodDate;
@property(copy, nonatomic) NSString *SubWayName; // @synthesize SubWayName=_SubWayName;
@property(copy, nonatomic) NSString *AgentUserName; // @synthesize AgentUserName=_AgentUserName;
@property(copy, nonatomic) NSString *Remark; // @synthesize Remark=_Remark;
@property(copy, nonatomic) NSString *CodDate; // @synthesize CodDate=_CodDate;
@property(copy, nonatomic) NSString *Zip; // @synthesize Zip=_Zip;
@property(copy, nonatomic) NSString *Email; // @synthesize Email=_Email;
@property(retain, nonatomic) NSNumber *presaleStepPay; // @synthesize presaleStepPay=_presaleStepPay;
@property(retain, nonatomic) NSNumber *jdBeanChangeFlag; // @synthesize jdBeanChangeFlag=_jdBeanChangeFlag;
@property(retain, nonatomic) NSNumber *couponChangeFlag; // @synthesize couponChangeFlag=_couponChangeFlag;
@property(retain, nonatomic) NSNumber *liPinKaChangeFlag; // @synthesize liPinKaChangeFlag=_liPinKaChangeFlag;
@property(retain, nonatomic) NSNumber *balanceChangeFlag; // @synthesize balanceChangeFlag=_balanceChangeFlag;
@property(retain, nonatomic) NSNumber *paymentShipmentChangeFlag; // @synthesize paymentShipmentChangeFlag=_paymentShipmentChangeFlag;
@property(retain, nonatomic) NSNumber *consigneeChangeFlag; // @synthesize consigneeChangeFlag=_consigneeChangeFlag;
@property(retain, nonatomic) NSNumber *invoiceChangeFlag; // @synthesize invoiceChangeFlag=_invoiceChangeFlag;
@property(retain, nonatomic) NSNumber *pickSiteId; // @synthesize pickSiteId=_pickSiteId;
@property(retain, nonatomic) NSNumber *codeTimeId; // @synthesize codeTimeId=_codeTimeId;
@property(retain, nonatomic) NSNumber *PromiseType; // @synthesize PromiseType=_PromiseType;
@property(retain, nonatomic) NSNumber *promiseTypeNew; // @synthesize promiseTypeNew=_promiseTypeNew;
@property(retain, nonatomic) NSNumber *sopOtherShipmentId; // @synthesize sopOtherShipmentId=_sopOtherShipmentId;
@property(retain, nonatomic) NSNumber *shipmentId; // @synthesize shipmentId=_shipmentId;
@property(retain, nonatomic) NSNumber *paymentId; // @synthesize paymentId=_paymentId;
@property(retain, nonatomic) NSNumber *isChange; // @synthesize isChange=_isChange;
@property(retain, nonatomic) NSNumber *TypeId; // @synthesize TypeId=_TypeId;
@property(retain, nonatomic) NSNumber *isAddEasyBuyBool; // @synthesize isAddEasyBuyBool=_isAddEasyBuyBool;
@property(retain, nonatomic) NSNumber *IdSchool; // @synthesize IdSchool=_IdSchool;
@property(retain, nonatomic) NSNumber *IsCodInform; // @synthesize IsCodInform=_IsCodInform;
@property(retain, nonatomic) NSNumber *PaymentWay; // @synthesize PaymentWay=_PaymentWay;
@property(retain, nonatomic) NSNumber *IdPaymentType; // @synthesize IdPaymentType=_IdPaymentType;
@property(retain, nonatomic) NSNumber *CODTime; // @synthesize CODTime=_CODTime;
@property(retain, nonatomic) NSNumber *IdPickSite; // @synthesize IdPickSite=_IdPickSite;
@property(retain, nonatomic) NSNumber *IdShipmentType; // @synthesize IdShipmentType=_IdShipmentType;
@property(nonatomic) long long stockStatus; // @synthesize stockStatus=_stockStatus;
@property(readonly, nonatomic) _Bool isAreaWrong; // @synthesize isAreaWrong=_isAreaWrong;
@property(nonatomic) _Bool bigItemChangeFlag; // @synthesize bigItemChangeFlag=_bigItemChangeFlag;
@property(nonatomic) _Bool giftBuyHidePrice; // @synthesize giftBuyHidePrice=_giftBuyHidePrice;
@property(nonatomic) _Bool giftbuy; // @synthesize giftbuy=_giftbuy;
@property(nonatomic) _Bool forbidBalance; // @synthesize forbidBalance=_forbidBalance;
@property(nonatomic) _Bool forbidCoupon; // @synthesize forbidCoupon=_forbidCoupon;
@property(nonatomic) _Bool forbidGiftCard; // @synthesize forbidGiftCard=_forbidGiftCard;
@property(nonatomic) _Bool forbidJdBean; // @synthesize forbidJdBean=_forbidJdBean;
@property(nonatomic) _Bool isPresale; // @synthesize isPresale=_isPresale;
@property(nonatomic) _Bool hasTang9; // @synthesize hasTang9=_hasTang9;
@property(nonatomic) _Bool isHasLspSku; // @synthesize isHasLspSku=_isHasLspSku;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool didUpdate;
- (void)resetLocalDeliveryInfoByDict:(id)arg1;
- (_Bool)updateLocalDeliveryInfoByAddressChange:(_Bool)arg1;
- (void)setDataWithDic:(id)arg1;
- (void)updatePayShipWithModel:(id)arg1;
- (void)updateWithAddressModel:(id)arg1;
- (id)changeFlags;
- (void)setCouponsGiftWithDic:(id)arg1;
- (id)getListWithArr:(id)arg1;
- (id)getAddressDic:(_Bool)arg1 andAddressModel:(id)arg2;
- (id)getDic:(_Bool)arg1;

@end

