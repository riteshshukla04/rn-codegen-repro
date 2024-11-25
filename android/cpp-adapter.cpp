#include <jni.h>
#include "react-native-codegen-example.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_codegenexample_CodegenExampleModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return codegenexample::multiply(a, b);
}
