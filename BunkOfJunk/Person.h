//
//  Person.h
//  BunkOfJunk
//
//  Created by Myo Thura Zaw on 05/03/2023.
//

#import <Foundation/Foundation.h>
@class Backpack;

NS_ASSUME_NONNULL_BEGIN

@interface Person : NSObject
@property (nonatomic,strong) Backpack *backpack;
-(void)initData;
@end

NS_ASSUME_NONNULL_END
