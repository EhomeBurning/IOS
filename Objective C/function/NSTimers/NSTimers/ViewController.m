//
//  ViewController.m
//  NSTimers
//
//  Created by Aaron Caines on 23/08/2018.
//  Copyright © 2018 Aaron Caines. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    counter = 10;
    self.label.text = [NSString stringWithFormat:@"%i", counter];
    
}


- (IBAction)startTimer:(id)sender {
    
    timer = [NSTimer scheduledTimerWithTimeInterval:1.0 target:self selector:@selector(updateTimer) userInfo:nil repeats:YES];
    
}

-(void)updateTimer {
    
    counter -= 1;
    self.label.text = [NSString stringWithFormat:@"%i", counter];
    
    if (counter == 0) {
        
        [timer invalidate];
        
    }
    
}

- (IBAction)pauseTimer:(id)sender {
    
    [timer invalidate];
    
}

- (IBAction)restartTimer:(id)sender {
    
    [timer invalidate];
    
    counter = 0;
    self.label.text = [NSString stringWithFormat:@"%i", counter];
}


@end
