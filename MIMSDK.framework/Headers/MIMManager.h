//
//  MIMManager.h
//  MIMSDK
//
//  Created by mickychan on 2020/6/10.
//  Copyright © 2020 mjb. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MIMComm.h"

NS_ASSUME_NONNULL_BEGIN

@interface MIMManager : NSObject


#pragma mark 一，初始化相关接口函数

/////////////////////////////////////////////////////////////////////////////////
//
//                      （一）初始化相关接口函数
//
/////////////////////////////////////////////////////////////////////////////////

/**
*  1.1 获取管理器实例 MIMManager
*
*  @return 管理器实例
*/
+ (MIMManager *)sharedInstance;

/**
 * 1.2 初始化 SDK，设置全局配置信息
 *
 * @param globalConfig 配置信息，全局有效
 * return YES：成功；NO：失败
 */
- (BOOL)initSDK:(MIMSdkConfig *)globalConfig;

/**
 * 1.3 反初始化SDK
 */
- (void)unInitSDK;

/**
 *  1.4 获取全局配置信息
 *  @return 全局配置
 */
- (MIMSdkConfig*)getGlobalConfig;


#pragma mark 二，登录相关接口
/////////////////////////////////////////////////////////////////////////////////
//
//                      （二）登录相关接口
//
/////////////////////////////////////////////////////////////////////////////////
-(void)getUserSigSucc:(MIMUserSigSucc)succ fail:(MIMFail)fail;

@end

NS_ASSUME_NONNULL_END
