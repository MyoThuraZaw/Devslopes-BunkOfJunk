//
//  ViewController.h
//  BunkOfJunk
//
//  Created by Myo Thura Zaw on 04/03/2023.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

// Property Attributes
// nonatomic/atomic: something related to thread safety
// always use nonatomic
// strong: reference type (object type)
// retain: reference type (object type)
// assign: value type
// weak
@property (nonatomic,strong) NSString *name;
@property (nonatomic,assign) int age;

@end

