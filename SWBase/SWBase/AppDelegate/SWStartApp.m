//
//  SWStartApp.m
//  SWBase
//
//  Created by admin on 2018/2/22.
//  Copyright © 2018年 swiftwhale. All rights reserved.
//

#import "SWStartApp.h"

@implementation SWStartApp

+ (void)load {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        [[self class] initPersonData];
    });
}

+ (void)initPersonData{
    
}

@end
