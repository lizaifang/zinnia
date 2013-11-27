#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

//----------------------------------------------charater method

jlong Java_com_wanthings_ZinniaCore_characterNew
(JNIEnv *envenv, jobject jobj);

void Java_com_wanthings_ZinniaCore_characterDestroy
(JNIEnv *env, jobject jobj, jlong character);

void Java_com_wanthings_ZinniaCore_characterSetValueForString
(JNIEnv *, jobject, jlong, jstring);

void Java_com_wanthings_ZinniaCore_characterSetValueForLong
(JNIEnv *, jobject, jlong, jstring, jlong);

jstring Java_com_wanthings_ZinniaCore_characterValue
(JNIEnv *, jobject, jlong);

void Java_com_wanthings_ZinniaCore_characterSetWidth
(JNIEnv *, jobject, jlong, jlong);

void Java_com_wanthings_ZinniaCore_characterSetHeight
(JNIEnv *, jobject, jlong, jlong);

jlong Java_com_wanthings_ZinniaCore_characterWidth
(JNIEnv *, jobject, jlong);

jlong Java_com_wanthings_ZinniaCore_characterHeight
(JNIEnv *, jobject, jlong);

void Java_com_wanthings_ZinniaCore_characterClear
(JNIEnv *, jobject, jlong);

jint Java_com_wanthings_ZinniaCore_characterAdd
(JNIEnv *, jobject, jlong, jlong, jint, jint);

jlong Java_com_wanthings_ZinniaCore_characterStrokesSize
(JNIEnv *, jobject, jlong);

jlong Java_com_wanthings_ZinniaCore_characterStrokeSize
(JNIEnv *, jobject, jlong, jlong);

jint Java_com_wanthings_ZinniaCore_characterX
(JNIEnv *, jobject, jlong, jlong, jlong);

jint Java_com_wanthings_ZinniaCore_characterY
(JNIEnv *, jobject, jlong, jlong, jlong);

jint Java_com_wanthings_ZinniaCore_characterParse
(JNIEnv *, jobject, jlong, jstring);

jint Java_com_wanthings_ZinniaCore_characterParse2
(JNIEnv *, jobject, jlong, jstring, jlong);

jint Java_com_wanthings_ZinniaCore_1characterToString
(JNIEnv *, jobject, jlong, jstring, jlong);

jstring Java_com_wanthings_ZinniaCore_characterStrerror
(JNIEnv *, jobject, jlong);


//------------------------------------------------------result method

jstring Java_com_wanthings_ZinniaCore_resultValue
(JNIEnv *, jobject, jlong, jlong);

jfloat Java_com_wanthings_ZinniaCore_resultScore
(JNIEnv *, jobject, jlong, jlong);

jlong Java_com_wanthings_ZinniaCore_resultSize
(JNIEnv *, jobject, jlong);

void Java_com_wanthings_ZinniaCore_resultDestroy
(JNIEnv *, jobject, jlong);


//recognizer method

jlong Java_com_wanthings_ZinniaCore_recognizerNew
(JNIEnv *, jobject);

void Java_com_wanthings_ZinniaCore_recognizerDestroy
(JNIEnv *, jobject, jlong);

jint Java_com_wanthings_ZinniaCore_recognizerOpen
(JNIEnv *, jobject, jlong, jstring);

jint Java_com_wanthings_ZinniaCore_recognizerOpenFromPtr
(JNIEnv *, jobject, jlong, jstring, jlong);

jint Java_com_wanthings_ZinniaCore_recognizerClose
(JNIEnv *, jobject, jlong);

jlong Java_com_wanthings_ZinniaCore_recognizerSize
(JNIEnv *, jobject, jlong);

jstring Java_com_wanthings_ZinniaCore_recognizerValue
(JNIEnv *, jobject, jlong, jlong);

jstring Java_com_wanthings_ZinniaCore_recognizerStrerror
(JNIEnv *, jobject, jlong);

jlong Java_com_wanthings_ZinniaCore_recognizerClassify
(JNIEnv *, jobject, jlong, jlong, jlong);


//trainer method

jlong Java_com_wanthings_ZinniaCore_trainerNew
(JNIEnv *, jobject);

void Java_com_wanthings_ZinniaCore_trainerDestroy
(JNIEnv *, jobject, jlong);

jint Java_com_wanthings_ZinniaCore_trainerAdd
(JNIEnv *, jobject, jlong, jlong);

void Java_com_wanthings_ZinniaCore_trainerClear
(JNIEnv *, jobject, jlong);

jint Java_com_wanthings_ZinniaCore_trainerTrain
(JNIEnv *, jobject, jlong, jstring);

jstring Java_com_wanthings_ZinniaCore_trainerStrerror
(JNIEnv *, jobject, jlong);

jint Java_com_wanthings_ZinniaCore_trainerConvertModel
(JNIEnv *, jobject, jstring, jstring, jdouble);

jint Java_com_wanthings_ZinniaCore_trainerMakeHeader
(JNIEnv *, jobject, jstring, jstring, jstring, jdouble);

#ifdef __cplusplus
}
#endif
