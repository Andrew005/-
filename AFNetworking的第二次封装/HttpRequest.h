//
//  HttpRequest.h
//
//  Created by vera on 16/9/2.
//  Copyright © 2016年 KFH. All rights reserved.
//

#import <Foundation/Foundation.h>

//成功的回调
typedef void(^HttpRequestSuccessCallBack)(id responseObject);
//失败的回调
typedef void(^HttpRequestFailureCallBack)(NSError *error);

@interface HttpRequest : NSObject

/**
 *  GET请求
 *
 *  @param urlstring url
 *  @param paramters 参数
 *  @param success   成功回调
 *  @param failure   失败回调
 */
+ (void)GET:(NSString *)urlstring paramters:(NSDictionary *)paramters success:(HttpRequestSuccessCallBack)success failure:(HttpRequestFailureCallBack)failure;
/**
 *  Post请求
 *
 *  @param urlstring url
 *  @param paramters 参数
 *  @param success   成功回调
 *  @param failure   失败回调
 */
+ (void)Post:(NSString *)urlstring paramters:(id)paramters success:(HttpRequestSuccessCallBack)success failure:(HttpRequestFailureCallBack)failure;

@end
