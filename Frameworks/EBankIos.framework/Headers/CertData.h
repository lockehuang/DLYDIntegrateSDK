//
//  SDKHelper.h
//  EBankQRCodeIosLib
//
//  Created by liuyong on 16/2/18.
//  Copyright © 2016年 liuyong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseCallbackData.h"

@interface CertData : BaseCallbackData

@property (nonatomic, copy) NSString *signatureCert;
@property (nonatomic, copy) NSString *encryptionCert;

@end
