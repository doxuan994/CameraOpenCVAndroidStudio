#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_iogithub_1io_github_doxuan994_cameraopencvandroidstudio_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
