//
//  SDKHelper.h
//  EBankQRCodeIosLib
//
//  Created by liuyong on 16/2/18.
//  Copyright © 2016年 liuyong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseCallbackData.h"

@interface P7Data : BaseCallbackData

@property (nonatomic, copy) NSString *signatureData;
@property (nonatomic, assign) int cec;

@end
