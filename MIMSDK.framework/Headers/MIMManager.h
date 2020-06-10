//
//  MIMManager.h
//  MIMSDK
//
//  Created by mickychan on 2020/6/10.
//  Copyright © 2020 mjb. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MIMManager : NSObject

+ (MIMManager *)sharedInstance;

/**
 * 初始化SDK
 *
 * @param sdkAppID 应用ID
 * return YES：成功；NO：失败
 */
- (BOOL)initSDK:(NSString *)sdkAppID;

/**
 * 反初始化SDK
 */
- (void)unInitSDK;

@end

NS_ASSUME_NONNULL_END
