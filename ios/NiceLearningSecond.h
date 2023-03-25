#ifdef __cplusplus
#import "react-native-nice-learning-second.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNNiceLearningSecondSpec.h"

@interface NiceLearningSecond : NSObject <NativeNiceLearningSecondSpec>
#else
#import <React/RCTBridgeModule.h>

@interface NiceLearningSecond : NSObject <RCTBridgeModule>
#endif

@end
