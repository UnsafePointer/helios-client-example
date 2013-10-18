//
//  MyHeliosAPIClient.h
//  MyHelios
//
//  Created by Taller Technologies on 10/18/13.
//  Copyright (c) 2013 Taller Technologies. All rights reserved.
//

#import "AFIncrementalStore.h"
#import "AFRestClient.h"

@interface MyHeliosAPIClient : AFRESTClient <AFIncrementalStoreHTTPClient>

+ (MyHeliosAPIClient *)sharedClient;

@end
