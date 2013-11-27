#include "../../zinnia.h"
#include <jni.h>
#include "libzinnia.h"

extern "C" { 
//--------------------------------------------charater method

/*
 * Method:    zinnia_character_new
 * Signature: ()J
 */
jlong Java_com_wanthings_ZinniaCore_characterNew
(JNIEnv *envenv, jobject jobj)
{
    zinnia_character_t* p = zinnia_character_new();
    return reinterpret_cast<jlong>(p);
}

/*
 * Method:    zinnia_character_destroy
 * Signature: (J)V
 */
void Java_com_wanthings_ZinniaCore_characterDestroy
(JNIEnv *env, jobject jobj, jlong character)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    zinnia_character_destroy(p);
}


/*
 * Method:    zinnia_character_set_value
 * Signature: (JLjava/lang/String;)V
 */
void Java_com_wanthings_ZinniaCore_characterSetValueForString
(JNIEnv *env, jobject jobj, jlong character, jstring jstr)
{
}

/*
 * Method:    zinnia_character_set_value2
 * Signature: (JLjava/lang/String;J)V
 */
void Java_com_wanthings_ZinniaCore_characterSetValueForLong
(JNIEnv *env, jobject jobj, jlong character, jstring jstr, jlong length)
{
}

/*
 * Method:    zinnia_character_value
 * Signature: (J)Ljava/lang/String;
 */
jstring Java_com_wanthings_ZinniaCore_characterValue
(JNIEnv *env, jobject jobj, jlong character)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    return env->NewStringUTF(zinnia_character_value(p));
}

/*
 * Method:    zinnia_character_set_width
 * Signature: (JJ)V
 */
void Java_com_wanthings_ZinniaCore_characterSetWidth
(JNIEnv *env, jobject jobj, jlong character, jlong width)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    zinnia_character_set_width(p, width);
}

/*
 * Method:    zinnia_character_set_height
 * Signature: (JJ)V
 */
void Java_com_wanthings_ZinniaCore_characterSetHeight
(JNIEnv *env, jobject jobj, jlong character, jlong height)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    zinnia_character_set_height(p, height);
}

/*
 * Method:    zinnia_character_width
 * Signature: (J)J
 */
jlong Java_com_wanthings_ZinniaCore_characterWidth
(JNIEnv *env, jobject jobj, jlong character)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    return zinnia_character_width(p);
}

/*
 * Method:    zinnia_character_height
 * Signature: (J)J
 */
jlong Java_com_wanthings_ZinniaCore_characterHeight
(JNIEnv *env, jobject jobj, jlong character)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    return zinnia_character_height(p);
}

/*
 * Method:    zinnia_character_clear
 * Signature: (J)V
 */
void Java_com_wanthings_ZinniaCore_characterClear
(JNIEnv *env, jobject jobj, jlong stroke)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(stroke);
    zinnia_character_clear(p);
}

/*
 * Method:    zinnia_character_add
 * Signature: (JJII)I
 */
jint Java_com_wanthings_ZinniaCore_characterAdd
(JNIEnv *env, jobject jobj, jlong character, jlong id, jint x, jint y)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    zinnia_character_add(p, id, x, y);
}

/*
 * Method:    zinnia_character_strokes_size
 * Signature: (J)J
 */
jlong Java_com_wanthings_ZinniaCore_characterStrokesSize
(JNIEnv *env, jobject jobj, jlong character)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    return zinnia_character_strokes_size(p);
}

/*
 * Method:    zinnia_character_stroke_size
 * Signature: (JJ)J
 */
jlong Java_com_wanthings_ZinniaCore_characterStrokeSize
(JNIEnv *env, jobject jobj, jlong character, jlong id)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    return zinnia_character_stroke_size(p, id);
}

/*
 * Method:    zinnia_character_x
 * Signature: (JJJ)I
 */
jint Java_com_wanthings_ZinniaCore_characterX
(JNIEnv *env, jobject jobj, jlong character, jlong id, jlong index)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    return zinnia_character_x(p, id, index);
}

/*
 * Method:    zinnia_character_y
 * Signature: (JJJ)I
 */
jint Java_com_wanthings_ZinniaCore_characterY
(JNIEnv *env, jobject jobj, jlong character, jlong id, jlong index)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    return zinnia_character_y(p, id, index);
}

/*
 * Method:    zinnia_character_parse
 * Signature: (JLjava/lang/String;)I
 */
jint Java_com_wanthings_ZinniaCore_characterParse
  (JNIEnv *env, jobject jobj, jlong, jstring jstr)
{
}

/*
 * Method:    zinnia_character_parse2
 * Signature: (JLjava/lang/String;J)I
 */
jint Java_com_wanthings_ZinniaCore_characterParse2
(JNIEnv *env, jobject jobj, jlong character, jstring str, jlong length)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    /* TODO */
    return 0;
}

/*
 * Method:    zinnia_character_to_string
 * Signature: (JLjava/lang/String;J)I
 */
jint Java_com_wanthings_ZinniaCore_1characterToString
(JNIEnv *env, jobject jobj, jlong character, jstring buf, jlong length)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    /* TODO */
    return 0;
}

/*
 * Method:    zinnia_character_strerror
 * Signature: (J)Ljava/lang/String;
 */
jstring Java_com_wanthings_ZinniaCore_characterStrerror
(JNIEnv *env, jobject jobj, jlong character)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    return env->NewStringUTF(zinnia_character_strerror(p));
}



//---------------------------------------result method

/*
 * Method:    zinnia_result_value
 * Signature: (JJ)Ljava/lang/String;
 */
jstring Java_com_wanthings_ZinniaCore_resultValue
(JNIEnv *env, jobject jobj, jlong result, jlong index)
{
    zinnia_result_t* p = reinterpret_cast<zinnia_result_t*>(result);
    return env->NewStringUTF(zinnia_result_value(p, index));
}

/*
 * Method:    zinnia_result_score
 * Signature: (JJ)F
 */
jfloat Java_com_wanthings_ZinniaCore_resultScore
(JNIEnv *env, jobject jobj, jlong result, jlong index)
{
    zinnia_result_t* p = reinterpret_cast<zinnia_result_t*>(result);
    return zinnia_result_score(p, index);
}

/*
 * Method:    zinnia_result_size
 * Signature: (J)J
 */
jlong Java_com_wanthings_ZinniaCore_resultSize
(JNIEnv *env, jobject jobj, jlong result)
{
    zinnia_result_t* p = reinterpret_cast<zinnia_result_t*>(result);
    return zinnia_result_size(p);
}

/*
 * Method:    zinnia_result_destroy
 * Signature: (J)V
 */
void Java_com_wanthings_ZinniaCore_resultDestroy
(JNIEnv *env, jobject jobj, jlong jlongv)
{
}


//--------------------------------------------------recognizer method

/*
 * Method:    zinnia_recognizer_new
 * Signature: ()J
 */
jlong Java_com_wanthings_ZinniaCore_recognizerNew
  (JNIEnv *env, jobject jobj)
{
    zinnia_recognizer_t* p = zinnia_recognizer_new();
    return reinterpret_cast<jlong>(p);
}

/*
 * Method:    zinnia_recognizer_destroy
 * Signature: (J)V
 */
void Java_com_wanthings_ZinniaCore_recognizerDestroy
(JNIEnv *env, jobject jobj, jlong recognizer)
{
    zinnia_recognizer_t* p = reinterpret_cast<zinnia_recognizer_t*>(recognizer);
    zinnia_recognizer_destroy(p);
}

/*
 * Method:    zinnia_recognizer_open
 * Signature: (JLjava/lang/String;)I
 */
jint Java_com_wanthings_ZinniaCore_recognizerOpen
  (JNIEnv *env, jobject jobj, jlong recognizer, jstring filename)
{
    zinnia_recognizer_t* p = reinterpret_cast<zinnia_recognizer_t*>(recognizer);
    return zinnia_recognizer_open(p, env->GetStringUTFChars(filename, NULL));
}

/*
 * Method:    zinnia_recognizer_open_from_ptr
 * Signature: (JLjava/lang/String;J)I
 */
jint Java_com_wanthings_ZinniaCore_recognizerOpenFromPtr
(JNIEnv *env, jobject jobj, jlong, jstring jstr, jlong jlongv)
{
}

/*
 * Method:    zinnia_recognizer_close
 * Signature: (J)I
 */
jint Java_com_wanthings_ZinniaCore_recognizerClose
(JNIEnv *env, jobject jobj, jlong recognizer)
{
    zinnia_recognizer_t* p = reinterpret_cast<zinnia_recognizer_t*>(recognizer);
    return zinnia_recognizer_close(p);
}

/*
 * Method:    zinnia_recognizer_size
 * Signature: (J)J
 */
jlong Java_com_wanthings_ZinniaCore_recognizerSize
(JNIEnv *env, jobject jobj, jlong recognizer)
{
    zinnia_recognizer_t* p = reinterpret_cast<zinnia_recognizer_t*>(recognizer);
    return zinnia_recognizer_size(p);
}

/*
 * Method:    zinnia_recognizer_value
 * Signature: (JJ)Ljava/lang/String;
 */
jstring Java_com_wanthings_ZinniaCore_recognizerValue
(JNIEnv *env, jobject jobj, jlong recognizer, jlong index)
{
    zinnia_recognizer_t* p = reinterpret_cast<zinnia_recognizer_t*>(recognizer);
    return env->NewStringUTF(zinnia_recognizer_value(p, index));
}

/*
 * Method:    zinnia_recognizer_strerror
 * Signature: (J)Ljava/lang/String;
 */
jstring Java_com_wanthings_ZinniaCore_recognizerStrerror
(JNIEnv *env, jobject jobj, jlong recognizer)
{
    zinnia_recognizer_t* p = reinterpret_cast<zinnia_recognizer_t*>(recognizer);
    return env->NewStringUTF(zinnia_recognizer_strerror(p));
}

/*
 * Method:    zinnia_recognizer_classify
 * Signature: (JLjava/lang/String;J)J
 */
jlong Java_com_wanthings_ZinniaCore_recognizerClassify
(JNIEnv *env, jobject jobj, jlong recognizer, jlong character, jlong nbest)
{
    zinnia_recognizer_t* recog = reinterpret_cast<zinnia_recognizer_t*>(recognizer);
    zinnia_character_t* ch = reinterpret_cast<zinnia_character_t*>(character);
    zinnia_result_t* result = zinnia_recognizer_classify(recog, ch, nbest);
    
    return reinterpret_cast<jlong>(result);
}


//-------------------------------------------trainer method

/*
 * Method:    zinnia_trainer_new
 * Signature: ()J
 */
jlong Java_com_wanthings_ZinniaCore_trainerNew
  (JNIEnv *env, jobject jobj)
{
   zinnia_trainer_t* trainer = zinnia_trainer_new();
   return reinterpret_cast<jlong>(trainer);
}

/*
 * Method:    zinnia_trainer_destroy
 * Signature: (J)V
 */
void Java_com_wanthings_ZinniaCore_trainerDestroy
(JNIEnv *env, jobject jobj, jlong trainer)
{
  zinnia_trainer_t* p = reinterpret_cast<zinnia_trainer_t*>(trainer);
  zinnia_trainer_destroy(p);

}
   

/*
 * Method:    zinnia_trainer_add
 * Signature: (JJ)I
 */
jint Java_com_wanthings_ZinniaCore_trainerAdd
(JNIEnv *env, jobject jobj, jlong trainer, jlong character)
{
  zinnia_trainer_t* p = reinterpret_cast<zinnia_trainer_t*>(trainer);
  zinnia_character_t* ch = reinterpret_cast<zinnia_character_t*>(character);
  return zinnia_trainer_add(p, ch);
}

/*
 * Method:    zinnia_trainer_clear
 * Signature: (J)V
 */
void Java_com_wanthings_ZinniaCore_trainerClear
(JNIEnv *env, jobject jobj, jlong trainer)
{
  zinnia_trainer_t* p = reinterpret_cast<zinnia_trainer_t*>(trainer);
  zinnia_trainer_clear(p);
}

/*
 * Method:    zinnia_trainer_train
 * Signature: (JLjava/lang/String;)I
 */
jint Java_com_wanthings_ZinniaCore_trainerTrain
  (JNIEnv *env, jobject jobj, jlong trainer, jstring filename)
{
  zinnia_trainer_t* p = reinterpret_cast<zinnia_trainer_t*>(trainer);
  return zinnia_trainer_train(p, (const char*)(env->GetStringUTFChars(filename, NULL)));
}

/*
 * Method:    zinnia_trainer_strerror
 * Signature: (J)Ljava/lang/String;
 */
jstring Java_com_wanthings_ZinniaCore_trainerStrerror
(JNIEnv *env, jobject jobj, jlong trainer)
{
  zinnia_trainer_t* p = reinterpret_cast<zinnia_trainer_t*>(trainer);
  return env->NewStringUTF(zinnia_trainer_strerror(p));
}

/*
 * Method:    zinnia_trainer_convert_model
 * Signature: (Ljava/lang/String;Ljava/lang/String;D)I
 */
jint Java_com_wanthings_ZinniaCore_trainerConvertModel
  (JNIEnv *env, jobject jobj, jstring txt_model, jstring binary_mode, jdouble compression_threshold)
{
}

/*
 * Method:    zinnia_trainer_make_header
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;D)I
 */
jint Java_com_wanthings_ZinniaCore_trainerMakeHeader
(JNIEnv *env, jobject jobj, jstring txt_model, jstring header_file, jstring name, jdouble compression_threashold)
{
}

}
