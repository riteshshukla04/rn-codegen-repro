#include "NativeCodegenExampleTurboModule.h"

namespace facebook::react
{
    NativeCodegenExampleTurboModule::NativeCodegenExampleTurboModule(std::shared_ptr<CallInvoker> jsinvoker) : NativeCodegenExampleCxxSpec<NativeCodegenExampleTurboModule>(std::move(jsinvoker)) {}

    double NativeCodegenExampleTurboModule::multiply(jsi::Runtime &rt, double a, double b)
    {
        return a * b * 3;
    }
}