//
//  SWTableViewCell.h
//  SWBase
//
//  Created by admin on 2018/2/22.
//  Copyright © 2018年 swiftwhale. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SWTableViewCellProtocol.h"

@interface SWTableViewCell : UITableViewCell <SWTableViewCellProtocol>

+ (NSString *)reuseId;

+ (SWTableViewCell *)cell;

@end
