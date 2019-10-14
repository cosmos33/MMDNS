//
//  MMDNSAccessPoint.h
//  MMDNSDemo
//
//  Created by Bruce on 2018/9/20.
//  Copyright © 2018年 Bruce. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MDDNSAccessPoint : NSObject
@property(nonatomic, copy,readonly) NSString *host;
@property(nonatomic, assign,readonly) NSInteger port;
- (instancetype)initWithHost:(NSString *)host andPort:(NSInteger)port;
@end
