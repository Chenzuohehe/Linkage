//
//  RightTableViewCell.h
//  Linkage
//
//  Created by LeeJay on 16/8/22.
//  Copyright © 2016年 LeeJay. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FoodModel;

#define kCellIdentifier_Right @"RightTableViewCell"

@interface RightTableViewCell : UITableViewCell

@property (nonatomic, strong) FoodModel *model;

@end
