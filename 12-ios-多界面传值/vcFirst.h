//
//  vcFirst.h
//  12-ios-多界面传值
//
//  Created by Rick on 2017/6/30.
//  Copyright © 2017年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "vcSecond.h"

@interface vcFirst : UIViewController<VCSeconDelegate>

-(void) changeColor:(UIColor *)color ;

@end
