//
//  TasksViewController.h
//  MyHelios
//
//  Created by Renzo Crisóstomo on 10/18/13.
//  Copyright (c) 2013 Renzo Crisóstomo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TasksViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate>

@property NSManagedObjectContext *managedObjectContext;

@end
