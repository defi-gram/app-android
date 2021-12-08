// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/DtmfSender

#ifndef org_webrtc_DtmfSender_JNI
#define org_webrtc_DtmfSender_JNI

#include <jni.h>

#include "webrtc/sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_DtmfSender[];
const char kClassPath_org_webrtc_DtmfSender[] = "org/webrtc/DtmfSender";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_DtmfSender_clazz(nullptr);
#ifndef org_webrtc_DtmfSender_clazz_defined
#define org_webrtc_DtmfSender_clazz_defined
inline jclass org_webrtc_DtmfSender_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_DtmfSender,
      &g_org_webrtc_DtmfSender_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace  webrtc {
namespace jni {

static jboolean JNI_DtmfSender_CanInsertDtmf(JNIEnv* env, jlong dtmfSender);

JNI_GENERATOR_EXPORT jboolean Java_org_webrtc_DtmfSender_nativeCanInsertDtmf(
    JNIEnv* env,
    jclass jcaller,
    jlong dtmfSender) {
  return JNI_DtmfSender_CanInsertDtmf(env, dtmfSender);
}

static jboolean JNI_DtmfSender_InsertDtmf(JNIEnv* env, jlong dtmfSender,
    const base::android::JavaParamRef<jstring>& tones,
    jint duration,
    jint interToneGap);

JNI_GENERATOR_EXPORT jboolean Java_org_webrtc_DtmfSender_nativeInsertDtmf(
    JNIEnv* env,
    jclass jcaller,
    jlong dtmfSender,
    jstring tones,
    jint duration,
    jint interToneGap) {
  return JNI_DtmfSender_InsertDtmf(env, dtmfSender, base::android::JavaParamRef<jstring>(env,
      tones), duration, interToneGap);
}

static base::android::ScopedJavaLocalRef<jstring> JNI_DtmfSender_Tones(JNIEnv* env, jlong
    dtmfSender);

JNI_GENERATOR_EXPORT jstring Java_org_webrtc_DtmfSender_nativeTones(
    JNIEnv* env,
    jclass jcaller,
    jlong dtmfSender) {
  return JNI_DtmfSender_Tones(env, dtmfSender).Release();
}

static jint JNI_DtmfSender_Duration(JNIEnv* env, jlong dtmfSender);

JNI_GENERATOR_EXPORT jint Java_org_webrtc_DtmfSender_nativeDuration(
    JNIEnv* env,
    jclass jcaller,
    jlong dtmfSender) {
  return JNI_DtmfSender_Duration(env, dtmfSender);
}

static jint JNI_DtmfSender_InterToneGap(JNIEnv* env, jlong dtmfSender);

JNI_GENERATOR_EXPORT jint Java_org_webrtc_DtmfSender_nativeInterToneGap(
    JNIEnv* env,
    jclass jcaller,
    jlong dtmfSender) {
  return JNI_DtmfSender_InterToneGap(env, dtmfSender);
}


}  // namespace jni
}  // namespace  webrtc

// Step 4: Generated test functions (optional).


#endif  // org_webrtc_DtmfSender_JNI
