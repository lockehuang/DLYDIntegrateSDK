//
//  YDIntegrateSDK.h
//  IntegrateSDK
//
//  Created by lockehuang on 2019/9/16.
//  Copyright © 2019 MCSCA. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger,DLYDEnvironment){
    DLYDEnvTest,             //测试
    DLYDEnvStage,            //预发布
    DLYDEnvRelease           //线上环境
} ;

typedef NS_ENUM(NSUInteger,DLYDOpenType){
    DLYDOpenByPush,             //导航栏方式
    DLYDOpenByPresent,            //模态方式
} ;

typedef void(^DLYDSuccessBlock)(BOOL isSuccess, NSString *message);
typedef void(^DLYDErrorBlock)(BOOL isSuccess, NSString *message);
//typedef NSString * _Nullable(^DLYDPinBlock)(void);

@interface DLYDIntegrateSDK : NSObject

/**
 * @method 设置内容的打开方式（默认：DLYDOpenByPresent）
 * @param type 打开方式
 */
+ (void)yd_setOpenType:(DLYDOpenType) type;

/**
 * @method SDK初始化
 * @param param 初始化参数
 * @param resSuccessBlock 成功回调
 * @param resErrorBlock 失败回调
 */
+ (void)yd_registerWithParam:(NSDictionary *)param
        resSuccessBack:(DLYDSuccessBlock)resSuccessBlock
          resErrorBack:(DLYDErrorBlock) resErrorBlock;

/**
 * @method 验证码或证书登录
 * @param param 初始化参数
 * @param resSuccessBlock 成功回调
 * @param resErrorBlock 失败回调
 */
+ (void)yd_loginWithParam:(NSDictionary *)param
    currentViewController:(UIViewController *)currentVC
           resSuccessBack:(DLYDSuccessBlock)resSuccessBlock
             resErrorBack:(DLYDErrorBlock) resErrorBlock;

/**
 * @method 实名认证
 * @param param 初始化参数
 * @param resSuccessBlock 成功回调
 * @param resErrorBlock 失败回调
 */
+ (void)yd_realNameWithParam:(NSDictionary *)param
       currentViewController:(UIViewController *)currentVC
           resSuccessBack:(DLYDSuccessBlock)resSuccessBlock
             resErrorBack:(DLYDErrorBlock) resErrorBlock;

/**
 * @method 下载证书
 * @param userId 用户唯一标识
 * @param resSuccessBlock 成功回调
 * @param resErrorBlock 失败回调
 */
+ (void)yd_downLoadCert:(NSString *)userId
  currentViewController:(UIViewController *)currentVC
         resSuccessBack:(DLYDSuccessBlock)resSuccessBlock
           resErrorBack:(DLYDErrorBlock) resErrorBlock;

/**
 * @method 打开电子合同
 * @param userId 用户ID
 * @param userName 用户名称
 * @param certNo 证书编号
 * @param mobile 手机号
 * @param currentVC 当前控制器
 * @param resSuccessBlock 成功回调
 * @param resErrorBlock 失败回调
 */
+ (void)yd_openPersReg:(NSString *)userId
              userName:(NSString *)userName
                certNo:(NSString *)certNo
                mobile:(NSString *)mobile
 currentViewController:(UIViewController *)currentVC
        resSuccessBack:(DLYDSuccessBlock)resSuccessBlock
          resErrorBack:(DLYDErrorBlock) resErrorBlock;

/**
 * @method 根据userId获取证书信息
 * @param userId 用户Id
 * @return 证书信息
 */
+ (NSDictionary *)yd_getCertInfoByUserId:(NSString *)userId;

/**
 * @method 退出登录
 * @param param 暂定
 * @param resSuccessBlock 成功回调
 * @param resErrorBlock 失败回调
 */
+ (void)yd_logoutWithParam:(NSDictionary *)param
            resSuccessBack:(DLYDSuccessBlock)resSuccessBlock
              resErrorBack:(DLYDErrorBlock) resErrorBlock;

@end

NS_ASSUME_NONNULL_END
