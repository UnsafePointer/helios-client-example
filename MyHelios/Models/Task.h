//
//  Task.h
//  MyHelios
//
//  Created by Taller Technologies on 10/18/13.
//  Copyright (c) 2013 Taller Technologies. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface Task : NSManagedObject

@property NSString *text;
@property NSDate *completedAt;
@property (nonatomic, getter = isCompleted) BOOL completed;

@end
