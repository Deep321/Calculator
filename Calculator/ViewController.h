//
//  ViewController.h
//  Calculator
//
//  Created by Deep Prasad on 2014-12-07.
//  Copyright (c) 2014 Deep Prasad. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    int operator;
    NSString *previous;
    NSString *current;
}
@property (weak, nonatomic) IBOutlet UILabel *TheTotal;

-(void) doEquals;


- (IBAction)numButtons:(UIButton *)sender;


- (IBAction)opButtons:(UIButton *)sender;



- (IBAction)DecimalButton:(UIButton *)sender;



- (IBAction)ClrButton:(UIButton *)sender;



- (IBAction)EqButton:(UIButton *)sender;






@end

