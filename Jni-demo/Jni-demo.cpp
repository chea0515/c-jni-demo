#include "stdafx.h"
#include "com_cc_jni_service_JniService.h"

/*
 * Class:     com_cc_jni_service_JniService
 * Method:    println
 * Signature: (C)V
 */
JNIEXPORT void JNICALL Java_com_cc_jni_service_JniService_println
  (JNIEnv *env, jobject obj, jchar c)
{
	printf("out:%c", c);
}

/*
 * Class:     com_cc_jni_service_JniService
 * Method:    multiply
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_cc_jni_service_JniService_multiply
  (JNIEnv *env, jobject obj, jint a, jint b)
{
	printf("a * b = %d", a * b);
	return a * b;
}