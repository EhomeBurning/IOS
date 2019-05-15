//
//  ViewController.m
//  playground
//
//  Created by Charles  on 5/14/19.
//  Copyright © 2019 Charlie.L. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.label.text = @"Hello";
    self.textView.text = @"Please enter your name: ";
    
    
}


- (IBAction)pressMe:(id)sender {
    self.label.text = self.textField.text;
    
}
@end
