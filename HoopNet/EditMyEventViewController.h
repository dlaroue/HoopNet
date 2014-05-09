//
//  EditMyEventViewController.h
//  HoopNet
//
//  Created by Vincent Oe on 5/8/14.
//  Copyright (c) 2014 David Laroue. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "Event.h"

@interface EditMyEventViewController : UIViewController

@property (strong, nonatomic) Event* currentEvent;

@property (strong, nonatomic) IBOutlet UILabel *nameLabel;

@property (weak, nonatomic) IBOutlet UILabel *whereLabel;

@property (weak, nonatomic) IBOutlet UILabel *dateLabel;

@property (weak, nonatomic) IBOutlet UILabel *timeLabel;

@property (weak, nonatomic) IBOutlet UITextField *editNameTextField;

@property (weak, nonatomic) IBOutlet UITextField *editLocationTextField;

@property (weak, nonatomic) IBOutlet UIDatePicker *editWhenPicker;

@end