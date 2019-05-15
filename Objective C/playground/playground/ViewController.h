//
//  ViewController.h
//  playground
//
//  Created by Charles  on 5/14/19.
//  Copyright © 2019 Charlie.L. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *label;

@property (weak, nonatomic) IBOutlet UITextView *textView;

@property (weak, nonatomic) IBOutlet UITextField *textField;

- (IBAction)pressMe:(id)sender;


@end

