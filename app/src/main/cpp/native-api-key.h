#include <jni.h>
#include <string>
#include "log.h"

const char* userName = "757365725f6e616d65";

const char* password = "70617373776f7264";

#ifndef ANDROIDSECURITY_MASTER_NATIVE_API_KEY_H
#define ANDROIDSECURITY_MASTER_NATIVE_API_KEY_H

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jstring JNICALL
Java_com_example_security_APIKey_userName(JNIEnv *env, jclass type);

JNIEXPORT jstring JNICALL
Java_com_example_security_APIKey_userPw(JNIEnv *env, jclass type);

#ifdef __cplusplus
}
#endif

#endif //ANDROIDSECURITY_MASTER_NATIVE_API_KEY_H
