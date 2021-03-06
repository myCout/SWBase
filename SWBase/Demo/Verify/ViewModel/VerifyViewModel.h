//
//  VerifyViewModel.h
//  SWBase
//
//  Created by willow on 2018/2/23.
//  Copyright © 2018年 swiftwhale. All rights reserved.
//

#import "SWViewModel.h"

@interface VerifyViewModel : SWViewModel

@property (nonatomic,copy) NSString *phone;

@property (nonatomic,copy) NSString *code;

@property (nonatomic,strong) RACSubject *getCodeTitleSubject;

@property (nonatomic,strong) RACCommand *startCommand;

@property (nonatomic,strong) RACCommand *getCodeCommand;

@property (nonatomic,strong) NSNumber *lastSecond;

@end
