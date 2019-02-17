//
//  FSASCAPI.h
//  FBRetainCycleDetector
//
//  Created by FudonFuchina on 2019/2/17.
//

#import <Foundation/Foundation.h>
#import "FSASCModel.h"
#import <FSTuple.h>

@interface FSASCAPI : NSProxy

+ (Tuple2 *)ascList:(NSString *)table;
+ (NSString *)clearAll:(NSString *)table;
+ (NSString *)clear:(NSString *)table aid:(NSNumber *)aid;
+ (NSString *)addData:(NSString *)table number:(NSString *)number fx:(NSInteger)fx bz:(NSString *)bz;
+ (NSString *)updateData:(NSString *)table model:(FSASCModel *)model;

+ (Tuple2 *)calculator:(NSArray *)list;

@end
