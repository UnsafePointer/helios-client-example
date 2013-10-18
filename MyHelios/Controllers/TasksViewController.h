//
//  TasksViewController.h
//  MyHelios
//
//  Created by Taller Technologies on 10/18/13.
//  Copyright (c) 2013 Taller Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TasksViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate>

@property NSManagedObjectContext *managedObjectContext;

@end
