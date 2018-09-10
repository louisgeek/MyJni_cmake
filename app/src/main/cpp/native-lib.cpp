#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_louisgeek_myjni_1cmake_MainActivity_stringFromJNI(JNIEnv *env, jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C" JNIEXPORT jstring JNICALL
Java_com_louisgeek_myjni_1cmake_MainActivity_stringFromJNIstatic(JNIEnv *env, jclass type) {
    std::string hello = "Hello from C++ static";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jint JNICALL
Java_com_louisgeek_myjni_1cmake_MainActivity_intFromJNI(JNIEnv *env, jobject instance) {

    // TODO

}

extern "C" JNIEXPORT jint JNICALL
Java_com_louisgeek_myjni_1cmake_MainActivity_testString2Int(JNIEnv *env, jobject instance,
                                                            jstring aString_) {
    const char *aString = env->GetStringUTFChars(aString_, 0);

    // TODO

    env->ReleaseStringUTFChars(aString_, aString);
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_louisgeek_myjni_1cmake_MainActivity_testInt2String(JNIEnv *env, jobject instance,
                                                            jint bInt) {

    std::string hello = "Hello from C++ static";
    return env->NewStringUTF(hello.c_str());
}