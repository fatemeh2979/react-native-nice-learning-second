#include <jni.h>
#include "react-native-nice-learning-second.h"

extern "C"
JNIEXPORT jint JNICALL
Java_com_nicelearningsecond_NiceLearningSecondModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return nicelearningsecond::multiply(a, b);
}
