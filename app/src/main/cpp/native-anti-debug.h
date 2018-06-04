#include <jni.h>
#include <string>
#include <unistd.h>
#include <sys/ptrace.h>
#include <sys/wait.h>
#include "log.h"
static int child_pid;

#ifndef ANDROIDSECURITY_MASTER_NATIVE_ANTI_DEBUG_H
#define ANDROIDSECURITY_MASTER_NATIVE_ANTI_DEBUG_H

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT void JNICALL
Java_com_example_security_Security_antiDebug(JNIEnv *env, jobject /* this */);

#ifdef __cplusplus
}
#endif

void anti_debug();

#endif //ANDROIDSECURITY_NATIVE_SECURITY_H