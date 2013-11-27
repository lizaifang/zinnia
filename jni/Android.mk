LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

MY_ROOT := ../..

LOCAL_MODULE    := libzinnia
LOCAL_SRC_FILES := \
    $(MY_ROOT)/character.cpp \
    $(MY_ROOT)/feature.cpp \
    $(MY_ROOT)/param.cpp \
    $(MY_ROOT)/recognizer.cpp \
    $(MY_ROOT)/sexp.cpp \
    $(MY_ROOT)/svm.cpp \
    $(MY_ROOT)/trainer.cpp \
    $(MY_ROOT)/libzinnia.cpp

LOCAL_SRC_FILES += \
    libzinnia.cpp

LOCAL_CFLAGS    := -Werror -DHAVE_CONFIG_H
#include $(BUILD_STATIC_LIBRARY)

LOCAL_STATIC_LIBRARIES := libzinnia
include $(BUILD_SHARED_LIBRARY)
