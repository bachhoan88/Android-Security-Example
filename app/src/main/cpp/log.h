#include <android/log.h>

#ifndef ANDROIDSECURITY_MASTER_LOG_H
#define ANDROIDSECURITY_MASTER_LOG_H

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "security", __VA_ARGS__))
#define LOGE(...) ((void)__android_log_print(ANDROID_LOG_ERROR, "security", __VA_ARGS__))

#endif //ANDROIDSECURITY_MASTER_LOG_H
