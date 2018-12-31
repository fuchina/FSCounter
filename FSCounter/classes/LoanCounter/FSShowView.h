//
//  FSShowView.h
//  myhome
//
//  Created by FudonFuchina on 2017/5/30.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FSShowView : UIView

@property (nonatomic,strong) NSArray    *dataSource;
@property (nonatomic,copy) void (^buttonClick)(FSShowView *bView,NSInteger bIndex);

- (instancetype)initWithFrame:(CGRect)frame titles:(NSArray *)titles;

@end
