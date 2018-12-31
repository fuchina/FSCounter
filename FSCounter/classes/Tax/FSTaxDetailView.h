//
//  FSTaxDetailView.h
//  ShareEconomy
//
//  Created by fudon on 16/6/8.
//  Copyright © 2016年 FudonFuchina. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FSTaxRateEntity.h"

@class FSTaxDetailView;
typedef void(^FSTaxDetailCountResultBlock)(FSTaxDetailView *bDetailView);

@interface FSTaxDetailView : UIView

@property (nonatomic,strong) FSTaxRateEntity                *rateModel;
@property (nonatomic,copy)   FSTaxDetailCountResultBlock    resultBlock;

@property (nonatomic,assign) CGFloat            money;
@property (nonatomic,assign) CGFloat            baseSB;
@property (nonatomic,assign) CGFloat            baseGjj;
@property (nonatomic,assign) CGFloat            rest;
@property (nonatomic,assign) CGFloat            gjjAndRest;
@property (nonatomic,assign) CGFloat            comanyPayAll;

+ (void)countAfterToFront:(CGFloat)money gjjBase:(CGFloat)gjjBase sbBase:(CGFloat)sbBase taxModel:(FSTaxRateEntity *)model useInputBaseNumber:(BOOL)useInputBaseNumber block:(void(^)(NSArray *bResults))block;

@end
