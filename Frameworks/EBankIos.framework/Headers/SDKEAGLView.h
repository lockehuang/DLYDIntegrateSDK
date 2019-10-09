//
//  SDKEAGLView.h
//  SafeModuleIosLib
//
//  Created by liuyong on 16/1/6.
//  Copyright © 2016年 liuyong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SDKHelper.h"

@interface SDKEAGLView:NSObject{
  id <SDKHelper> delegate;
}
//json的方式回传数据
@property (nonatomic, assign) id <SDKHelper> delegate;
//对象的方式回传数据
@property (nonatomic, copy) void(^callback)(id callbackData);   //!< block

/**
 ** 创建有感插件视图
 **/
+ (id) createEAGLView:(CGRect)frame window:(UIView *) pRootwindow;

/**
 ** 创建无感插件
 **/
+ (id) create;

/**
 ** 隐藏视图
 */
+(void) setHidden:(bool)isHidden window:(UIView *) pRootwindow;

/**
 ** 设置SDKDelegate
 */
-(void) setSDKDelegate:(id <SDKHelper>) _Delegate;

/**
 ** 功能:有感插件方法
 ** 参数:
 ** pJson:[输入参数]
 ** mode:1:非加密,2:SM3（报文+签名）3:信封
 **/
+(void)nativeSdkFuntion:(const char*)pJson mode:(int)mode;

/**
 ** 功能:无感插件方法
 ** 参数:
 ** pJson:[输入参数]
 ** mode:1:非加密,2:SM3（报文+签名）3:信封
 **/
+(void)silentCallSDK:(const char*)pJson mode:(int)mode;

/**
 ** 程序切入后台
 **/
+(void) onPause;

/**
 ** 程序切入前台
 **/
+(void) onResume;

//恒丰银行专用-start
+(void) getP10:(const char*) custId pinMac:(const char*) pinMac signatureDN:(const char*) signatureDN  callback:(void (^)(id callbackData))callback;

+(void) importCerts:(const char*) custId signatureCert:(const char*) signatureCert  callback:(void (^)(id callbackData))callback;

+(void) signMsg:(const char*) custId pinMac:(const char*) pinMac message:(const char*) message callback:(void (^)(id callbackData))callback;

+(void) signBin:(const char*) custId pinMac:(const char*) pinMac b64Msg:(const char*) message callback:(void (^)(id callbackData))callback;

+(void) changePIN:(const char*) custId oldPinMac :(const char*) oldPinMac newPinMac :(const char*) newPinMac  callback:(void (^)(id callbackData))callback;

+(void) queryX509 :(const char*) custId callback:(void (^)(id callbackData))callback;

+(void) encrypt:(const char*) custId data:(const char*) data callback:(void (^)(id callbackData))callback;

+(void) decrypt:(const char*) custId data:(const char*) data callback:(void (^)(id callbackData))callback;

+(void) checkX509 :(const char*) custId callback:(void (^)(id callbackData))callback;

+(void) queryCEC:(const char*) custId callback:(void (^)(id callbackData))callback;
//恒丰银行专用-end

@end
