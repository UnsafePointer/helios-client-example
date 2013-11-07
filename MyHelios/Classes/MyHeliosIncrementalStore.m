//
//  MyHeliosIncrementalStore.m
//  MyHelios
//
//  Created by Renzo Crisóstomo on 10/18/13.
//  Copyright (c) 2013 Renzo Crisóstomo. All rights reserved.
//

#import "MyHeliosIncrementalStore.h"
#import "MyHeliosAPIClient.h"

@implementation MyHeliosIncrementalStore

+ (void)initialize
{
    [NSPersistentStoreCoordinator registerStoreClass:self
                                        forStoreType:[self type]];
}

+ (NSString *)type
{
    return NSStringFromClass(self);
}

+ (NSManagedObjectModel *)model
{
    return [[NSManagedObjectModel alloc] initWithContentsOfURL:[[NSBundle mainBundle] URLForResource:@"MyHelios"
                                                                                       withExtension:@"xcdatamodeld"]];
}

- (id <AFIncrementalStoreHTTPClient>)HTTPClient
{
    return [MyHeliosAPIClient sharedClient];
}

@end