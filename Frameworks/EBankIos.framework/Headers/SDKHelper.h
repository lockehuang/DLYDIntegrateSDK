//
//  SDKHelper.h
//  EBankQRCodeIosLib
//
//  Created by liuyong on 16/2/18.
//  Copyright © 2016年 liuyong. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SDKHelper <NSObject>

@required
-(void) notifyApp:(const char*)pJson;

@end
