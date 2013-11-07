//
//  TaskViewController.h
//  MyHelios
//
//  Created by Renzo Crisóstomo on 10/18/13.
//  Copyright (c) 2013 Renzo Crisóstomo. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Task;

@interface TaskViewController : UITableViewController

@property NSManagedObjectContext *managedObjectContext;

@property (nonatomic, weak) IBOutlet UISwitch *swtCompleted;
@property (nonatomic, weak) IBOutlet UITextField *txtFieldText;
@property (nonatomic, strong) Task *task;

- (IBAction)onTouchUpInsideSaveButton:(id)sender;
- (IBAction)onTouchBackground:(id)sender;

@end
