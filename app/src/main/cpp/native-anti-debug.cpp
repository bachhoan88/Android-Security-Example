#include "native-anti-debug.h"

void *monitor_pid(void *) {

    int status;

    waitpid(child_pid, &status, 0);

    _exit(0);
}

void anti_debug() {

    child_pid = fork();

    if (child_pid == 0)
    {
        int ppid = getppid();
        int status;

        if (ptrace(PTRACE_ATTACH, ppid, NULL, NULL) == 0)
        {
            waitpid(ppid, &status, 0);

            ptrace(PTRACE_CONT, ppid, NULL, NULL);

            while (waitpid(ppid, &status, 0)) {

                if (WIFSTOPPED(status)) {
                    ptrace(PTRACE_CONT, ppid, NULL, NULL);
                } else {
                    // Process has exited
                    _exit(0);
                }
            }
        }

    } else {
        pthread_t t;

        /* Start the monitoring thread */

        pthread_create(&t, NULL, monitor_pid, (void *)NULL);
    }
}

extern "C"

JNIEXPORT void JNICALL
Java_com_example_security_Security_antiDebug(
        JNIEnv *env,
        jobject /* this */) {

    anti_debug();
}