//
//  FSTaxRateEntity.h
//  ShareEconomy
//
//  Created by FudonFuchina on 16/6/10.
//  Copyright © 2016年 FudonFuchina. All rights reserved.
//

#import "FSEntity.h"

#define FSTaxRateEntity_index   @"FSTaxRateEntity_index"

static NSString *TAX_name = @"tax_name";                    // 名称
static NSString *TAX_sbMaxBase = @"tax_sbMaxBase";          // 社保基数最大数
static NSString *TAX_gjjMaxBase = @"tax_gjjMaxBase";        // 公积金最大基数
static NSString *TAX_yanglao = @"tax_yanglao";              // 个人养老金比例
static NSString *TAX_yanglaoQ = @"tax_yanglaoQ";            // 企业养老金比例
static NSString *TAX_yiliao = @"tax_yiliao";                // 个人医疗比例
static NSString *TAX_yiliaoQ = @"tax_yiliaoQ";              // 企业医疗比例
static NSString *TAX_shiye = @"tax_shiye";                  // 个人失业比例
static NSString *TAX_shiyeQ = @"tax_shiyeQ";                // 企业失业比例
static NSString *TAX_gongshang = @"tax_gongshang";          // 企业工伤比例
static NSString *TAX_shengyu = @"tax_shengyu";              // 企业生育比例
static NSString *TAX_gjj = @"tax_gjj";                      // 个人公积金比例
static NSString *TAX_gjjQ = @"tax_gjjQ";                    // 企业公积金比例

@interface FSTaxRateEntity : FSEntity

@property (nonatomic,copy) NSString *tax_name;
@property (nonatomic,copy) NSString *tax_sbMaxBase;
@property (nonatomic,copy) NSString *tax_gjjMaxBase;
@property (nonatomic,copy) NSString *tax_yanglao;
@property (nonatomic,copy) NSString *tax_yanglaoQ;
@property (nonatomic,copy) NSString *tax_yiliao;
@property (nonatomic,copy) NSString *tax_yiliaoQ;
@property (nonatomic,copy) NSString *tax_shiye;
@property (nonatomic,copy) NSString *tax_shiyeQ;
@property (nonatomic,copy) NSString *tax_gongshang;
@property (nonatomic,copy) NSString *tax_shengyu;
@property (nonatomic,copy) NSString *tax_gjj;
@property (nonatomic,copy) NSString *tax_gjjQ;

+ (NSArray *)allTaxDatas;
+ (FSTaxRateEntity *)savedDefaultRateModel;
+ (void)saveDefaultRateModel:(NSString *)index;
+ (void)saveModel:(NSDictionary *)dic;

@end
