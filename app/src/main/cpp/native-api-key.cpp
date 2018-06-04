#include "native-api-key.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_security_APIKey_userName(JNIEnv *env, jclass type) {
    return env->NewStringUTF(userName);
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_security_APIKey_userPw(JNIEnv *env, jclass type) {
    return env->NewStringUTF(password);
}