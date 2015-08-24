//
//  ViewController.h
//  8_1_pop_up
//
//  Created by Shinya Hirai on 2015/08/24.
//  Copyright (c) 2015年 Shinya Hirai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MMPopLabelDelegate.h>

@interface ViewController : UIViewController <MMPopLabelDelegate>

@property (nonatomic, retain) MMPopLabel *label;
- (IBAction)showPopUp:(id)sender;

@property (weak, nonatomic) IBOutlet UIButton *popBtn;

@end

