#include <jni.h>
#include <string>
#include "log.h"
#include "native-anti-debug.h"


#ifndef ANDROIDSECURITY_NATIVE_SECURITY_H
#define ANDROIDSECURITY_NATIVE_SECURITY_H

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jstring JNICALL
Java_com_example_security_Security_getSecret(JNIEnv *env, jclass type);

#ifdef __cplusplus
}
#endif

#endif //ANDROIDSECURITY_NATIVE_SECURITY_H
