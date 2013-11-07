//
//  MyHeliosAPIClient.h
//  MyHelios
//
//  Created by Renzo Crisóstomo on 10/18/13.
//  Copyright (c) 2013 Renzo Crisóstomo. All rights reserved.
//

#import "AFIncrementalStore.h"
#import "AFRestClient.h"

@interface MyHeliosAPIClient : AFRESTClient <AFIncrementalStoreHTTPClient>

+ (MyHeliosAPIClient *)sharedClient;

@end
