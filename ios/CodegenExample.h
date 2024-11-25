#ifdef __cplusplus
#import "react-native-codegen-example.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNCodegenExampleSpec.h"

@interface CodegenExample : NSObject <NativeCodegenExampleSpec>
#else
#import <React/RCTBridgeModule.h>

@interface CodegenExample : NSObject <RCTBridgeModule>
#endif

@end
