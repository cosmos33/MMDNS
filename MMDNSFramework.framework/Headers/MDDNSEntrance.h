//
//  MDDNDSManager.h
//  MMDNSDemo
//
//  Created by Bruce on 2018/9/20.
//  Copyright © 2018年 Bruce. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MDDNSAccessPoint.h"
#import "MDDNSConfigProtocol.h"
@interface MDDNSEntrance : NSObject
+ (id<MDDNSConfigProtocol>)getdnsConfig;

/**
 获取可用的连接host

 @param host 原请求的host
 @return 真实请求使用的ip
 */
+ (NSString *)getIPbyHost:(NSString *)host;

/**
 获取可用的连接host
 
 @param host 原请求的host
 @return 真实请求使用的ip列表
 */
+ (NSArray *)getIPsbyHost:(NSString *)host;

/**
 连接成功后调用，通知DNS模块
 @param mainDomain 最初请求的域名
 @param succeedDomain 在请求成功时使用的域名
 @param successedPort 请求成功时使用的port
 */
+ (void)requestSucceedForDomain:(NSString *)mainDomain andSucceedDomain:(NSString *)succeedDomain andSuccessedPort:(NSInteger)successedPort;

/**
 连接失败后调用，通知DNS模块
 @param mainDomain 最初请求的域名
 @param failedDomain 在请求失败时使用的域名
 @param failedPort 请求失败时使用的port
 */
+ (void)requestFailedForDomain:(NSString *)mainDomain andFailedDomain:(NSString *)failedDomain andFailedPort:(NSInteger)failedPort;


/**
 im连接通过此获取连接的ap

 @return MDDNSAccessPoint对象，从中获取 连接的host和port
 @param defaultDomain 连接im时默认使用的原始域名
 @param defaultPort 连接im时默认使用的原始端口h
 */
+ (MDDNSAccessPoint *)getImAPbyDefaultdomain:(NSString *)defaultDomain andSuccessedPort:(NSInteger)defaultPort;

/*
 添加走httpdns的域名白名单 注:不设置此白名单，则默认在开启httpdns模式下所有的域名都被开启走httpdns模块，此白名单包含sni
 @parameter domains 域名列表
*/
+ (void)addDomainWhiteList:(NSArray *)domains;
/*
 添加走httpdns的域名白名单
 @parameter domain 域名
 */
+ (void)addDomainToWhiteList:(NSString *)domain;

/*
 域名是否在白名单中,在白名单中的域名才会走nsurlprotocol的处理
 */
+ (BOOL)domainInWhiteList:(NSString *)domain;

/*
 是否开启走httpdns模块
 */
+ (BOOL)openDNSModule;

/*
 是否开启httpdns模块中的urlprotocol处理机制，开启后模块内会自动注册urlprotocol，进行网络的拦截转发等处理
 @parameter en YES 是开启 NO 是不开启
 */
+ (void)useHttpdnsURLProtocol:(BOOL)en;

/**
 是否输出底层详细日志
 */
+ (void)shouldConsolLog:(BOOL)en;
/**
 开启/关闭 WKWebview的拦截
 */
+ (void)useWKWebViewProtocol:(BOOL)en;

@end
