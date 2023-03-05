//
//  Backpack.h
//  BunkOfJunk
//
//  Created by Myo Thura Zaw on 05/03/2023.
//

#import <Foundation/Foundation.h>
@class Person;

NS_ASSUME_NONNULL_BEGIN

@interface Backpack : NSObject
@property (nonatomic,weak) Person *owner;
@end

NS_ASSUME_NONNULL_END
