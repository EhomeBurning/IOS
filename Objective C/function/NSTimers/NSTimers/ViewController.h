//
//  ViewController.h
//  NSTimers
//
//  Created by Aaron Caines on 23/08/2018.
//  Copyright © 2018 Aaron Caines. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    
    NSTimer *timer;
    int counter;
    
    
}

@property (weak, nonatomic) IBOutlet UILabel *label;


- (IBAction)startTimer:(id)sender;
- (IBAction)pauseTimer:(id)sender;
- (IBAction)restartTimer:(id)sender;



@end

