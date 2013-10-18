#import "AFIncrementalStore.h"
#import "AFRestClient.h"

@interface MyHeliosAPIClient : AFRESTClient <AFIncrementalStoreHTTPClient>

+ (MyHeliosAPIClient *)sharedClient;

@end
