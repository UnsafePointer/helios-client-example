//
//  TaskViewController.m
//  MyHelios
//
//  Created by Taller Technologies on 10/18/13.
//  Copyright (c) 2013 Taller Technologies. All rights reserved.
//

#import "TaskViewController.h"
#import "Task.h"

@interface TaskViewController ()

- (void)setupAppearance;
- (void)setupContents;

@end

@implementation TaskViewController

- (id)initWithCoder:(NSCoder *)aDecoder
{
    self = [super initWithCoder:aDecoder];
    if (self) {
        
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self setupAppearance];
    [self setupContents];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
}

#pragma mark - Private Methods

- (void)setupAppearance
{
    _txtFieldText.tintColor = [UIColor colorWithRed:241.0f/255.0f
                                              green:196.0f/255.0f
                                               blue:15.0f/255.0f
                                              alpha:1.0f];
}

- (void)setupContents
{
    if (_task) {
        _txtFieldText.text = _task.text;
        _swtCompleted.on = _task.isCompleted;
    }
    [_txtFieldText becomeFirstResponder];
}

#pragma mark - Public Methods

- (IBAction)onTouchUpInsideSaveButton:(id)sender
{
    [self.managedObjectContext performBlock:^{
        if (!_task) {
            _task = [NSEntityDescription insertNewObjectForEntityForName:@"Task"
                                                  inManagedObjectContext:self.managedObjectContext];
        }
        _task.text = _txtFieldText.text;
        _task.completed = _swtCompleted.on;
        [self.managedObjectContext save:nil];
    }];
    [self.navigationController popViewControllerAnimated:YES];
}

- (IBAction)onTouchBackground:(id)sender
{
    [_txtFieldText resignFirstResponder];
}

@end
