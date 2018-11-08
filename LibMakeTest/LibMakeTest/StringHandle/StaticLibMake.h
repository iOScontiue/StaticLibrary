//
//  StaticLibMake.h
//  StaticLibMake
//
//  Created by 卢育彪 on 2018/11/8.
//  Copyright © 2018年 luyubiao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface StaticLibMake : NSObject

/**
 * 根据参照字符串获取参照字符串之后的字符串
 * @param sourceStr 目标字符串
 * @param followStr 参照字符串
 * @return 字符串
 */
+ (NSString *)fetchStrWithSourceStr:(NSString *)sourceStr followStr:(NSString *)followStr;

/**
 * 根据参照字符串获取参照字符串之后的固定长度的字符串
 * @param sourceStr 目标字符串
 * @param followStr 参照字符串
 * @param needStrLength 需要的字符串的长度
 * @return 字符串
 */
+ (NSString *)fetchStrWithSourceStr:(NSString *)sourceStr followStr:(NSString *)followStr length:(NSInteger)needStrLength;

/**
 * 根据参照字符串获取参照字符串之前的字符串
 * @param sourceStr 目标字符串
 * @param followStr 参照字符串
 * @return 字符串
 */
+ (NSString *)fetchPreStrWithSourceStr:(NSString *)sourceStr followStr:(NSString *)followStr;

/**
 * 根据参照字符串获取参照字符串之前的固定长度的字符串
 * @param sourceStr 目标字符串
 * @param followStr 参照字符串
 * @param needStrLength 需要的字符串的长度
 * @return 字符串
 */
+ (NSString *)fetchPreStrWithSourceStr:(NSString *)sourceStr followStr:(NSString *)followStr length:(NSInteger)needStrLength;

/**
 * 分割手机号（例：187 6666 7777）
 * @param sourceStr 目标字符串
 * @return 字符串
 */
+ (NSString *)separateTelephoneWithSpace:(NSString *)sourceStr;

@end
