//
//  FSASCModel.h
//  FBRetainCycleDetector
//
//  Created by FudonFuchina on 2019/2/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FSASCModel : NSObject

@property (nonatomic,strong) NSNumber   *aid;
@property (nonatomic,copy)   NSString   *tm;
@property (nonatomic,copy)   NSString   *nm;
@property (nonatomic,copy)   NSString   *fx; // 1为+，2为-
@property (nonatomic,copy)   NSString   *bz;

@end

NS_ASSUME_NONNULL_END
