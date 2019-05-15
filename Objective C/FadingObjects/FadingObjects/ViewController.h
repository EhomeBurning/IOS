//
//  ViewController.h
//  FadingObjects
//
//  Created by Aaron Caines on 22/08/2018.
//  Copyright © 2018 Aaron Caines. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UISegmentedControl *segControl;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UISlider *slider;
@property (weak, nonatomic) IBOutlet UISwitch *switchOutlet;
@property (weak, nonatomic) IBOutlet UILabel *label;


- (IBAction)fadeIn:(id)sender;
- (IBAction)fadeOut:(id)sender;
- (IBAction)amIFaded:(id)sender;



@end

