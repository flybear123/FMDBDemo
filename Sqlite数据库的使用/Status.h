//
//  Status.h
//  Sqlite数据库的使用
//
//  Created by BoDong on 2016/11/8.
//  Copyright © 2016年 Cloudream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "User.h"
@interface Status : NSObject
#pragma mark - 属性
@property (nonatomic,strong) NSNumber *Id;//微博id
@property (nonatomic,strong) User *user;//发送用户
@property (nonatomic,copy) NSString *createdAt;//创建时间
@property (nonatomic,copy) NSString *source;//设备来源
@property (nonatomic,copy) NSString *text;//微博内容

#pragma mark - 动态方法

/**
 *  初始化微博数据
 *
 *  @param createAt        创建日期
 *  @param source          来源
 *  @param text            微博内容
 *  @param user            发送用户
 *
 *  @return 微博对象
 */
-(Status *)initWithCreateAt:(NSString *)createAt source:(NSString *)source text:(NSString *)text user:(User *)user;

/**
 *  初始化微博数据
 *
 *  @param profileImageUrl 用户头像
 *  @param mbtype          会员类型
 *  @param createAt        创建日期
 *  @param source          来源
 *  @param text            微博内容
 *  @param userId          用户编号
 *
 *  @return 微博对象
 */
-(Status *)initWithCreateAt:(NSString *)createAt source:(NSString *)source text:(NSString *)text userId:(int)userId;
/**
 *  使用字典初始化微博对象
 *
 *  @param dic 字典数据
 *
 *  @return 微博对象
 */
-(Status *)initWithDictionary:(NSDictionary *)dic;

#pragma mark - 静态方法
/**
 *  初始化微博数据
 *
 *  @param createAt        创建日期
 *  @param source          来源
 *  @param text            微博内容
 *  @param user            发送用户
 *
 *  @return 微博对象
 */
+(Status *)statusWithCreateAt:(NSString *)createAt source:(NSString *)source text:(NSString *)text user:(User *)user;
/**
 *  初始化微博数据
 *
 *  @param profileImageUrl 用户头像
 *  @param mbtype          会员类型
 *  @param createAt        创建日期
 *  @param source          来源
 *  @param text            微博内容
 *  @param userId          用户编号
 *
 *  @return 微博对象
 */
+(Status *)statusWithCreateAt:(NSString *)createAt source:(NSString *)source text:(NSString *)text userId:(int)userId;
@end
