#pragma once

#if __has_include(<React-Codegen/RNCodegenExampleSpecJSI.h>)
#include <React-Codegen/RNCodegenExampleSpecJSI.h>
#elif __has_include("RNCodegenExampleSpecJSI.h")
#include "RNCodegenExampleSpecJSI.h"
#endif

#include <jsi/jsi.h>
#include <ReactCommon/CallInvoker.h>

namespace facebook::react
{
    class NativeCodegenExampleTurboModule : public NativeCodegenExampleCxxSpec<NativeCodegenExampleTurboModule>
    {
    public:
        NativeCodegenExampleTurboModule(std::shared_ptr<CallInvoker> jsInvoker);

        double multiply(jsi::Runtime &rt, double a, double b);
    };
}