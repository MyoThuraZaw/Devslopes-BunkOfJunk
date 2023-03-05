//
//  School.m
//  BunkOfJunk
//
//  Created by Myo Thura Zaw on 05/03/2023.
//

#import "School.h"
#import "Person.h"

@implementation School

-(void)initData {
    self.student = [[Person alloc]init];
    [self.student initData];
    
    //This dummy pulled a prank
    self.student = nil;
}

@end
