//
//  SDKHelper.h
//  EBankQRCodeIosLib
//
//  Created by liuyong on 16/2/18.
//  Copyright © 2016年 liuyong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseCallbackData.h"

@interface P10Data : BaseCallbackData

@property (nonatomic, copy) NSString *signatureP10;
@property (nonatomic, copy) NSString *encryptionP10;

@end
