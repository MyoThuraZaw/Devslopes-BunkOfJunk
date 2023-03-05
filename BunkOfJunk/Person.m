//
//  Person.m
//  BunkOfJunk
//
//  Created by Myo Thura Zaw on 05/03/2023.
//

#import "Person.h"
#import "Backpack.h"

@implementation Person

-(void)initData {
    self.backpack = [[Backpack alloc]init];
    self.backpack.owner = self;
}

@end
