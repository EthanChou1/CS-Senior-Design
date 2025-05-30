//
// This file is auto-generated. Please don't modify it!
//

#undef LOG_TAG

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_VIDEO

#include <string>

#include "opencv2/video.hpp"

#include "/home/ethan/opencv_build/opencv/modules/video/include/opencv2/video/tracking.hpp"
#include "/home/ethan/opencv_build/opencv/modules/video/include/opencv2/video/background_segm.hpp"
#include "/home/ethan/opencv_build/opencv/modules/video/include/opencv2/video/detail/tracking.detail.hpp"

#define LOG_TAG "org.opencv.video"
#include "common.h"

using namespace cv;

/// throw java exception
#undef throwJavaException
#define throwJavaException throwJavaException_video
static void throwJavaException(JNIEnv *env, const std::exception *e, const char *method) {
  std::string what = "unknown exception";
  jclass je = 0;

  if(e) {
    std::string exception_type = "std::exception";

    if(dynamic_cast<const cv::Exception*>(e)) {
      exception_type = "cv::Exception";
      je = env->FindClass("org/opencv/core/CvException");
    }

    what = exception_type + ": " + e->what();
  }

  if(!je) je = env->FindClass("java/lang/Exception");
  env->ThrowNew(je, what.c_str());

  LOGE("%s caught %s", method, what.c_str());
  (void)method;        // avoid "unused" warning
}

extern "C" {


//
//  void cv::BackgroundSubtractor::apply(Mat image, Mat& fgmask, double learningRate = -1)
//

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractor_apply_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractor_apply_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong fgmask_nativeObj, jdouble learningRate)
{
    
    static const char method_name[] = "video::apply_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractor>* me = (Ptr<cv::BackgroundSubtractor>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& fgmask = *((Mat*)fgmask_nativeObj);
        (*me)->apply( image, fgmask, (double)learningRate );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractor_apply_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractor_apply_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong fgmask_nativeObj)
{
    
    static const char method_name[] = "video::apply_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractor>* me = (Ptr<cv::BackgroundSubtractor>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& fgmask = *((Mat*)fgmask_nativeObj);
        (*me)->apply( image, fgmask );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::BackgroundSubtractor::getBackgroundImage(Mat& backgroundImage)
//

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractor_getBackgroundImage_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractor_getBackgroundImage_10
  (JNIEnv* env, jclass , jlong self, jlong backgroundImage_nativeObj)
{
    
    static const char method_name[] = "video::getBackgroundImage_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractor>* me = (Ptr<cv::BackgroundSubtractor>*) self; //TODO: check for NULL
        Mat& backgroundImage = *((Mat*)backgroundImage_nativeObj);
        (*me)->getBackgroundImage( backgroundImage );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::BackgroundSubtractor>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractor_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractor_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::BackgroundSubtractor>*) self;
}


//
//  int cv::BackgroundSubtractorKNN::getHistory()
//

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getHistory_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getHistory_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getHistory_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        return (*me)->getHistory();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::BackgroundSubtractorKNN::setHistory(int history)
//

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setHistory_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setHistory_10
  (JNIEnv* env, jclass , jlong self, jint history)
{
    
    static const char method_name[] = "video::setHistory_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        (*me)->setHistory( (int)history );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::BackgroundSubtractorKNN::getNSamples()
//

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getNSamples_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getNSamples_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getNSamples_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        return (*me)->getNSamples();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::BackgroundSubtractorKNN::setNSamples(int _nN)
//

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setNSamples_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setNSamples_10
  (JNIEnv* env, jclass , jlong self, jint _nN)
{
    
    static const char method_name[] = "video::setNSamples_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        (*me)->setNSamples( (int)_nN );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  double cv::BackgroundSubtractorKNN::getDist2Threshold()
//

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getDist2Threshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getDist2Threshold_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getDist2Threshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        return (*me)->getDist2Threshold();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::BackgroundSubtractorKNN::setDist2Threshold(double _dist2Threshold)
//

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setDist2Threshold_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setDist2Threshold_10
  (JNIEnv* env, jclass , jlong self, jdouble _dist2Threshold)
{
    
    static const char method_name[] = "video::setDist2Threshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        (*me)->setDist2Threshold( (double)_dist2Threshold );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::BackgroundSubtractorKNN::getkNNSamples()
//

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getkNNSamples_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getkNNSamples_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getkNNSamples_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        return (*me)->getkNNSamples();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::BackgroundSubtractorKNN::setkNNSamples(int _nkNN)
//

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setkNNSamples_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setkNNSamples_10
  (JNIEnv* env, jclass , jlong self, jint _nkNN)
{
    
    static const char method_name[] = "video::setkNNSamples_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        (*me)->setkNNSamples( (int)_nkNN );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  bool cv::BackgroundSubtractorKNN::getDetectShadows()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getDetectShadows_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getDetectShadows_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getDetectShadows_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        return (*me)->getDetectShadows();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::BackgroundSubtractorKNN::setDetectShadows(bool detectShadows)
//

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setDetectShadows_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setDetectShadows_10
  (JNIEnv* env, jclass , jlong self, jboolean detectShadows)
{
    
    static const char method_name[] = "video::setDetectShadows_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        (*me)->setDetectShadows( (bool)detectShadows );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::BackgroundSubtractorKNN::getShadowValue()
//

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getShadowValue_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getShadowValue_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getShadowValue_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        return (*me)->getShadowValue();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::BackgroundSubtractorKNN::setShadowValue(int value)
//

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setShadowValue_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setShadowValue_10
  (JNIEnv* env, jclass , jlong self, jint value)
{
    
    static const char method_name[] = "video::setShadowValue_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        (*me)->setShadowValue( (int)value );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  double cv::BackgroundSubtractorKNN::getShadowThreshold()
//

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getShadowThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getShadowThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getShadowThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        return (*me)->getShadowThreshold();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::BackgroundSubtractorKNN::setShadowThreshold(double threshold)
//

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setShadowThreshold_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setShadowThreshold_10
  (JNIEnv* env, jclass , jlong self, jdouble threshold)
{
    
    static const char method_name[] = "video::setShadowThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        (*me)->setShadowThreshold( (double)threshold );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::BackgroundSubtractorKNN>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::BackgroundSubtractorKNN>*) self;
}


//
//  int cv::BackgroundSubtractorMOG2::getHistory()
//

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getHistory_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getHistory_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getHistory_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        return (*me)->getHistory();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::BackgroundSubtractorMOG2::setHistory(int history)
//

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setHistory_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setHistory_10
  (JNIEnv* env, jclass , jlong self, jint history)
{
    
    static const char method_name[] = "video::setHistory_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setHistory( (int)history );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::BackgroundSubtractorMOG2::getNMixtures()
//

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getNMixtures_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getNMixtures_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getNMixtures_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        return (*me)->getNMixtures();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::BackgroundSubtractorMOG2::setNMixtures(int nmixtures)
//

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setNMixtures_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setNMixtures_10
  (JNIEnv* env, jclass , jlong self, jint nmixtures)
{
    
    static const char method_name[] = "video::setNMixtures_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setNMixtures( (int)nmixtures );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  double cv::BackgroundSubtractorMOG2::getBackgroundRatio()
//

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getBackgroundRatio_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getBackgroundRatio_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getBackgroundRatio_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        return (*me)->getBackgroundRatio();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::BackgroundSubtractorMOG2::setBackgroundRatio(double ratio)
//

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setBackgroundRatio_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setBackgroundRatio_10
  (JNIEnv* env, jclass , jlong self, jdouble ratio)
{
    
    static const char method_name[] = "video::setBackgroundRatio_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setBackgroundRatio( (double)ratio );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  double cv::BackgroundSubtractorMOG2::getVarThreshold()
//

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getVarThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getVarThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getVarThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        return (*me)->getVarThreshold();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::BackgroundSubtractorMOG2::setVarThreshold(double varThreshold)
//

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setVarThreshold_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setVarThreshold_10
  (JNIEnv* env, jclass , jlong self, jdouble varThreshold)
{
    
    static const char method_name[] = "video::setVarThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setVarThreshold( (double)varThreshold );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  double cv::BackgroundSubtractorMOG2::getVarThresholdGen()
//

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getVarThresholdGen_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getVarThresholdGen_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getVarThresholdGen_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        return (*me)->getVarThresholdGen();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::BackgroundSubtractorMOG2::setVarThresholdGen(double varThresholdGen)
//

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setVarThresholdGen_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setVarThresholdGen_10
  (JNIEnv* env, jclass , jlong self, jdouble varThresholdGen)
{
    
    static const char method_name[] = "video::setVarThresholdGen_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setVarThresholdGen( (double)varThresholdGen );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  double cv::BackgroundSubtractorMOG2::getVarInit()
//

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getVarInit_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getVarInit_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getVarInit_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        return (*me)->getVarInit();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::BackgroundSubtractorMOG2::setVarInit(double varInit)
//

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setVarInit_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setVarInit_10
  (JNIEnv* env, jclass , jlong self, jdouble varInit)
{
    
    static const char method_name[] = "video::setVarInit_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setVarInit( (double)varInit );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  double cv::BackgroundSubtractorMOG2::getVarMin()
//

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getVarMin_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getVarMin_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getVarMin_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        return (*me)->getVarMin();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::BackgroundSubtractorMOG2::setVarMin(double varMin)
//

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setVarMin_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setVarMin_10
  (JNIEnv* env, jclass , jlong self, jdouble varMin)
{
    
    static const char method_name[] = "video::setVarMin_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setVarMin( (double)varMin );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  double cv::BackgroundSubtractorMOG2::getVarMax()
//

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getVarMax_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getVarMax_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getVarMax_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        return (*me)->getVarMax();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::BackgroundSubtractorMOG2::setVarMax(double varMax)
//

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setVarMax_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setVarMax_10
  (JNIEnv* env, jclass , jlong self, jdouble varMax)
{
    
    static const char method_name[] = "video::setVarMax_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setVarMax( (double)varMax );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  double cv::BackgroundSubtractorMOG2::getComplexityReductionThreshold()
//

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getComplexityReductionThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getComplexityReductionThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getComplexityReductionThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        return (*me)->getComplexityReductionThreshold();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::BackgroundSubtractorMOG2::setComplexityReductionThreshold(double ct)
//

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setComplexityReductionThreshold_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setComplexityReductionThreshold_10
  (JNIEnv* env, jclass , jlong self, jdouble ct)
{
    
    static const char method_name[] = "video::setComplexityReductionThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setComplexityReductionThreshold( (double)ct );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  bool cv::BackgroundSubtractorMOG2::getDetectShadows()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getDetectShadows_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getDetectShadows_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getDetectShadows_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        return (*me)->getDetectShadows();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::BackgroundSubtractorMOG2::setDetectShadows(bool detectShadows)
//

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setDetectShadows_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setDetectShadows_10
  (JNIEnv* env, jclass , jlong self, jboolean detectShadows)
{
    
    static const char method_name[] = "video::setDetectShadows_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setDetectShadows( (bool)detectShadows );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::BackgroundSubtractorMOG2::getShadowValue()
//

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getShadowValue_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getShadowValue_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getShadowValue_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        return (*me)->getShadowValue();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::BackgroundSubtractorMOG2::setShadowValue(int value)
//

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setShadowValue_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setShadowValue_10
  (JNIEnv* env, jclass , jlong self, jint value)
{
    
    static const char method_name[] = "video::setShadowValue_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setShadowValue( (int)value );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  double cv::BackgroundSubtractorMOG2::getShadowThreshold()
//

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getShadowThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getShadowThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getShadowThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        return (*me)->getShadowThreshold();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::BackgroundSubtractorMOG2::setShadowThreshold(double threshold)
//

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setShadowThreshold_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setShadowThreshold_10
  (JNIEnv* env, jclass , jlong self, jdouble threshold)
{
    
    static const char method_name[] = "video::setShadowThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setShadowThreshold( (double)threshold );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::BackgroundSubtractorMOG2::apply(Mat image, Mat& fgmask, double learningRate = -1)
//

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_apply_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_apply_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong fgmask_nativeObj, jdouble learningRate)
{
    
    static const char method_name[] = "video::apply_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& fgmask = *((Mat*)fgmask_nativeObj);
        (*me)->apply( image, fgmask, (double)learningRate );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_apply_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_apply_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong fgmask_nativeObj)
{
    
    static const char method_name[] = "video::apply_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& fgmask = *((Mat*)fgmask_nativeObj);
        (*me)->apply( image, fgmask );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::BackgroundSubtractorMOG2>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::BackgroundSubtractorMOG2>*) self;
}


//
//  int cv::DISOpticalFlow::getFinestScale()
//

JNIEXPORT jint JNICALL Java_org_opencv_video_DISOpticalFlow_getFinestScale_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_DISOpticalFlow_getFinestScale_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getFinestScale_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DISOpticalFlow>* me = (Ptr<cv::DISOpticalFlow>*) self; //TODO: check for NULL
        return (*me)->getFinestScale();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::DISOpticalFlow::setFinestScale(int val)
//

JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_setFinestScale_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_setFinestScale_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    
    static const char method_name[] = "video::setFinestScale_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DISOpticalFlow>* me = (Ptr<cv::DISOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setFinestScale( (int)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::DISOpticalFlow::getPatchSize()
//

JNIEXPORT jint JNICALL Java_org_opencv_video_DISOpticalFlow_getPatchSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_DISOpticalFlow_getPatchSize_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getPatchSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DISOpticalFlow>* me = (Ptr<cv::DISOpticalFlow>*) self; //TODO: check for NULL
        return (*me)->getPatchSize();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::DISOpticalFlow::setPatchSize(int val)
//

JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_setPatchSize_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_setPatchSize_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    
    static const char method_name[] = "video::setPatchSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DISOpticalFlow>* me = (Ptr<cv::DISOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setPatchSize( (int)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::DISOpticalFlow::getPatchStride()
//

JNIEXPORT jint JNICALL Java_org_opencv_video_DISOpticalFlow_getPatchStride_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_DISOpticalFlow_getPatchStride_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getPatchStride_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DISOpticalFlow>* me = (Ptr<cv::DISOpticalFlow>*) self; //TODO: check for NULL
        return (*me)->getPatchStride();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::DISOpticalFlow::setPatchStride(int val)
//

JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_setPatchStride_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_setPatchStride_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    
    static const char method_name[] = "video::setPatchStride_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DISOpticalFlow>* me = (Ptr<cv::DISOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setPatchStride( (int)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::DISOpticalFlow::getGradientDescentIterations()
//

JNIEXPORT jint JNICALL Java_org_opencv_video_DISOpticalFlow_getGradientDescentIterations_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_DISOpticalFlow_getGradientDescentIterations_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getGradientDescentIterations_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DISOpticalFlow>* me = (Ptr<cv::DISOpticalFlow>*) self; //TODO: check for NULL
        return (*me)->getGradientDescentIterations();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::DISOpticalFlow::setGradientDescentIterations(int val)
//

JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_setGradientDescentIterations_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_setGradientDescentIterations_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    
    static const char method_name[] = "video::setGradientDescentIterations_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DISOpticalFlow>* me = (Ptr<cv::DISOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setGradientDescentIterations( (int)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::DISOpticalFlow::getVariationalRefinementIterations()
//

JNIEXPORT jint JNICALL Java_org_opencv_video_DISOpticalFlow_getVariationalRefinementIterations_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_DISOpticalFlow_getVariationalRefinementIterations_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getVariationalRefinementIterations_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DISOpticalFlow>* me = (Ptr<cv::DISOpticalFlow>*) self; //TODO: check for NULL
        return (*me)->getVariationalRefinementIterations();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::DISOpticalFlow::setVariationalRefinementIterations(int val)
//

JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_setVariationalRefinementIterations_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_setVariationalRefinementIterations_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    
    static const char method_name[] = "video::setVariationalRefinementIterations_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DISOpticalFlow>* me = (Ptr<cv::DISOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setVariationalRefinementIterations( (int)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::DISOpticalFlow::getVariationalRefinementAlpha()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_video_DISOpticalFlow_getVariationalRefinementAlpha_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_video_DISOpticalFlow_getVariationalRefinementAlpha_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getVariationalRefinementAlpha_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DISOpticalFlow>* me = (Ptr<cv::DISOpticalFlow>*) self; //TODO: check for NULL
        return (*me)->getVariationalRefinementAlpha();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::DISOpticalFlow::setVariationalRefinementAlpha(float val)
//

JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_setVariationalRefinementAlpha_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_setVariationalRefinementAlpha_10
  (JNIEnv* env, jclass , jlong self, jfloat val)
{
    
    static const char method_name[] = "video::setVariationalRefinementAlpha_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DISOpticalFlow>* me = (Ptr<cv::DISOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setVariationalRefinementAlpha( (float)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::DISOpticalFlow::getVariationalRefinementDelta()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_video_DISOpticalFlow_getVariationalRefinementDelta_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_video_DISOpticalFlow_getVariationalRefinementDelta_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getVariationalRefinementDelta_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DISOpticalFlow>* me = (Ptr<cv::DISOpticalFlow>*) self; //TODO: check for NULL
        return (*me)->getVariationalRefinementDelta();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::DISOpticalFlow::setVariationalRefinementDelta(float val)
//

JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_setVariationalRefinementDelta_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_setVariationalRefinementDelta_10
  (JNIEnv* env, jclass , jlong self, jfloat val)
{
    
    static const char method_name[] = "video::setVariationalRefinementDelta_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DISOpticalFlow>* me = (Ptr<cv::DISOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setVariationalRefinementDelta( (float)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::DISOpticalFlow::getVariationalRefinementGamma()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_video_DISOpticalFlow_getVariationalRefinementGamma_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_video_DISOpticalFlow_getVariationalRefinementGamma_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getVariationalRefinementGamma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DISOpticalFlow>* me = (Ptr<cv::DISOpticalFlow>*) self; //TODO: check for NULL
        return (*me)->getVariationalRefinementGamma();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::DISOpticalFlow::setVariationalRefinementGamma(float val)
//

JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_setVariationalRefinementGamma_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_setVariationalRefinementGamma_10
  (JNIEnv* env, jclass , jlong self, jfloat val)
{
    
    static const char method_name[] = "video::setVariationalRefinementGamma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DISOpticalFlow>* me = (Ptr<cv::DISOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setVariationalRefinementGamma( (float)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::DISOpticalFlow::getVariationalRefinementEpsilon()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_video_DISOpticalFlow_getVariationalRefinementEpsilon_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_video_DISOpticalFlow_getVariationalRefinementEpsilon_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getVariationalRefinementEpsilon_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DISOpticalFlow>* me = (Ptr<cv::DISOpticalFlow>*) self; //TODO: check for NULL
        return (*me)->getVariationalRefinementEpsilon();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::DISOpticalFlow::setVariationalRefinementEpsilon(float val)
//

JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_setVariationalRefinementEpsilon_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_setVariationalRefinementEpsilon_10
  (JNIEnv* env, jclass , jlong self, jfloat val)
{
    
    static const char method_name[] = "video::setVariationalRefinementEpsilon_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DISOpticalFlow>* me = (Ptr<cv::DISOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setVariationalRefinementEpsilon( (float)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  bool cv::DISOpticalFlow::getUseMeanNormalization()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_video_DISOpticalFlow_getUseMeanNormalization_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_video_DISOpticalFlow_getUseMeanNormalization_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getUseMeanNormalization_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DISOpticalFlow>* me = (Ptr<cv::DISOpticalFlow>*) self; //TODO: check for NULL
        return (*me)->getUseMeanNormalization();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::DISOpticalFlow::setUseMeanNormalization(bool val)
//

JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_setUseMeanNormalization_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_setUseMeanNormalization_10
  (JNIEnv* env, jclass , jlong self, jboolean val)
{
    
    static const char method_name[] = "video::setUseMeanNormalization_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DISOpticalFlow>* me = (Ptr<cv::DISOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setUseMeanNormalization( (bool)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  bool cv::DISOpticalFlow::getUseSpatialPropagation()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_video_DISOpticalFlow_getUseSpatialPropagation_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_video_DISOpticalFlow_getUseSpatialPropagation_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getUseSpatialPropagation_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DISOpticalFlow>* me = (Ptr<cv::DISOpticalFlow>*) self; //TODO: check for NULL
        return (*me)->getUseSpatialPropagation();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::DISOpticalFlow::setUseSpatialPropagation(bool val)
//

JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_setUseSpatialPropagation_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_setUseSpatialPropagation_10
  (JNIEnv* env, jclass , jlong self, jboolean val)
{
    
    static const char method_name[] = "video::setUseSpatialPropagation_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DISOpticalFlow>* me = (Ptr<cv::DISOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setUseSpatialPropagation( (bool)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// static Ptr_DISOpticalFlow cv::DISOpticalFlow::create(int preset = DISOpticalFlow::PRESET_FAST)
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_DISOpticalFlow_create_10 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_video_DISOpticalFlow_create_10
  (JNIEnv* env, jclass , jint preset)
{
    
    static const char method_name[] = "video::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::DISOpticalFlow> Ptr_DISOpticalFlow;
        Ptr_DISOpticalFlow _retval_ = cv::DISOpticalFlow::create( (int)preset );
        return (jlong)(new Ptr_DISOpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_DISOpticalFlow_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_DISOpticalFlow_create_11
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "video::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::DISOpticalFlow> Ptr_DISOpticalFlow;
        Ptr_DISOpticalFlow _retval_ = cv::DISOpticalFlow::create();
        return (jlong)(new Ptr_DISOpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::DISOpticalFlow>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_DISOpticalFlow_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::DISOpticalFlow>*) self;
}


//
//  void cv::DenseOpticalFlow::calc(Mat I0, Mat I1, Mat& flow)
//

JNIEXPORT void JNICALL Java_org_opencv_video_DenseOpticalFlow_calc_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_DenseOpticalFlow_calc_10
  (JNIEnv* env, jclass , jlong self, jlong I0_nativeObj, jlong I1_nativeObj, jlong flow_nativeObj)
{
    
    static const char method_name[] = "video::calc_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DenseOpticalFlow>* me = (Ptr<cv::DenseOpticalFlow>*) self; //TODO: check for NULL
        Mat& I0 = *((Mat*)I0_nativeObj);
        Mat& I1 = *((Mat*)I1_nativeObj);
        Mat& flow = *((Mat*)flow_nativeObj);
        (*me)->calc( I0, I1, flow );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::DenseOpticalFlow::collectGarbage()
//

JNIEXPORT void JNICALL Java_org_opencv_video_DenseOpticalFlow_collectGarbage_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_DenseOpticalFlow_collectGarbage_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::collectGarbage_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DenseOpticalFlow>* me = (Ptr<cv::DenseOpticalFlow>*) self; //TODO: check for NULL
        (*me)->collectGarbage();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::DenseOpticalFlow>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_DenseOpticalFlow_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_DenseOpticalFlow_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::DenseOpticalFlow>*) self;
}


//
//  int cv::FarnebackOpticalFlow::getNumLevels()
//

JNIEXPORT jint JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getNumLevels_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getNumLevels_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getNumLevels_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        return (*me)->getNumLevels();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::FarnebackOpticalFlow::setNumLevels(int numLevels)
//

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setNumLevels_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setNumLevels_10
  (JNIEnv* env, jclass , jlong self, jint numLevels)
{
    
    static const char method_name[] = "video::setNumLevels_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setNumLevels( (int)numLevels );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  double cv::FarnebackOpticalFlow::getPyrScale()
//

JNIEXPORT jdouble JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getPyrScale_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getPyrScale_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getPyrScale_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        return (*me)->getPyrScale();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::FarnebackOpticalFlow::setPyrScale(double pyrScale)
//

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setPyrScale_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setPyrScale_10
  (JNIEnv* env, jclass , jlong self, jdouble pyrScale)
{
    
    static const char method_name[] = "video::setPyrScale_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setPyrScale( (double)pyrScale );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  bool cv::FarnebackOpticalFlow::getFastPyramids()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getFastPyramids_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getFastPyramids_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getFastPyramids_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        return (*me)->getFastPyramids();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::FarnebackOpticalFlow::setFastPyramids(bool fastPyramids)
//

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setFastPyramids_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setFastPyramids_10
  (JNIEnv* env, jclass , jlong self, jboolean fastPyramids)
{
    
    static const char method_name[] = "video::setFastPyramids_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setFastPyramids( (bool)fastPyramids );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::FarnebackOpticalFlow::getWinSize()
//

JNIEXPORT jint JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getWinSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getWinSize_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getWinSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        return (*me)->getWinSize();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::FarnebackOpticalFlow::setWinSize(int winSize)
//

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setWinSize_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setWinSize_10
  (JNIEnv* env, jclass , jlong self, jint winSize)
{
    
    static const char method_name[] = "video::setWinSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setWinSize( (int)winSize );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::FarnebackOpticalFlow::getNumIters()
//

JNIEXPORT jint JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getNumIters_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getNumIters_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getNumIters_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        return (*me)->getNumIters();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::FarnebackOpticalFlow::setNumIters(int numIters)
//

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setNumIters_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setNumIters_10
  (JNIEnv* env, jclass , jlong self, jint numIters)
{
    
    static const char method_name[] = "video::setNumIters_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setNumIters( (int)numIters );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::FarnebackOpticalFlow::getPolyN()
//

JNIEXPORT jint JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getPolyN_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getPolyN_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getPolyN_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        return (*me)->getPolyN();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::FarnebackOpticalFlow::setPolyN(int polyN)
//

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setPolyN_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setPolyN_10
  (JNIEnv* env, jclass , jlong self, jint polyN)
{
    
    static const char method_name[] = "video::setPolyN_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setPolyN( (int)polyN );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  double cv::FarnebackOpticalFlow::getPolySigma()
//

JNIEXPORT jdouble JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getPolySigma_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getPolySigma_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getPolySigma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        return (*me)->getPolySigma();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::FarnebackOpticalFlow::setPolySigma(double polySigma)
//

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setPolySigma_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setPolySigma_10
  (JNIEnv* env, jclass , jlong self, jdouble polySigma)
{
    
    static const char method_name[] = "video::setPolySigma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setPolySigma( (double)polySigma );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::FarnebackOpticalFlow::getFlags()
//

JNIEXPORT jint JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getFlags_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getFlags_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getFlags_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        return (*me)->getFlags();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::FarnebackOpticalFlow::setFlags(int flags)
//

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setFlags_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setFlags_10
  (JNIEnv* env, jclass , jlong self, jint flags)
{
    
    static const char method_name[] = "video::setFlags_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setFlags( (int)flags );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// static Ptr_FarnebackOpticalFlow cv::FarnebackOpticalFlow::create(int numLevels = 5, double pyrScale = 0.5, bool fastPyramids = false, int winSize = 13, int numIters = 10, int polyN = 5, double polySigma = 1.1, int flags = 0)
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_FarnebackOpticalFlow_create_10 (JNIEnv*, jclass, jint, jdouble, jboolean, jint, jint, jint, jdouble, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_video_FarnebackOpticalFlow_create_10
  (JNIEnv* env, jclass , jint numLevels, jdouble pyrScale, jboolean fastPyramids, jint winSize, jint numIters, jint polyN, jdouble polySigma, jint flags)
{
    
    static const char method_name[] = "video::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::FarnebackOpticalFlow> Ptr_FarnebackOpticalFlow;
        Ptr_FarnebackOpticalFlow _retval_ = cv::FarnebackOpticalFlow::create( (int)numLevels, (double)pyrScale, (bool)fastPyramids, (int)winSize, (int)numIters, (int)polyN, (double)polySigma, (int)flags );
        return (jlong)(new Ptr_FarnebackOpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_FarnebackOpticalFlow_create_11 (JNIEnv*, jclass, jint, jdouble, jboolean, jint, jint, jint, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_video_FarnebackOpticalFlow_create_11
  (JNIEnv* env, jclass , jint numLevels, jdouble pyrScale, jboolean fastPyramids, jint winSize, jint numIters, jint polyN, jdouble polySigma)
{
    
    static const char method_name[] = "video::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::FarnebackOpticalFlow> Ptr_FarnebackOpticalFlow;
        Ptr_FarnebackOpticalFlow _retval_ = cv::FarnebackOpticalFlow::create( (int)numLevels, (double)pyrScale, (bool)fastPyramids, (int)winSize, (int)numIters, (int)polyN, (double)polySigma );
        return (jlong)(new Ptr_FarnebackOpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_FarnebackOpticalFlow_create_12 (JNIEnv*, jclass, jint, jdouble, jboolean, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_video_FarnebackOpticalFlow_create_12
  (JNIEnv* env, jclass , jint numLevels, jdouble pyrScale, jboolean fastPyramids, jint winSize, jint numIters, jint polyN)
{
    
    static const char method_name[] = "video::create_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::FarnebackOpticalFlow> Ptr_FarnebackOpticalFlow;
        Ptr_FarnebackOpticalFlow _retval_ = cv::FarnebackOpticalFlow::create( (int)numLevels, (double)pyrScale, (bool)fastPyramids, (int)winSize, (int)numIters, (int)polyN );
        return (jlong)(new Ptr_FarnebackOpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_FarnebackOpticalFlow_create_13 (JNIEnv*, jclass, jint, jdouble, jboolean, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_video_FarnebackOpticalFlow_create_13
  (JNIEnv* env, jclass , jint numLevels, jdouble pyrScale, jboolean fastPyramids, jint winSize, jint numIters)
{
    
    static const char method_name[] = "video::create_13()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::FarnebackOpticalFlow> Ptr_FarnebackOpticalFlow;
        Ptr_FarnebackOpticalFlow _retval_ = cv::FarnebackOpticalFlow::create( (int)numLevels, (double)pyrScale, (bool)fastPyramids, (int)winSize, (int)numIters );
        return (jlong)(new Ptr_FarnebackOpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_FarnebackOpticalFlow_create_14 (JNIEnv*, jclass, jint, jdouble, jboolean, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_video_FarnebackOpticalFlow_create_14
  (JNIEnv* env, jclass , jint numLevels, jdouble pyrScale, jboolean fastPyramids, jint winSize)
{
    
    static const char method_name[] = "video::create_14()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::FarnebackOpticalFlow> Ptr_FarnebackOpticalFlow;
        Ptr_FarnebackOpticalFlow _retval_ = cv::FarnebackOpticalFlow::create( (int)numLevels, (double)pyrScale, (bool)fastPyramids, (int)winSize );
        return (jlong)(new Ptr_FarnebackOpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_FarnebackOpticalFlow_create_15 (JNIEnv*, jclass, jint, jdouble, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_video_FarnebackOpticalFlow_create_15
  (JNIEnv* env, jclass , jint numLevels, jdouble pyrScale, jboolean fastPyramids)
{
    
    static const char method_name[] = "video::create_15()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::FarnebackOpticalFlow> Ptr_FarnebackOpticalFlow;
        Ptr_FarnebackOpticalFlow _retval_ = cv::FarnebackOpticalFlow::create( (int)numLevels, (double)pyrScale, (bool)fastPyramids );
        return (jlong)(new Ptr_FarnebackOpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_FarnebackOpticalFlow_create_16 (JNIEnv*, jclass, jint, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_video_FarnebackOpticalFlow_create_16
  (JNIEnv* env, jclass , jint numLevels, jdouble pyrScale)
{
    
    static const char method_name[] = "video::create_16()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::FarnebackOpticalFlow> Ptr_FarnebackOpticalFlow;
        Ptr_FarnebackOpticalFlow _retval_ = cv::FarnebackOpticalFlow::create( (int)numLevels, (double)pyrScale );
        return (jlong)(new Ptr_FarnebackOpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_FarnebackOpticalFlow_create_17 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_video_FarnebackOpticalFlow_create_17
  (JNIEnv* env, jclass , jint numLevels)
{
    
    static const char method_name[] = "video::create_17()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::FarnebackOpticalFlow> Ptr_FarnebackOpticalFlow;
        Ptr_FarnebackOpticalFlow _retval_ = cv::FarnebackOpticalFlow::create( (int)numLevels );
        return (jlong)(new Ptr_FarnebackOpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_FarnebackOpticalFlow_create_18 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_FarnebackOpticalFlow_create_18
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "video::create_18()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::FarnebackOpticalFlow> Ptr_FarnebackOpticalFlow;
        Ptr_FarnebackOpticalFlow _retval_ = cv::FarnebackOpticalFlow::create();
        return (jlong)(new Ptr_FarnebackOpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::FarnebackOpticalFlow>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::FarnebackOpticalFlow>*) self;
}


//
//   cv::KalmanFilter::KalmanFilter()
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_KalmanFilter_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_KalmanFilter_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "video::KalmanFilter_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter> _retval_ = makePtr<cv::KalmanFilter>();
        return (jlong)(new Ptr<cv::KalmanFilter>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::KalmanFilter::KalmanFilter(int dynamParams, int measureParams, int controlParams = 0, int type = CV_32F)
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_KalmanFilter_11 (JNIEnv*, jclass, jint, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_KalmanFilter_11
  (JNIEnv* env, jclass , jint dynamParams, jint measureParams, jint controlParams, jint type)
{
    
    static const char method_name[] = "video::KalmanFilter_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter> _retval_ = makePtr<cv::KalmanFilter>( (int)dynamParams, (int)measureParams, (int)controlParams, (int)type );
        return (jlong)(new Ptr<cv::KalmanFilter>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_KalmanFilter_12 (JNIEnv*, jclass, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_KalmanFilter_12
  (JNIEnv* env, jclass , jint dynamParams, jint measureParams, jint controlParams)
{
    
    static const char method_name[] = "video::KalmanFilter_12()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter> _retval_ = makePtr<cv::KalmanFilter>( (int)dynamParams, (int)measureParams, (int)controlParams );
        return (jlong)(new Ptr<cv::KalmanFilter>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_KalmanFilter_13 (JNIEnv*, jclass, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_KalmanFilter_13
  (JNIEnv* env, jclass , jint dynamParams, jint measureParams)
{
    
    static const char method_name[] = "video::KalmanFilter_13()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter> _retval_ = makePtr<cv::KalmanFilter>( (int)dynamParams, (int)measureParams );
        return (jlong)(new Ptr<cv::KalmanFilter>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat cv::KalmanFilter::predict(Mat control = Mat())
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_predict_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_predict_10
  (JNIEnv* env, jclass , jlong self, jlong control_nativeObj)
{
    
    static const char method_name[] = "video::predict_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter>* me = (Ptr<cv::KalmanFilter>*) self; //TODO: check for NULL
        Mat& control = *((Mat*)control_nativeObj);
        cv::Mat _retval_ = (*me)->predict( control );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_predict_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_predict_11
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::predict_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter>* me = (Ptr<cv::KalmanFilter>*) self; //TODO: check for NULL
        cv::Mat _retval_ = (*me)->predict();
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat cv::KalmanFilter::correct(Mat measurement)
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_correct_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_correct_10
  (JNIEnv* env, jclass , jlong self, jlong measurement_nativeObj)
{
    
    static const char method_name[] = "video::correct_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter>* me = (Ptr<cv::KalmanFilter>*) self; //TODO: check for NULL
        Mat& measurement = *((Mat*)measurement_nativeObj);
        cv::Mat _retval_ = (*me)->correct( measurement );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// Mat KalmanFilter::statePre
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1statePre_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1statePre_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1statePre_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter>* me = (Ptr<cv::KalmanFilter>*) self; //TODO: check for NULL
        cv::Mat _retval_ = (*me)->statePre;//();
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void KalmanFilter::statePre
//

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1statePre_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1statePre_10
  (JNIEnv* env, jclass , jlong self, jlong statePre_nativeObj)
{
    
    static const char method_name[] = "video::set_1statePre_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter>* me = (Ptr<cv::KalmanFilter>*) self; //TODO: check for NULL
        Mat& statePre = *((Mat*)statePre_nativeObj);
        (*me)->statePre = ( statePre );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// Mat KalmanFilter::statePost
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1statePost_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1statePost_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1statePost_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter>* me = (Ptr<cv::KalmanFilter>*) self; //TODO: check for NULL
        cv::Mat _retval_ = (*me)->statePost;//();
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void KalmanFilter::statePost
//

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1statePost_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1statePost_10
  (JNIEnv* env, jclass , jlong self, jlong statePost_nativeObj)
{
    
    static const char method_name[] = "video::set_1statePost_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter>* me = (Ptr<cv::KalmanFilter>*) self; //TODO: check for NULL
        Mat& statePost = *((Mat*)statePost_nativeObj);
        (*me)->statePost = ( statePost );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// Mat KalmanFilter::transitionMatrix
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1transitionMatrix_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1transitionMatrix_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1transitionMatrix_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter>* me = (Ptr<cv::KalmanFilter>*) self; //TODO: check for NULL
        cv::Mat _retval_ = (*me)->transitionMatrix;//();
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void KalmanFilter::transitionMatrix
//

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1transitionMatrix_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1transitionMatrix_10
  (JNIEnv* env, jclass , jlong self, jlong transitionMatrix_nativeObj)
{
    
    static const char method_name[] = "video::set_1transitionMatrix_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter>* me = (Ptr<cv::KalmanFilter>*) self; //TODO: check for NULL
        Mat& transitionMatrix = *((Mat*)transitionMatrix_nativeObj);
        (*me)->transitionMatrix = ( transitionMatrix );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// Mat KalmanFilter::controlMatrix
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1controlMatrix_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1controlMatrix_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1controlMatrix_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter>* me = (Ptr<cv::KalmanFilter>*) self; //TODO: check for NULL
        cv::Mat _retval_ = (*me)->controlMatrix;//();
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void KalmanFilter::controlMatrix
//

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1controlMatrix_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1controlMatrix_10
  (JNIEnv* env, jclass , jlong self, jlong controlMatrix_nativeObj)
{
    
    static const char method_name[] = "video::set_1controlMatrix_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter>* me = (Ptr<cv::KalmanFilter>*) self; //TODO: check for NULL
        Mat& controlMatrix = *((Mat*)controlMatrix_nativeObj);
        (*me)->controlMatrix = ( controlMatrix );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// Mat KalmanFilter::measurementMatrix
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1measurementMatrix_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1measurementMatrix_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1measurementMatrix_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter>* me = (Ptr<cv::KalmanFilter>*) self; //TODO: check for NULL
        cv::Mat _retval_ = (*me)->measurementMatrix;//();
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void KalmanFilter::measurementMatrix
//

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1measurementMatrix_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1measurementMatrix_10
  (JNIEnv* env, jclass , jlong self, jlong measurementMatrix_nativeObj)
{
    
    static const char method_name[] = "video::set_1measurementMatrix_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter>* me = (Ptr<cv::KalmanFilter>*) self; //TODO: check for NULL
        Mat& measurementMatrix = *((Mat*)measurementMatrix_nativeObj);
        (*me)->measurementMatrix = ( measurementMatrix );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// Mat KalmanFilter::processNoiseCov
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1processNoiseCov_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1processNoiseCov_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1processNoiseCov_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter>* me = (Ptr<cv::KalmanFilter>*) self; //TODO: check for NULL
        cv::Mat _retval_ = (*me)->processNoiseCov;//();
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void KalmanFilter::processNoiseCov
//

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1processNoiseCov_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1processNoiseCov_10
  (JNIEnv* env, jclass , jlong self, jlong processNoiseCov_nativeObj)
{
    
    static const char method_name[] = "video::set_1processNoiseCov_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter>* me = (Ptr<cv::KalmanFilter>*) self; //TODO: check for NULL
        Mat& processNoiseCov = *((Mat*)processNoiseCov_nativeObj);
        (*me)->processNoiseCov = ( processNoiseCov );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// Mat KalmanFilter::measurementNoiseCov
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1measurementNoiseCov_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1measurementNoiseCov_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1measurementNoiseCov_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter>* me = (Ptr<cv::KalmanFilter>*) self; //TODO: check for NULL
        cv::Mat _retval_ = (*me)->measurementNoiseCov;//();
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void KalmanFilter::measurementNoiseCov
//

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1measurementNoiseCov_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1measurementNoiseCov_10
  (JNIEnv* env, jclass , jlong self, jlong measurementNoiseCov_nativeObj)
{
    
    static const char method_name[] = "video::set_1measurementNoiseCov_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter>* me = (Ptr<cv::KalmanFilter>*) self; //TODO: check for NULL
        Mat& measurementNoiseCov = *((Mat*)measurementNoiseCov_nativeObj);
        (*me)->measurementNoiseCov = ( measurementNoiseCov );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// Mat KalmanFilter::errorCovPre
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1errorCovPre_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1errorCovPre_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1errorCovPre_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter>* me = (Ptr<cv::KalmanFilter>*) self; //TODO: check for NULL
        cv::Mat _retval_ = (*me)->errorCovPre;//();
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void KalmanFilter::errorCovPre
//

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1errorCovPre_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1errorCovPre_10
  (JNIEnv* env, jclass , jlong self, jlong errorCovPre_nativeObj)
{
    
    static const char method_name[] = "video::set_1errorCovPre_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter>* me = (Ptr<cv::KalmanFilter>*) self; //TODO: check for NULL
        Mat& errorCovPre = *((Mat*)errorCovPre_nativeObj);
        (*me)->errorCovPre = ( errorCovPre );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// Mat KalmanFilter::gain
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1gain_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1gain_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1gain_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter>* me = (Ptr<cv::KalmanFilter>*) self; //TODO: check for NULL
        cv::Mat _retval_ = (*me)->gain;//();
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void KalmanFilter::gain
//

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1gain_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1gain_10
  (JNIEnv* env, jclass , jlong self, jlong gain_nativeObj)
{
    
    static const char method_name[] = "video::set_1gain_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter>* me = (Ptr<cv::KalmanFilter>*) self; //TODO: check for NULL
        Mat& gain = *((Mat*)gain_nativeObj);
        (*me)->gain = ( gain );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// Mat KalmanFilter::errorCovPost
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1errorCovPost_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1errorCovPost_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1errorCovPost_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter>* me = (Ptr<cv::KalmanFilter>*) self; //TODO: check for NULL
        cv::Mat _retval_ = (*me)->errorCovPost;//();
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void KalmanFilter::errorCovPost
//

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1errorCovPost_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1errorCovPost_10
  (JNIEnv* env, jclass , jlong self, jlong errorCovPost_nativeObj)
{
    
    static const char method_name[] = "video::set_1errorCovPost_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::KalmanFilter>* me = (Ptr<cv::KalmanFilter>*) self; //TODO: check for NULL
        Mat& errorCovPost = *((Mat*)errorCovPost_nativeObj);
        (*me)->errorCovPost = ( errorCovPost );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::KalmanFilter>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::KalmanFilter>*) self;
}


//
//  void cv::SparseOpticalFlow::calc(Mat prevImg, Mat nextImg, Mat prevPts, Mat& nextPts, Mat& status, Mat& err = cv::Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_video_SparseOpticalFlow_calc_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_SparseOpticalFlow_calc_10
  (JNIEnv* env, jclass , jlong self, jlong prevImg_nativeObj, jlong nextImg_nativeObj, jlong prevPts_nativeObj, jlong nextPts_nativeObj, jlong status_nativeObj, jlong err_nativeObj)
{
    
    static const char method_name[] = "video::calc_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparseOpticalFlow>* me = (Ptr<cv::SparseOpticalFlow>*) self; //TODO: check for NULL
        Mat& prevImg = *((Mat*)prevImg_nativeObj);
        Mat& nextImg = *((Mat*)nextImg_nativeObj);
        Mat& prevPts = *((Mat*)prevPts_nativeObj);
        Mat& nextPts = *((Mat*)nextPts_nativeObj);
        Mat& status = *((Mat*)status_nativeObj);
        Mat& err = *((Mat*)err_nativeObj);
        (*me)->calc( prevImg, nextImg, prevPts, nextPts, status, err );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_video_SparseOpticalFlow_calc_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_SparseOpticalFlow_calc_11
  (JNIEnv* env, jclass , jlong self, jlong prevImg_nativeObj, jlong nextImg_nativeObj, jlong prevPts_nativeObj, jlong nextPts_nativeObj, jlong status_nativeObj)
{
    
    static const char method_name[] = "video::calc_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparseOpticalFlow>* me = (Ptr<cv::SparseOpticalFlow>*) self; //TODO: check for NULL
        Mat& prevImg = *((Mat*)prevImg_nativeObj);
        Mat& nextImg = *((Mat*)nextImg_nativeObj);
        Mat& prevPts = *((Mat*)prevPts_nativeObj);
        Mat& nextPts = *((Mat*)nextPts_nativeObj);
        Mat& status = *((Mat*)status_nativeObj);
        (*me)->calc( prevImg, nextImg, prevPts, nextPts, status );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::SparseOpticalFlow>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_SparseOpticalFlow_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_SparseOpticalFlow_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::SparseOpticalFlow>*) self;
}


//
//  Size cv::SparsePyrLKOpticalFlow::getWinSize()
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_getWinSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_getWinSize_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getWinSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparsePyrLKOpticalFlow>* me = (Ptr<cv::SparsePyrLKOpticalFlow>*) self; //TODO: check for NULL
        Size _retval_ = (*me)->getWinSize();
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {(jdouble)_retval_.width, (jdouble)_retval_.height}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::SparsePyrLKOpticalFlow::setWinSize(Size winSize)
//

JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_setWinSize_10 (JNIEnv*, jclass, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_setWinSize_10
  (JNIEnv* env, jclass , jlong self, jdouble winSize_width, jdouble winSize_height)
{
    
    static const char method_name[] = "video::setWinSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparsePyrLKOpticalFlow>* me = (Ptr<cv::SparsePyrLKOpticalFlow>*) self; //TODO: check for NULL
        Size winSize((int)winSize_width, (int)winSize_height);
        (*me)->setWinSize( winSize );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::SparsePyrLKOpticalFlow::getMaxLevel()
//

JNIEXPORT jint JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_getMaxLevel_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_getMaxLevel_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getMaxLevel_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparsePyrLKOpticalFlow>* me = (Ptr<cv::SparsePyrLKOpticalFlow>*) self; //TODO: check for NULL
        return (*me)->getMaxLevel();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::SparsePyrLKOpticalFlow::setMaxLevel(int maxLevel)
//

JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_setMaxLevel_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_setMaxLevel_10
  (JNIEnv* env, jclass , jlong self, jint maxLevel)
{
    
    static const char method_name[] = "video::setMaxLevel_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparsePyrLKOpticalFlow>* me = (Ptr<cv::SparsePyrLKOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setMaxLevel( (int)maxLevel );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  TermCriteria cv::SparsePyrLKOpticalFlow::getTermCriteria()
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_getTermCriteria_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_getTermCriteria_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getTermCriteria_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparsePyrLKOpticalFlow>* me = (Ptr<cv::SparsePyrLKOpticalFlow>*) self; //TODO: check for NULL
        TermCriteria _retval_ = (*me)->getTermCriteria();
        jdoubleArray _da_retval_ = env->NewDoubleArray(3);  jdouble _tmp_retval_[3] = {(jdouble)_retval_.type, (jdouble)_retval_.maxCount, (jdouble)_retval_.epsilon}; env->SetDoubleArrayRegion(_da_retval_, 0, 3, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::SparsePyrLKOpticalFlow::setTermCriteria(TermCriteria crit)
//

JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_setTermCriteria_10 (JNIEnv*, jclass, jlong, jint, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_setTermCriteria_10
  (JNIEnv* env, jclass , jlong self, jint crit_type, jint crit_maxCount, jdouble crit_epsilon)
{
    
    static const char method_name[] = "video::setTermCriteria_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparsePyrLKOpticalFlow>* me = (Ptr<cv::SparsePyrLKOpticalFlow>*) self; //TODO: check for NULL
        TermCriteria crit(crit_type, crit_maxCount, crit_epsilon);
        (*me)->setTermCriteria( crit );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::SparsePyrLKOpticalFlow::getFlags()
//

JNIEXPORT jint JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_getFlags_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_getFlags_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getFlags_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparsePyrLKOpticalFlow>* me = (Ptr<cv::SparsePyrLKOpticalFlow>*) self; //TODO: check for NULL
        return (*me)->getFlags();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::SparsePyrLKOpticalFlow::setFlags(int flags)
//

JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_setFlags_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_setFlags_10
  (JNIEnv* env, jclass , jlong self, jint flags)
{
    
    static const char method_name[] = "video::setFlags_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparsePyrLKOpticalFlow>* me = (Ptr<cv::SparsePyrLKOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setFlags( (int)flags );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  double cv::SparsePyrLKOpticalFlow::getMinEigThreshold()
//

JNIEXPORT jdouble JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_getMinEigThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_getMinEigThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getMinEigThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparsePyrLKOpticalFlow>* me = (Ptr<cv::SparsePyrLKOpticalFlow>*) self; //TODO: check for NULL
        return (*me)->getMinEigThreshold();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::SparsePyrLKOpticalFlow::setMinEigThreshold(double minEigThreshold)
//

JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_setMinEigThreshold_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_setMinEigThreshold_10
  (JNIEnv* env, jclass , jlong self, jdouble minEigThreshold)
{
    
    static const char method_name[] = "video::setMinEigThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparsePyrLKOpticalFlow>* me = (Ptr<cv::SparsePyrLKOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setMinEigThreshold( (double)minEigThreshold );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// static Ptr_SparsePyrLKOpticalFlow cv::SparsePyrLKOpticalFlow::create(Size winSize = Size(21, 21), int maxLevel = 3, TermCriteria crit = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 0.01), int flags = 0, double minEigThreshold = 1e-4)
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_create_10 (JNIEnv*, jclass, jdouble, jdouble, jint, jint, jint, jdouble, jint, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_create_10
  (JNIEnv* env, jclass , jdouble winSize_width, jdouble winSize_height, jint maxLevel, jint crit_type, jint crit_maxCount, jdouble crit_epsilon, jint flags, jdouble minEigThreshold)
{
    
    static const char method_name[] = "video::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::SparsePyrLKOpticalFlow> Ptr_SparsePyrLKOpticalFlow;
        Size winSize((int)winSize_width, (int)winSize_height);
        TermCriteria crit(crit_type, crit_maxCount, crit_epsilon);
        Ptr_SparsePyrLKOpticalFlow _retval_ = cv::SparsePyrLKOpticalFlow::create( winSize, (int)maxLevel, crit, (int)flags, (double)minEigThreshold );
        return (jlong)(new Ptr_SparsePyrLKOpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_create_11 (JNIEnv*, jclass, jdouble, jdouble, jint, jint, jint, jdouble, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_create_11
  (JNIEnv* env, jclass , jdouble winSize_width, jdouble winSize_height, jint maxLevel, jint crit_type, jint crit_maxCount, jdouble crit_epsilon, jint flags)
{
    
    static const char method_name[] = "video::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::SparsePyrLKOpticalFlow> Ptr_SparsePyrLKOpticalFlow;
        Size winSize((int)winSize_width, (int)winSize_height);
        TermCriteria crit(crit_type, crit_maxCount, crit_epsilon);
        Ptr_SparsePyrLKOpticalFlow _retval_ = cv::SparsePyrLKOpticalFlow::create( winSize, (int)maxLevel, crit, (int)flags );
        return (jlong)(new Ptr_SparsePyrLKOpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_create_12 (JNIEnv*, jclass, jdouble, jdouble, jint, jint, jint, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_create_12
  (JNIEnv* env, jclass , jdouble winSize_width, jdouble winSize_height, jint maxLevel, jint crit_type, jint crit_maxCount, jdouble crit_epsilon)
{
    
    static const char method_name[] = "video::create_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::SparsePyrLKOpticalFlow> Ptr_SparsePyrLKOpticalFlow;
        Size winSize((int)winSize_width, (int)winSize_height);
        TermCriteria crit(crit_type, crit_maxCount, crit_epsilon);
        Ptr_SparsePyrLKOpticalFlow _retval_ = cv::SparsePyrLKOpticalFlow::create( winSize, (int)maxLevel, crit );
        return (jlong)(new Ptr_SparsePyrLKOpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_create_13 (JNIEnv*, jclass, jdouble, jdouble, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_create_13
  (JNIEnv* env, jclass , jdouble winSize_width, jdouble winSize_height, jint maxLevel)
{
    
    static const char method_name[] = "video::create_13()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::SparsePyrLKOpticalFlow> Ptr_SparsePyrLKOpticalFlow;
        Size winSize((int)winSize_width, (int)winSize_height);
        Ptr_SparsePyrLKOpticalFlow _retval_ = cv::SparsePyrLKOpticalFlow::create( winSize, (int)maxLevel );
        return (jlong)(new Ptr_SparsePyrLKOpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_create_14 (JNIEnv*, jclass, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_create_14
  (JNIEnv* env, jclass , jdouble winSize_width, jdouble winSize_height)
{
    
    static const char method_name[] = "video::create_14()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::SparsePyrLKOpticalFlow> Ptr_SparsePyrLKOpticalFlow;
        Size winSize((int)winSize_width, (int)winSize_height);
        Ptr_SparsePyrLKOpticalFlow _retval_ = cv::SparsePyrLKOpticalFlow::create( winSize );
        return (jlong)(new Ptr_SparsePyrLKOpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_create_15 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_create_15
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "video::create_15()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::SparsePyrLKOpticalFlow> Ptr_SparsePyrLKOpticalFlow;
        Ptr_SparsePyrLKOpticalFlow _retval_ = cv::SparsePyrLKOpticalFlow::create();
        return (jlong)(new Ptr_SparsePyrLKOpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::SparsePyrLKOpticalFlow>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::SparsePyrLKOpticalFlow>*) self;
}


//
//  void cv::Tracker::init(Mat image, Rect boundingBox)
//

JNIEXPORT void JNICALL Java_org_opencv_video_Tracker_init_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_Tracker_init_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jint boundingBox_x, jint boundingBox_y, jint boundingBox_width, jint boundingBox_height)
{
    
    static const char method_name[] = "video::init_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::Tracker>* me = (Ptr<cv::Tracker>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Rect boundingBox(boundingBox_x, boundingBox_y, boundingBox_width, boundingBox_height);
        (*me)->init( image, boundingBox );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  bool cv::Tracker::update(Mat image, Rect& boundingBox)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_video_Tracker_update_10 (JNIEnv*, jclass, jlong, jlong, jdoubleArray);

JNIEXPORT jboolean JNICALL Java_org_opencv_video_Tracker_update_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jdoubleArray boundingBox_out)
{
    
    static const char method_name[] = "video::update_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::Tracker>* me = (Ptr<cv::Tracker>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Rect boundingBox;
        bool _retval_ = (*me)->update( image, boundingBox );
        jdouble tmp_boundingBox[4] = {(jdouble)boundingBox.x, (jdouble)boundingBox.y, (jdouble)boundingBox.width, (jdouble)boundingBox.height}; env->SetDoubleArrayRegion(boundingBox_out, 0, 4, tmp_boundingBox);
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::Tracker>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_Tracker_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_Tracker_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::Tracker>*) self;
}


//
// static Ptr_TrackerDaSiamRPN cv::TrackerDaSiamRPN::create(TrackerDaSiamRPN_Params parameters = TrackerDaSiamRPN::Params())
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerDaSiamRPN_create_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerDaSiamRPN_create_10
  (JNIEnv* env, jclass , jlong parameters_nativeObj)
{
    
    static const char method_name[] = "video::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::TrackerDaSiamRPN> Ptr_TrackerDaSiamRPN;
        Ptr_TrackerDaSiamRPN _retval_ = cv::TrackerDaSiamRPN::create( (*(cv::TrackerDaSiamRPN::Params*)parameters_nativeObj) );
        return (jlong)(new Ptr_TrackerDaSiamRPN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerDaSiamRPN_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerDaSiamRPN_create_11
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "video::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::TrackerDaSiamRPN> Ptr_TrackerDaSiamRPN;
        Ptr_TrackerDaSiamRPN _retval_ = cv::TrackerDaSiamRPN::create();
        return (jlong)(new Ptr_TrackerDaSiamRPN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float cv::TrackerDaSiamRPN::getTrackingScore()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_video_TrackerDaSiamRPN_getTrackingScore_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_video_TrackerDaSiamRPN_getTrackingScore_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getTrackingScore_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::TrackerDaSiamRPN>* me = (Ptr<cv::TrackerDaSiamRPN>*) self; //TODO: check for NULL
        return (*me)->getTrackingScore();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::TrackerDaSiamRPN>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_TrackerDaSiamRPN_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerDaSiamRPN_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::TrackerDaSiamRPN>*) self;
}


//
//   cv::TrackerDaSiamRPN::Params::Params()
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_TrackerDaSiamRPN_1Params_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_TrackerDaSiamRPN_1Params_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "video::TrackerDaSiamRPN_1Params_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerDaSiamRPN::Params* _retval_ = new cv::TrackerDaSiamRPN::Params();
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// string TrackerDaSiamRPN_Params::model
//

JNIEXPORT jstring JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_get_1model_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_get_1model_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1model_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerDaSiamRPN::Params* me = (cv::TrackerDaSiamRPN::Params*) self; //TODO: check for NULL
        std::string _retval_ = me->model;//();
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
// void TrackerDaSiamRPN_Params::model
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_set_1model_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_set_1model_10
  (JNIEnv* env, jclass , jlong self, jstring model)
{
    
    static const char method_name[] = "video::set_1model_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerDaSiamRPN::Params* me = (cv::TrackerDaSiamRPN::Params*) self; //TODO: check for NULL
        const char* utf_model = env->GetStringUTFChars(model, 0); std::string n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        me->model = ( n_model );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// string TrackerDaSiamRPN_Params::kernel_cls1
//

JNIEXPORT jstring JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_get_1kernel_1cls1_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_get_1kernel_1cls1_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1kernel_1cls1_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerDaSiamRPN::Params* me = (cv::TrackerDaSiamRPN::Params*) self; //TODO: check for NULL
        std::string _retval_ = me->kernel_cls1;//();
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
// void TrackerDaSiamRPN_Params::kernel_cls1
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_set_1kernel_1cls1_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_set_1kernel_1cls1_10
  (JNIEnv* env, jclass , jlong self, jstring kernel_cls1)
{
    
    static const char method_name[] = "video::set_1kernel_1cls1_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerDaSiamRPN::Params* me = (cv::TrackerDaSiamRPN::Params*) self; //TODO: check for NULL
        const char* utf_kernel_cls1 = env->GetStringUTFChars(kernel_cls1, 0); std::string n_kernel_cls1( utf_kernel_cls1 ? utf_kernel_cls1 : "" ); env->ReleaseStringUTFChars(kernel_cls1, utf_kernel_cls1);
        me->kernel_cls1 = ( n_kernel_cls1 );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// string TrackerDaSiamRPN_Params::kernel_r1
//

JNIEXPORT jstring JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_get_1kernel_1r1_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_get_1kernel_1r1_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1kernel_1r1_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerDaSiamRPN::Params* me = (cv::TrackerDaSiamRPN::Params*) self; //TODO: check for NULL
        std::string _retval_ = me->kernel_r1;//();
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
// void TrackerDaSiamRPN_Params::kernel_r1
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_set_1kernel_1r1_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_set_1kernel_1r1_10
  (JNIEnv* env, jclass , jlong self, jstring kernel_r1)
{
    
    static const char method_name[] = "video::set_1kernel_1r1_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerDaSiamRPN::Params* me = (cv::TrackerDaSiamRPN::Params*) self; //TODO: check for NULL
        const char* utf_kernel_r1 = env->GetStringUTFChars(kernel_r1, 0); std::string n_kernel_r1( utf_kernel_r1 ? utf_kernel_r1 : "" ); env->ReleaseStringUTFChars(kernel_r1, utf_kernel_r1);
        me->kernel_r1 = ( n_kernel_r1 );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int TrackerDaSiamRPN_Params::backend
//

JNIEXPORT jint JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_get_1backend_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_get_1backend_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1backend_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerDaSiamRPN::Params* me = (cv::TrackerDaSiamRPN::Params*) self; //TODO: check for NULL
        return me->backend;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void TrackerDaSiamRPN_Params::backend
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_set_1backend_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_set_1backend_10
  (JNIEnv* env, jclass , jlong self, jint backend)
{
    
    static const char method_name[] = "video::set_1backend_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerDaSiamRPN::Params* me = (cv::TrackerDaSiamRPN::Params*) self; //TODO: check for NULL
        me->backend = ( (int)backend );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int TrackerDaSiamRPN_Params::target
//

JNIEXPORT jint JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_get_1target_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_get_1target_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1target_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerDaSiamRPN::Params* me = (cv::TrackerDaSiamRPN::Params*) self; //TODO: check for NULL
        return me->target;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void TrackerDaSiamRPN_Params::target
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_set_1target_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_set_1target_10
  (JNIEnv* env, jclass , jlong self, jint target)
{
    
    static const char method_name[] = "video::set_1target_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerDaSiamRPN::Params* me = (cv::TrackerDaSiamRPN::Params*) self; //TODO: check for NULL
        me->target = ( (int)target );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void cv::TrackerDaSiamRPN::Params::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerDaSiamRPN_1Params_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::TrackerDaSiamRPN::Params*) self;
}


//
// static Ptr_TrackerGOTURN cv::TrackerGOTURN::create(TrackerGOTURN_Params parameters = TrackerGOTURN::Params())
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerGOTURN_create_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerGOTURN_create_10
  (JNIEnv* env, jclass , jlong parameters_nativeObj)
{
    
    static const char method_name[] = "video::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::TrackerGOTURN> Ptr_TrackerGOTURN;
        Ptr_TrackerGOTURN _retval_ = cv::TrackerGOTURN::create( (*(cv::TrackerGOTURN::Params*)parameters_nativeObj) );
        return (jlong)(new Ptr_TrackerGOTURN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerGOTURN_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerGOTURN_create_11
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "video::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::TrackerGOTURN> Ptr_TrackerGOTURN;
        Ptr_TrackerGOTURN _retval_ = cv::TrackerGOTURN::create();
        return (jlong)(new Ptr_TrackerGOTURN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::TrackerGOTURN>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_TrackerGOTURN_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerGOTURN_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::TrackerGOTURN>*) self;
}


//
//   cv::TrackerGOTURN::Params::Params()
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerGOTURN_1Params_TrackerGOTURN_1Params_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerGOTURN_1Params_TrackerGOTURN_1Params_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "video::TrackerGOTURN_1Params_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerGOTURN::Params* _retval_ = new cv::TrackerGOTURN::Params();
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// string TrackerGOTURN_Params::modelTxt
//

JNIEXPORT jstring JNICALL Java_org_opencv_video_TrackerGOTURN_1Params_get_1modelTxt_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_video_TrackerGOTURN_1Params_get_1modelTxt_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1modelTxt_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerGOTURN::Params* me = (cv::TrackerGOTURN::Params*) self; //TODO: check for NULL
        std::string _retval_ = me->modelTxt;//();
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
// void TrackerGOTURN_Params::modelTxt
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerGOTURN_1Params_set_1modelTxt_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerGOTURN_1Params_set_1modelTxt_10
  (JNIEnv* env, jclass , jlong self, jstring modelTxt)
{
    
    static const char method_name[] = "video::set_1modelTxt_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerGOTURN::Params* me = (cv::TrackerGOTURN::Params*) self; //TODO: check for NULL
        const char* utf_modelTxt = env->GetStringUTFChars(modelTxt, 0); std::string n_modelTxt( utf_modelTxt ? utf_modelTxt : "" ); env->ReleaseStringUTFChars(modelTxt, utf_modelTxt);
        me->modelTxt = ( n_modelTxt );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// string TrackerGOTURN_Params::modelBin
//

JNIEXPORT jstring JNICALL Java_org_opencv_video_TrackerGOTURN_1Params_get_1modelBin_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_video_TrackerGOTURN_1Params_get_1modelBin_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1modelBin_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerGOTURN::Params* me = (cv::TrackerGOTURN::Params*) self; //TODO: check for NULL
        std::string _retval_ = me->modelBin;//();
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
// void TrackerGOTURN_Params::modelBin
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerGOTURN_1Params_set_1modelBin_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerGOTURN_1Params_set_1modelBin_10
  (JNIEnv* env, jclass , jlong self, jstring modelBin)
{
    
    static const char method_name[] = "video::set_1modelBin_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerGOTURN::Params* me = (cv::TrackerGOTURN::Params*) self; //TODO: check for NULL
        const char* utf_modelBin = env->GetStringUTFChars(modelBin, 0); std::string n_modelBin( utf_modelBin ? utf_modelBin : "" ); env->ReleaseStringUTFChars(modelBin, utf_modelBin);
        me->modelBin = ( n_modelBin );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void cv::TrackerGOTURN::Params::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_TrackerGOTURN_1Params_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerGOTURN_1Params_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::TrackerGOTURN::Params*) self;
}


//
// static Ptr_TrackerMIL cv::TrackerMIL::create(TrackerMIL_Params parameters = TrackerMIL::Params())
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerMIL_create_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerMIL_create_10
  (JNIEnv* env, jclass , jlong parameters_nativeObj)
{
    
    static const char method_name[] = "video::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::TrackerMIL> Ptr_TrackerMIL;
        Ptr_TrackerMIL _retval_ = cv::TrackerMIL::create( (*(cv::TrackerMIL::Params*)parameters_nativeObj) );
        return (jlong)(new Ptr_TrackerMIL(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerMIL_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerMIL_create_11
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "video::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::TrackerMIL> Ptr_TrackerMIL;
        Ptr_TrackerMIL _retval_ = cv::TrackerMIL::create();
        return (jlong)(new Ptr_TrackerMIL(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::TrackerMIL>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_TrackerMIL_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerMIL_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::TrackerMIL>*) self;
}


//
//   cv::TrackerMIL::Params::Params()
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerMIL_1Params_TrackerMIL_1Params_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerMIL_1Params_TrackerMIL_1Params_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "video::TrackerMIL_1Params_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerMIL::Params* _retval_ = new cv::TrackerMIL::Params();
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// float TrackerMIL_Params::samplerInitInRadius
//

JNIEXPORT jfloat JNICALL Java_org_opencv_video_TrackerMIL_1Params_get_1samplerInitInRadius_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_video_TrackerMIL_1Params_get_1samplerInitInRadius_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1samplerInitInRadius_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerMIL::Params* me = (cv::TrackerMIL::Params*) self; //TODO: check for NULL
        return me->samplerInitInRadius;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void TrackerMIL_Params::samplerInitInRadius
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerMIL_1Params_set_1samplerInitInRadius_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerMIL_1Params_set_1samplerInitInRadius_10
  (JNIEnv* env, jclass , jlong self, jfloat samplerInitInRadius)
{
    
    static const char method_name[] = "video::set_1samplerInitInRadius_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerMIL::Params* me = (cv::TrackerMIL::Params*) self; //TODO: check for NULL
        me->samplerInitInRadius = ( (float)samplerInitInRadius );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int TrackerMIL_Params::samplerInitMaxNegNum
//

JNIEXPORT jint JNICALL Java_org_opencv_video_TrackerMIL_1Params_get_1samplerInitMaxNegNum_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_TrackerMIL_1Params_get_1samplerInitMaxNegNum_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1samplerInitMaxNegNum_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerMIL::Params* me = (cv::TrackerMIL::Params*) self; //TODO: check for NULL
        return me->samplerInitMaxNegNum;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void TrackerMIL_Params::samplerInitMaxNegNum
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerMIL_1Params_set_1samplerInitMaxNegNum_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerMIL_1Params_set_1samplerInitMaxNegNum_10
  (JNIEnv* env, jclass , jlong self, jint samplerInitMaxNegNum)
{
    
    static const char method_name[] = "video::set_1samplerInitMaxNegNum_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerMIL::Params* me = (cv::TrackerMIL::Params*) self; //TODO: check for NULL
        me->samplerInitMaxNegNum = ( (int)samplerInitMaxNegNum );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// float TrackerMIL_Params::samplerSearchWinSize
//

JNIEXPORT jfloat JNICALL Java_org_opencv_video_TrackerMIL_1Params_get_1samplerSearchWinSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_video_TrackerMIL_1Params_get_1samplerSearchWinSize_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1samplerSearchWinSize_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerMIL::Params* me = (cv::TrackerMIL::Params*) self; //TODO: check for NULL
        return me->samplerSearchWinSize;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void TrackerMIL_Params::samplerSearchWinSize
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerMIL_1Params_set_1samplerSearchWinSize_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerMIL_1Params_set_1samplerSearchWinSize_10
  (JNIEnv* env, jclass , jlong self, jfloat samplerSearchWinSize)
{
    
    static const char method_name[] = "video::set_1samplerSearchWinSize_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerMIL::Params* me = (cv::TrackerMIL::Params*) self; //TODO: check for NULL
        me->samplerSearchWinSize = ( (float)samplerSearchWinSize );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// float TrackerMIL_Params::samplerTrackInRadius
//

JNIEXPORT jfloat JNICALL Java_org_opencv_video_TrackerMIL_1Params_get_1samplerTrackInRadius_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_video_TrackerMIL_1Params_get_1samplerTrackInRadius_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1samplerTrackInRadius_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerMIL::Params* me = (cv::TrackerMIL::Params*) self; //TODO: check for NULL
        return me->samplerTrackInRadius;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void TrackerMIL_Params::samplerTrackInRadius
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerMIL_1Params_set_1samplerTrackInRadius_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerMIL_1Params_set_1samplerTrackInRadius_10
  (JNIEnv* env, jclass , jlong self, jfloat samplerTrackInRadius)
{
    
    static const char method_name[] = "video::set_1samplerTrackInRadius_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerMIL::Params* me = (cv::TrackerMIL::Params*) self; //TODO: check for NULL
        me->samplerTrackInRadius = ( (float)samplerTrackInRadius );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int TrackerMIL_Params::samplerTrackMaxPosNum
//

JNIEXPORT jint JNICALL Java_org_opencv_video_TrackerMIL_1Params_get_1samplerTrackMaxPosNum_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_TrackerMIL_1Params_get_1samplerTrackMaxPosNum_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1samplerTrackMaxPosNum_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerMIL::Params* me = (cv::TrackerMIL::Params*) self; //TODO: check for NULL
        return me->samplerTrackMaxPosNum;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void TrackerMIL_Params::samplerTrackMaxPosNum
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerMIL_1Params_set_1samplerTrackMaxPosNum_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerMIL_1Params_set_1samplerTrackMaxPosNum_10
  (JNIEnv* env, jclass , jlong self, jint samplerTrackMaxPosNum)
{
    
    static const char method_name[] = "video::set_1samplerTrackMaxPosNum_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerMIL::Params* me = (cv::TrackerMIL::Params*) self; //TODO: check for NULL
        me->samplerTrackMaxPosNum = ( (int)samplerTrackMaxPosNum );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int TrackerMIL_Params::samplerTrackMaxNegNum
//

JNIEXPORT jint JNICALL Java_org_opencv_video_TrackerMIL_1Params_get_1samplerTrackMaxNegNum_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_TrackerMIL_1Params_get_1samplerTrackMaxNegNum_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1samplerTrackMaxNegNum_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerMIL::Params* me = (cv::TrackerMIL::Params*) self; //TODO: check for NULL
        return me->samplerTrackMaxNegNum;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void TrackerMIL_Params::samplerTrackMaxNegNum
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerMIL_1Params_set_1samplerTrackMaxNegNum_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerMIL_1Params_set_1samplerTrackMaxNegNum_10
  (JNIEnv* env, jclass , jlong self, jint samplerTrackMaxNegNum)
{
    
    static const char method_name[] = "video::set_1samplerTrackMaxNegNum_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerMIL::Params* me = (cv::TrackerMIL::Params*) self; //TODO: check for NULL
        me->samplerTrackMaxNegNum = ( (int)samplerTrackMaxNegNum );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int TrackerMIL_Params::featureSetNumFeatures
//

JNIEXPORT jint JNICALL Java_org_opencv_video_TrackerMIL_1Params_get_1featureSetNumFeatures_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_TrackerMIL_1Params_get_1featureSetNumFeatures_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1featureSetNumFeatures_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerMIL::Params* me = (cv::TrackerMIL::Params*) self; //TODO: check for NULL
        return me->featureSetNumFeatures;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void TrackerMIL_Params::featureSetNumFeatures
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerMIL_1Params_set_1featureSetNumFeatures_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerMIL_1Params_set_1featureSetNumFeatures_10
  (JNIEnv* env, jclass , jlong self, jint featureSetNumFeatures)
{
    
    static const char method_name[] = "video::set_1featureSetNumFeatures_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerMIL::Params* me = (cv::TrackerMIL::Params*) self; //TODO: check for NULL
        me->featureSetNumFeatures = ( (int)featureSetNumFeatures );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void cv::TrackerMIL::Params::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_TrackerMIL_1Params_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerMIL_1Params_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::TrackerMIL::Params*) self;
}


//
// static Ptr_TrackerNano cv::TrackerNano::create(TrackerNano_Params parameters = TrackerNano::Params())
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerNano_create_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerNano_create_10
  (JNIEnv* env, jclass , jlong parameters_nativeObj)
{
    
    static const char method_name[] = "video::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::TrackerNano> Ptr_TrackerNano;
        Ptr_TrackerNano _retval_ = cv::TrackerNano::create( (*(cv::TrackerNano::Params*)parameters_nativeObj) );
        return (jlong)(new Ptr_TrackerNano(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerNano_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerNano_create_11
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "video::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::TrackerNano> Ptr_TrackerNano;
        Ptr_TrackerNano _retval_ = cv::TrackerNano::create();
        return (jlong)(new Ptr_TrackerNano(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float cv::TrackerNano::getTrackingScore()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_video_TrackerNano_getTrackingScore_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_video_TrackerNano_getTrackingScore_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getTrackingScore_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::TrackerNano>* me = (Ptr<cv::TrackerNano>*) self; //TODO: check for NULL
        return (*me)->getTrackingScore();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::TrackerNano>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_TrackerNano_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerNano_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::TrackerNano>*) self;
}


//
//   cv::TrackerNano::Params::Params()
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerNano_1Params_TrackerNano_1Params_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerNano_1Params_TrackerNano_1Params_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "video::TrackerNano_1Params_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerNano::Params* _retval_ = new cv::TrackerNano::Params();
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// string TrackerNano_Params::backbone
//

JNIEXPORT jstring JNICALL Java_org_opencv_video_TrackerNano_1Params_get_1backbone_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_video_TrackerNano_1Params_get_1backbone_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1backbone_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerNano::Params* me = (cv::TrackerNano::Params*) self; //TODO: check for NULL
        std::string _retval_ = me->backbone;//();
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
// void TrackerNano_Params::backbone
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerNano_1Params_set_1backbone_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerNano_1Params_set_1backbone_10
  (JNIEnv* env, jclass , jlong self, jstring backbone)
{
    
    static const char method_name[] = "video::set_1backbone_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerNano::Params* me = (cv::TrackerNano::Params*) self; //TODO: check for NULL
        const char* utf_backbone = env->GetStringUTFChars(backbone, 0); std::string n_backbone( utf_backbone ? utf_backbone : "" ); env->ReleaseStringUTFChars(backbone, utf_backbone);
        me->backbone = ( n_backbone );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// string TrackerNano_Params::neckhead
//

JNIEXPORT jstring JNICALL Java_org_opencv_video_TrackerNano_1Params_get_1neckhead_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_video_TrackerNano_1Params_get_1neckhead_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1neckhead_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerNano::Params* me = (cv::TrackerNano::Params*) self; //TODO: check for NULL
        std::string _retval_ = me->neckhead;//();
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
// void TrackerNano_Params::neckhead
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerNano_1Params_set_1neckhead_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerNano_1Params_set_1neckhead_10
  (JNIEnv* env, jclass , jlong self, jstring neckhead)
{
    
    static const char method_name[] = "video::set_1neckhead_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerNano::Params* me = (cv::TrackerNano::Params*) self; //TODO: check for NULL
        const char* utf_neckhead = env->GetStringUTFChars(neckhead, 0); std::string n_neckhead( utf_neckhead ? utf_neckhead : "" ); env->ReleaseStringUTFChars(neckhead, utf_neckhead);
        me->neckhead = ( n_neckhead );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int TrackerNano_Params::backend
//

JNIEXPORT jint JNICALL Java_org_opencv_video_TrackerNano_1Params_get_1backend_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_TrackerNano_1Params_get_1backend_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1backend_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerNano::Params* me = (cv::TrackerNano::Params*) self; //TODO: check for NULL
        return me->backend;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void TrackerNano_Params::backend
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerNano_1Params_set_1backend_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerNano_1Params_set_1backend_10
  (JNIEnv* env, jclass , jlong self, jint backend)
{
    
    static const char method_name[] = "video::set_1backend_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerNano::Params* me = (cv::TrackerNano::Params*) self; //TODO: check for NULL
        me->backend = ( (int)backend );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int TrackerNano_Params::target
//

JNIEXPORT jint JNICALL Java_org_opencv_video_TrackerNano_1Params_get_1target_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_TrackerNano_1Params_get_1target_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1target_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerNano::Params* me = (cv::TrackerNano::Params*) self; //TODO: check for NULL
        return me->target;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void TrackerNano_Params::target
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerNano_1Params_set_1target_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerNano_1Params_set_1target_10
  (JNIEnv* env, jclass , jlong self, jint target)
{
    
    static const char method_name[] = "video::set_1target_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerNano::Params* me = (cv::TrackerNano::Params*) self; //TODO: check for NULL
        me->target = ( (int)target );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void cv::TrackerNano::Params::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_TrackerNano_1Params_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerNano_1Params_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::TrackerNano::Params*) self;
}


//
// static Ptr_TrackerVit cv::TrackerVit::create(TrackerVit_Params parameters = TrackerVit::Params())
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerVit_create_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerVit_create_10
  (JNIEnv* env, jclass , jlong parameters_nativeObj)
{
    
    static const char method_name[] = "video::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::TrackerVit> Ptr_TrackerVit;
        Ptr_TrackerVit _retval_ = cv::TrackerVit::create( (*(cv::TrackerVit::Params*)parameters_nativeObj) );
        return (jlong)(new Ptr_TrackerVit(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerVit_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerVit_create_11
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "video::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::TrackerVit> Ptr_TrackerVit;
        Ptr_TrackerVit _retval_ = cv::TrackerVit::create();
        return (jlong)(new Ptr_TrackerVit(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float cv::TrackerVit::getTrackingScore()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_video_TrackerVit_getTrackingScore_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_video_TrackerVit_getTrackingScore_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getTrackingScore_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::TrackerVit>* me = (Ptr<cv::TrackerVit>*) self; //TODO: check for NULL
        return (*me)->getTrackingScore();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::TrackerVit>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_TrackerVit_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerVit_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::TrackerVit>*) self;
}


//
//   cv::TrackerVit::Params::Params()
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerVit_1Params_TrackerVit_1Params_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_TrackerVit_1Params_TrackerVit_1Params_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "video::TrackerVit_1Params_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerVit::Params* _retval_ = new cv::TrackerVit::Params();
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// string TrackerVit_Params::net
//

JNIEXPORT jstring JNICALL Java_org_opencv_video_TrackerVit_1Params_get_1net_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_video_TrackerVit_1Params_get_1net_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1net_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerVit::Params* me = (cv::TrackerVit::Params*) self; //TODO: check for NULL
        std::string _retval_ = me->net;//();
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
// void TrackerVit_Params::net
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerVit_1Params_set_1net_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerVit_1Params_set_1net_10
  (JNIEnv* env, jclass , jlong self, jstring net)
{
    
    static const char method_name[] = "video::set_1net_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerVit::Params* me = (cv::TrackerVit::Params*) self; //TODO: check for NULL
        const char* utf_net = env->GetStringUTFChars(net, 0); std::string n_net( utf_net ? utf_net : "" ); env->ReleaseStringUTFChars(net, utf_net);
        me->net = ( n_net );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int TrackerVit_Params::backend
//

JNIEXPORT jint JNICALL Java_org_opencv_video_TrackerVit_1Params_get_1backend_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_TrackerVit_1Params_get_1backend_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1backend_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerVit::Params* me = (cv::TrackerVit::Params*) self; //TODO: check for NULL
        return me->backend;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void TrackerVit_Params::backend
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerVit_1Params_set_1backend_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerVit_1Params_set_1backend_10
  (JNIEnv* env, jclass , jlong self, jint backend)
{
    
    static const char method_name[] = "video::set_1backend_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerVit::Params* me = (cv::TrackerVit::Params*) self; //TODO: check for NULL
        me->backend = ( (int)backend );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int TrackerVit_Params::target
//

JNIEXPORT jint JNICALL Java_org_opencv_video_TrackerVit_1Params_get_1target_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_TrackerVit_1Params_get_1target_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1target_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerVit::Params* me = (cv::TrackerVit::Params*) self; //TODO: check for NULL
        return me->target;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void TrackerVit_Params::target
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerVit_1Params_set_1target_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerVit_1Params_set_1target_10
  (JNIEnv* env, jclass , jlong self, jint target)
{
    
    static const char method_name[] = "video::set_1target_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerVit::Params* me = (cv::TrackerVit::Params*) self; //TODO: check for NULL
        me->target = ( (int)target );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// Scalar TrackerVit_Params::meanvalue
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_video_TrackerVit_1Params_get_1meanvalue_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_video_TrackerVit_1Params_get_1meanvalue_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1meanvalue_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerVit::Params* me = (cv::TrackerVit::Params*) self; //TODO: check for NULL
        Scalar _retval_ = me->meanvalue;//();
        jdoubleArray _da_retval_ = env->NewDoubleArray(4);  jdouble _tmp_retval_[4] = {(jdouble)_retval_.val[0], (jdouble)_retval_.val[1], (jdouble)_retval_.val[2], (jdouble)_retval_.val[3]}; env->SetDoubleArrayRegion(_da_retval_, 0, 4, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void TrackerVit_Params::meanvalue
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerVit_1Params_set_1meanvalue_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerVit_1Params_set_1meanvalue_10
  (JNIEnv* env, jclass , jlong self, jdouble meanvalue_val0, jdouble meanvalue_val1, jdouble meanvalue_val2, jdouble meanvalue_val3)
{
    
    static const char method_name[] = "video::set_1meanvalue_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerVit::Params* me = (cv::TrackerVit::Params*) self; //TODO: check for NULL
        Scalar meanvalue(meanvalue_val0, meanvalue_val1, meanvalue_val2, meanvalue_val3);
        me->meanvalue = ( meanvalue );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// Scalar TrackerVit_Params::stdvalue
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_video_TrackerVit_1Params_get_1stdvalue_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_video_TrackerVit_1Params_get_1stdvalue_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1stdvalue_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerVit::Params* me = (cv::TrackerVit::Params*) self; //TODO: check for NULL
        Scalar _retval_ = me->stdvalue;//();
        jdoubleArray _da_retval_ = env->NewDoubleArray(4);  jdouble _tmp_retval_[4] = {(jdouble)_retval_.val[0], (jdouble)_retval_.val[1], (jdouble)_retval_.val[2], (jdouble)_retval_.val[3]}; env->SetDoubleArrayRegion(_da_retval_, 0, 4, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void TrackerVit_Params::stdvalue
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerVit_1Params_set_1stdvalue_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerVit_1Params_set_1stdvalue_10
  (JNIEnv* env, jclass , jlong self, jdouble stdvalue_val0, jdouble stdvalue_val1, jdouble stdvalue_val2, jdouble stdvalue_val3)
{
    
    static const char method_name[] = "video::set_1stdvalue_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerVit::Params* me = (cv::TrackerVit::Params*) self; //TODO: check for NULL
        Scalar stdvalue(stdvalue_val0, stdvalue_val1, stdvalue_val2, stdvalue_val3);
        me->stdvalue = ( stdvalue );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// float TrackerVit_Params::tracking_score_threshold
//

JNIEXPORT jfloat JNICALL Java_org_opencv_video_TrackerVit_1Params_get_1tracking_1score_1threshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_video_TrackerVit_1Params_get_1tracking_1score_1threshold_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::get_1tracking_1score_1threshold_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerVit::Params* me = (cv::TrackerVit::Params*) self; //TODO: check for NULL
        return me->tracking_score_threshold;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void TrackerVit_Params::tracking_score_threshold
//

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerVit_1Params_set_1tracking_1score_1threshold_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerVit_1Params_set_1tracking_1score_1threshold_10
  (JNIEnv* env, jclass , jlong self, jfloat tracking_score_threshold)
{
    
    static const char method_name[] = "video::set_1tracking_1score_1threshold_10()";
    try {
        LOGD("%s", method_name);
        cv::TrackerVit::Params* me = (cv::TrackerVit::Params*) self; //TODO: check for NULL
        me->tracking_score_threshold = ( (float)tracking_score_threshold );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void cv::TrackerVit::Params::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_TrackerVit_1Params_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_TrackerVit_1Params_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::TrackerVit::Params*) self;
}


//
//  void cv::VariationalRefinement::calcUV(Mat I0, Mat I1, Mat& flow_u, Mat& flow_v)
//

JNIEXPORT void JNICALL Java_org_opencv_video_VariationalRefinement_calcUV_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_VariationalRefinement_calcUV_10
  (JNIEnv* env, jclass , jlong self, jlong I0_nativeObj, jlong I1_nativeObj, jlong flow_u_nativeObj, jlong flow_v_nativeObj)
{
    
    static const char method_name[] = "video::calcUV_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VariationalRefinement>* me = (Ptr<cv::VariationalRefinement>*) self; //TODO: check for NULL
        Mat& I0 = *((Mat*)I0_nativeObj);
        Mat& I1 = *((Mat*)I1_nativeObj);
        Mat& flow_u = *((Mat*)flow_u_nativeObj);
        Mat& flow_v = *((Mat*)flow_v_nativeObj);
        (*me)->calcUV( I0, I1, flow_u, flow_v );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::VariationalRefinement::getFixedPointIterations()
//

JNIEXPORT jint JNICALL Java_org_opencv_video_VariationalRefinement_getFixedPointIterations_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_VariationalRefinement_getFixedPointIterations_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getFixedPointIterations_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VariationalRefinement>* me = (Ptr<cv::VariationalRefinement>*) self; //TODO: check for NULL
        return (*me)->getFixedPointIterations();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::VariationalRefinement::setFixedPointIterations(int val)
//

JNIEXPORT void JNICALL Java_org_opencv_video_VariationalRefinement_setFixedPointIterations_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_VariationalRefinement_setFixedPointIterations_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    
    static const char method_name[] = "video::setFixedPointIterations_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VariationalRefinement>* me = (Ptr<cv::VariationalRefinement>*) self; //TODO: check for NULL
        (*me)->setFixedPointIterations( (int)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::VariationalRefinement::getSorIterations()
//

JNIEXPORT jint JNICALL Java_org_opencv_video_VariationalRefinement_getSorIterations_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_VariationalRefinement_getSorIterations_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getSorIterations_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VariationalRefinement>* me = (Ptr<cv::VariationalRefinement>*) self; //TODO: check for NULL
        return (*me)->getSorIterations();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::VariationalRefinement::setSorIterations(int val)
//

JNIEXPORT void JNICALL Java_org_opencv_video_VariationalRefinement_setSorIterations_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_VariationalRefinement_setSorIterations_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    
    static const char method_name[] = "video::setSorIterations_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VariationalRefinement>* me = (Ptr<cv::VariationalRefinement>*) self; //TODO: check for NULL
        (*me)->setSorIterations( (int)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::VariationalRefinement::getOmega()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_video_VariationalRefinement_getOmega_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_video_VariationalRefinement_getOmega_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getOmega_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VariationalRefinement>* me = (Ptr<cv::VariationalRefinement>*) self; //TODO: check for NULL
        return (*me)->getOmega();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::VariationalRefinement::setOmega(float val)
//

JNIEXPORT void JNICALL Java_org_opencv_video_VariationalRefinement_setOmega_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_video_VariationalRefinement_setOmega_10
  (JNIEnv* env, jclass , jlong self, jfloat val)
{
    
    static const char method_name[] = "video::setOmega_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VariationalRefinement>* me = (Ptr<cv::VariationalRefinement>*) self; //TODO: check for NULL
        (*me)->setOmega( (float)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::VariationalRefinement::getAlpha()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_video_VariationalRefinement_getAlpha_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_video_VariationalRefinement_getAlpha_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getAlpha_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VariationalRefinement>* me = (Ptr<cv::VariationalRefinement>*) self; //TODO: check for NULL
        return (*me)->getAlpha();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::VariationalRefinement::setAlpha(float val)
//

JNIEXPORT void JNICALL Java_org_opencv_video_VariationalRefinement_setAlpha_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_video_VariationalRefinement_setAlpha_10
  (JNIEnv* env, jclass , jlong self, jfloat val)
{
    
    static const char method_name[] = "video::setAlpha_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VariationalRefinement>* me = (Ptr<cv::VariationalRefinement>*) self; //TODO: check for NULL
        (*me)->setAlpha( (float)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::VariationalRefinement::getDelta()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_video_VariationalRefinement_getDelta_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_video_VariationalRefinement_getDelta_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getDelta_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VariationalRefinement>* me = (Ptr<cv::VariationalRefinement>*) self; //TODO: check for NULL
        return (*me)->getDelta();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::VariationalRefinement::setDelta(float val)
//

JNIEXPORT void JNICALL Java_org_opencv_video_VariationalRefinement_setDelta_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_video_VariationalRefinement_setDelta_10
  (JNIEnv* env, jclass , jlong self, jfloat val)
{
    
    static const char method_name[] = "video::setDelta_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VariationalRefinement>* me = (Ptr<cv::VariationalRefinement>*) self; //TODO: check for NULL
        (*me)->setDelta( (float)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::VariationalRefinement::getGamma()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_video_VariationalRefinement_getGamma_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_video_VariationalRefinement_getGamma_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getGamma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VariationalRefinement>* me = (Ptr<cv::VariationalRefinement>*) self; //TODO: check for NULL
        return (*me)->getGamma();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::VariationalRefinement::setGamma(float val)
//

JNIEXPORT void JNICALL Java_org_opencv_video_VariationalRefinement_setGamma_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_video_VariationalRefinement_setGamma_10
  (JNIEnv* env, jclass , jlong self, jfloat val)
{
    
    static const char method_name[] = "video::setGamma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VariationalRefinement>* me = (Ptr<cv::VariationalRefinement>*) self; //TODO: check for NULL
        (*me)->setGamma( (float)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::VariationalRefinement::getEpsilon()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_video_VariationalRefinement_getEpsilon_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_video_VariationalRefinement_getEpsilon_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "video::getEpsilon_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VariationalRefinement>* me = (Ptr<cv::VariationalRefinement>*) self; //TODO: check for NULL
        return (*me)->getEpsilon();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::VariationalRefinement::setEpsilon(float val)
//

JNIEXPORT void JNICALL Java_org_opencv_video_VariationalRefinement_setEpsilon_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_video_VariationalRefinement_setEpsilon_10
  (JNIEnv* env, jclass , jlong self, jfloat val)
{
    
    static const char method_name[] = "video::setEpsilon_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VariationalRefinement>* me = (Ptr<cv::VariationalRefinement>*) self; //TODO: check for NULL
        (*me)->setEpsilon( (float)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// static Ptr_VariationalRefinement cv::VariationalRefinement::create()
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_VariationalRefinement_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_VariationalRefinement_create_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "video::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::VariationalRefinement> Ptr_VariationalRefinement;
        Ptr_VariationalRefinement _retval_ = cv::VariationalRefinement::create();
        return (jlong)(new Ptr_VariationalRefinement(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::VariationalRefinement>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_VariationalRefinement_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_VariationalRefinement_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::VariationalRefinement>*) self;
}


//
//  RotatedRect cv::CamShift(Mat probImage, Rect& window, TermCriteria criteria)
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_video_Video_CamShift_10 (JNIEnv*, jclass, jlong, jint, jint, jint, jint, jdoubleArray, jint, jint, jdouble);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_video_Video_CamShift_10
  (JNIEnv* env, jclass , jlong probImage_nativeObj, jint window_x, jint window_y, jint window_width, jint window_height, jdoubleArray window_out, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon)
{
    
    static const char method_name[] = "video::CamShift_10()";
    try {
        LOGD("%s", method_name);
        Mat& probImage = *((Mat*)probImage_nativeObj);
        Rect window(window_x, window_y, window_width, window_height);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        RotatedRect _retval_ = cv::CamShift( probImage, window, criteria );
        jdoubleArray _da_retval_ = env->NewDoubleArray(5);  jdouble _tmp_retval_[5] = {(jdouble)_retval_.center.x, (jdouble)_retval_.center.y, (jdouble)_retval_.size.width, (jdouble)_retval_.size.height, (jdouble)_retval_.angle}; env->SetDoubleArrayRegion(_da_retval_, 0, 5, _tmp_retval_);
        jdouble tmp_window[4] = {(jdouble)window.x, (jdouble)window.y, (jdouble)window.width, (jdouble)window.height}; env->SetDoubleArrayRegion(window_out, 0, 4, tmp_window);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::meanShift(Mat probImage, Rect& window, TermCriteria criteria)
//

JNIEXPORT jint JNICALL Java_org_opencv_video_Video_meanShift_10 (JNIEnv*, jclass, jlong, jint, jint, jint, jint, jdoubleArray, jint, jint, jdouble);

JNIEXPORT jint JNICALL Java_org_opencv_video_Video_meanShift_10
  (JNIEnv* env, jclass , jlong probImage_nativeObj, jint window_x, jint window_y, jint window_width, jint window_height, jdoubleArray window_out, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon)
{
    
    static const char method_name[] = "video::meanShift_10()";
    try {
        LOGD("%s", method_name);
        Mat& probImage = *((Mat*)probImage_nativeObj);
        Rect window(window_x, window_y, window_width, window_height);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        int _retval_ = cv::meanShift( probImage, window, criteria );
        jdouble tmp_window[4] = {(jdouble)window.x, (jdouble)window.y, (jdouble)window.width, (jdouble)window.height}; env->SetDoubleArrayRegion(window_out, 0, 4, tmp_window);
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::buildOpticalFlowPyramid(Mat img, vector_Mat& pyramid, Size winSize, int maxLevel, bool withDerivatives = true, int pyrBorder = BORDER_REFLECT_101, int derivBorder = BORDER_CONSTANT, bool tryReuseInputImage = true)
//

JNIEXPORT jint JNICALL Java_org_opencv_video_Video_buildOpticalFlowPyramid_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jint, jboolean, jint, jint, jboolean);

JNIEXPORT jint JNICALL Java_org_opencv_video_Video_buildOpticalFlowPyramid_10
  (JNIEnv* env, jclass , jlong img_nativeObj, jlong pyramid_mat_nativeObj, jdouble winSize_width, jdouble winSize_height, jint maxLevel, jboolean withDerivatives, jint pyrBorder, jint derivBorder, jboolean tryReuseInputImage)
{
    
    static const char method_name[] = "video::buildOpticalFlowPyramid_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> pyramid;
        Mat& pyramid_mat = *((Mat*)pyramid_mat_nativeObj);
        Mat& img = *((Mat*)img_nativeObj);
        Size winSize((int)winSize_width, (int)winSize_height);
        int _retval_ = cv::buildOpticalFlowPyramid( img, pyramid, winSize, (int)maxLevel, (bool)withDerivatives, (int)pyrBorder, (int)derivBorder, (bool)tryReuseInputImage );
        vector_Mat_to_Mat( pyramid, pyramid_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jint JNICALL Java_org_opencv_video_Video_buildOpticalFlowPyramid_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jint, jboolean, jint, jint);

JNIEXPORT jint JNICALL Java_org_opencv_video_Video_buildOpticalFlowPyramid_11
  (JNIEnv* env, jclass , jlong img_nativeObj, jlong pyramid_mat_nativeObj, jdouble winSize_width, jdouble winSize_height, jint maxLevel, jboolean withDerivatives, jint pyrBorder, jint derivBorder)
{
    
    static const char method_name[] = "video::buildOpticalFlowPyramid_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> pyramid;
        Mat& pyramid_mat = *((Mat*)pyramid_mat_nativeObj);
        Mat& img = *((Mat*)img_nativeObj);
        Size winSize((int)winSize_width, (int)winSize_height);
        int _retval_ = cv::buildOpticalFlowPyramid( img, pyramid, winSize, (int)maxLevel, (bool)withDerivatives, (int)pyrBorder, (int)derivBorder );
        vector_Mat_to_Mat( pyramid, pyramid_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jint JNICALL Java_org_opencv_video_Video_buildOpticalFlowPyramid_12 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jint, jboolean, jint);

JNIEXPORT jint JNICALL Java_org_opencv_video_Video_buildOpticalFlowPyramid_12
  (JNIEnv* env, jclass , jlong img_nativeObj, jlong pyramid_mat_nativeObj, jdouble winSize_width, jdouble winSize_height, jint maxLevel, jboolean withDerivatives, jint pyrBorder)
{
    
    static const char method_name[] = "video::buildOpticalFlowPyramid_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> pyramid;
        Mat& pyramid_mat = *((Mat*)pyramid_mat_nativeObj);
        Mat& img = *((Mat*)img_nativeObj);
        Size winSize((int)winSize_width, (int)winSize_height);
        int _retval_ = cv::buildOpticalFlowPyramid( img, pyramid, winSize, (int)maxLevel, (bool)withDerivatives, (int)pyrBorder );
        vector_Mat_to_Mat( pyramid, pyramid_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jint JNICALL Java_org_opencv_video_Video_buildOpticalFlowPyramid_13 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jint, jboolean);

JNIEXPORT jint JNICALL Java_org_opencv_video_Video_buildOpticalFlowPyramid_13
  (JNIEnv* env, jclass , jlong img_nativeObj, jlong pyramid_mat_nativeObj, jdouble winSize_width, jdouble winSize_height, jint maxLevel, jboolean withDerivatives)
{
    
    static const char method_name[] = "video::buildOpticalFlowPyramid_13()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> pyramid;
        Mat& pyramid_mat = *((Mat*)pyramid_mat_nativeObj);
        Mat& img = *((Mat*)img_nativeObj);
        Size winSize((int)winSize_width, (int)winSize_height);
        int _retval_ = cv::buildOpticalFlowPyramid( img, pyramid, winSize, (int)maxLevel, (bool)withDerivatives );
        vector_Mat_to_Mat( pyramid, pyramid_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jint JNICALL Java_org_opencv_video_Video_buildOpticalFlowPyramid_14 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jint);

JNIEXPORT jint JNICALL Java_org_opencv_video_Video_buildOpticalFlowPyramid_14
  (JNIEnv* env, jclass , jlong img_nativeObj, jlong pyramid_mat_nativeObj, jdouble winSize_width, jdouble winSize_height, jint maxLevel)
{
    
    static const char method_name[] = "video::buildOpticalFlowPyramid_14()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> pyramid;
        Mat& pyramid_mat = *((Mat*)pyramid_mat_nativeObj);
        Mat& img = *((Mat*)img_nativeObj);
        Size winSize((int)winSize_width, (int)winSize_height);
        int _retval_ = cv::buildOpticalFlowPyramid( img, pyramid, winSize, (int)maxLevel );
        vector_Mat_to_Mat( pyramid, pyramid_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::calcOpticalFlowPyrLK(Mat prevImg, Mat nextImg, vector_Point2f prevPts, vector_Point2f& nextPts, vector_uchar& status, vector_float& err, Size winSize = Size(21,21), int maxLevel = 3, TermCriteria criteria = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 0.01), int flags = 0, double minEigThreshold = 1e-4)
//

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jdouble, jdouble, jint, jint, jint, jdouble, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_10
  (JNIEnv* env, jclass , jlong prevImg_nativeObj, jlong nextImg_nativeObj, jlong prevPts_mat_nativeObj, jlong nextPts_mat_nativeObj, jlong status_mat_nativeObj, jlong err_mat_nativeObj, jdouble winSize_width, jdouble winSize_height, jint maxLevel, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon, jint flags, jdouble minEigThreshold)
{
    
    static const char method_name[] = "video::calcOpticalFlowPyrLK_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Point2f> prevPts;
        Mat& prevPts_mat = *((Mat*)prevPts_mat_nativeObj);
        Mat_to_vector_Point2f( prevPts_mat, prevPts );
        std::vector<Point2f> nextPts;
        Mat& nextPts_mat = *((Mat*)nextPts_mat_nativeObj);
        Mat_to_vector_Point2f( nextPts_mat, nextPts );
        std::vector<uchar> status;
        Mat& status_mat = *((Mat*)status_mat_nativeObj);
        std::vector<float> err;
        Mat& err_mat = *((Mat*)err_mat_nativeObj);
        Mat& prevImg = *((Mat*)prevImg_nativeObj);
        Mat& nextImg = *((Mat*)nextImg_nativeObj);
        Size winSize((int)winSize_width, (int)winSize_height);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        cv::calcOpticalFlowPyrLK( prevImg, nextImg, prevPts, nextPts, status, err, winSize, (int)maxLevel, criteria, (int)flags, (double)minEigThreshold );
        vector_Point2f_to_Mat( nextPts, nextPts_mat );
        vector_uchar_to_Mat( status, status_mat );
        vector_float_to_Mat( err, err_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jdouble, jdouble, jint, jint, jint, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_11
  (JNIEnv* env, jclass , jlong prevImg_nativeObj, jlong nextImg_nativeObj, jlong prevPts_mat_nativeObj, jlong nextPts_mat_nativeObj, jlong status_mat_nativeObj, jlong err_mat_nativeObj, jdouble winSize_width, jdouble winSize_height, jint maxLevel, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon, jint flags)
{
    
    static const char method_name[] = "video::calcOpticalFlowPyrLK_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Point2f> prevPts;
        Mat& prevPts_mat = *((Mat*)prevPts_mat_nativeObj);
        Mat_to_vector_Point2f( prevPts_mat, prevPts );
        std::vector<Point2f> nextPts;
        Mat& nextPts_mat = *((Mat*)nextPts_mat_nativeObj);
        Mat_to_vector_Point2f( nextPts_mat, nextPts );
        std::vector<uchar> status;
        Mat& status_mat = *((Mat*)status_mat_nativeObj);
        std::vector<float> err;
        Mat& err_mat = *((Mat*)err_mat_nativeObj);
        Mat& prevImg = *((Mat*)prevImg_nativeObj);
        Mat& nextImg = *((Mat*)nextImg_nativeObj);
        Size winSize((int)winSize_width, (int)winSize_height);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        cv::calcOpticalFlowPyrLK( prevImg, nextImg, prevPts, nextPts, status, err, winSize, (int)maxLevel, criteria, (int)flags );
        vector_Point2f_to_Mat( nextPts, nextPts_mat );
        vector_uchar_to_Mat( status, status_mat );
        vector_float_to_Mat( err, err_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jdouble, jdouble, jint, jint, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_12
  (JNIEnv* env, jclass , jlong prevImg_nativeObj, jlong nextImg_nativeObj, jlong prevPts_mat_nativeObj, jlong nextPts_mat_nativeObj, jlong status_mat_nativeObj, jlong err_mat_nativeObj, jdouble winSize_width, jdouble winSize_height, jint maxLevel, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon)
{
    
    static const char method_name[] = "video::calcOpticalFlowPyrLK_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Point2f> prevPts;
        Mat& prevPts_mat = *((Mat*)prevPts_mat_nativeObj);
        Mat_to_vector_Point2f( prevPts_mat, prevPts );
        std::vector<Point2f> nextPts;
        Mat& nextPts_mat = *((Mat*)nextPts_mat_nativeObj);
        Mat_to_vector_Point2f( nextPts_mat, nextPts );
        std::vector<uchar> status;
        Mat& status_mat = *((Mat*)status_mat_nativeObj);
        std::vector<float> err;
        Mat& err_mat = *((Mat*)err_mat_nativeObj);
        Mat& prevImg = *((Mat*)prevImg_nativeObj);
        Mat& nextImg = *((Mat*)nextImg_nativeObj);
        Size winSize((int)winSize_width, (int)winSize_height);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        cv::calcOpticalFlowPyrLK( prevImg, nextImg, prevPts, nextPts, status, err, winSize, (int)maxLevel, criteria );
        vector_Point2f_to_Mat( nextPts, nextPts_mat );
        vector_uchar_to_Mat( status, status_mat );
        vector_float_to_Mat( err, err_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_13 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_13
  (JNIEnv* env, jclass , jlong prevImg_nativeObj, jlong nextImg_nativeObj, jlong prevPts_mat_nativeObj, jlong nextPts_mat_nativeObj, jlong status_mat_nativeObj, jlong err_mat_nativeObj, jdouble winSize_width, jdouble winSize_height, jint maxLevel)
{
    
    static const char method_name[] = "video::calcOpticalFlowPyrLK_13()";
    try {
        LOGD("%s", method_name);
        std::vector<Point2f> prevPts;
        Mat& prevPts_mat = *((Mat*)prevPts_mat_nativeObj);
        Mat_to_vector_Point2f( prevPts_mat, prevPts );
        std::vector<Point2f> nextPts;
        Mat& nextPts_mat = *((Mat*)nextPts_mat_nativeObj);
        Mat_to_vector_Point2f( nextPts_mat, nextPts );
        std::vector<uchar> status;
        Mat& status_mat = *((Mat*)status_mat_nativeObj);
        std::vector<float> err;
        Mat& err_mat = *((Mat*)err_mat_nativeObj);
        Mat& prevImg = *((Mat*)prevImg_nativeObj);
        Mat& nextImg = *((Mat*)nextImg_nativeObj);
        Size winSize((int)winSize_width, (int)winSize_height);
        cv::calcOpticalFlowPyrLK( prevImg, nextImg, prevPts, nextPts, status, err, winSize, (int)maxLevel );
        vector_Point2f_to_Mat( nextPts, nextPts_mat );
        vector_uchar_to_Mat( status, status_mat );
        vector_float_to_Mat( err, err_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_14 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_14
  (JNIEnv* env, jclass , jlong prevImg_nativeObj, jlong nextImg_nativeObj, jlong prevPts_mat_nativeObj, jlong nextPts_mat_nativeObj, jlong status_mat_nativeObj, jlong err_mat_nativeObj, jdouble winSize_width, jdouble winSize_height)
{
    
    static const char method_name[] = "video::calcOpticalFlowPyrLK_14()";
    try {
        LOGD("%s", method_name);
        std::vector<Point2f> prevPts;
        Mat& prevPts_mat = *((Mat*)prevPts_mat_nativeObj);
        Mat_to_vector_Point2f( prevPts_mat, prevPts );
        std::vector<Point2f> nextPts;
        Mat& nextPts_mat = *((Mat*)nextPts_mat_nativeObj);
        Mat_to_vector_Point2f( nextPts_mat, nextPts );
        std::vector<uchar> status;
        Mat& status_mat = *((Mat*)status_mat_nativeObj);
        std::vector<float> err;
        Mat& err_mat = *((Mat*)err_mat_nativeObj);
        Mat& prevImg = *((Mat*)prevImg_nativeObj);
        Mat& nextImg = *((Mat*)nextImg_nativeObj);
        Size winSize((int)winSize_width, (int)winSize_height);
        cv::calcOpticalFlowPyrLK( prevImg, nextImg, prevPts, nextPts, status, err, winSize );
        vector_Point2f_to_Mat( nextPts, nextPts_mat );
        vector_uchar_to_Mat( status, status_mat );
        vector_float_to_Mat( err, err_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_15 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_15
  (JNIEnv* env, jclass , jlong prevImg_nativeObj, jlong nextImg_nativeObj, jlong prevPts_mat_nativeObj, jlong nextPts_mat_nativeObj, jlong status_mat_nativeObj, jlong err_mat_nativeObj)
{
    
    static const char method_name[] = "video::calcOpticalFlowPyrLK_15()";
    try {
        LOGD("%s", method_name);
        std::vector<Point2f> prevPts;
        Mat& prevPts_mat = *((Mat*)prevPts_mat_nativeObj);
        Mat_to_vector_Point2f( prevPts_mat, prevPts );
        std::vector<Point2f> nextPts;
        Mat& nextPts_mat = *((Mat*)nextPts_mat_nativeObj);
        Mat_to_vector_Point2f( nextPts_mat, nextPts );
        std::vector<uchar> status;
        Mat& status_mat = *((Mat*)status_mat_nativeObj);
        std::vector<float> err;
        Mat& err_mat = *((Mat*)err_mat_nativeObj);
        Mat& prevImg = *((Mat*)prevImg_nativeObj);
        Mat& nextImg = *((Mat*)nextImg_nativeObj);
        cv::calcOpticalFlowPyrLK( prevImg, nextImg, prevPts, nextPts, status, err );
        vector_Point2f_to_Mat( nextPts, nextPts_mat );
        vector_uchar_to_Mat( status, status_mat );
        vector_float_to_Mat( err, err_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::calcOpticalFlowFarneback(Mat prev, Mat next, Mat& flow, double pyr_scale, int levels, int winsize, int iterations, int poly_n, double poly_sigma, int flags)
//

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowFarneback_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jint, jint, jint, jint, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowFarneback_10
  (JNIEnv* env, jclass , jlong prev_nativeObj, jlong next_nativeObj, jlong flow_nativeObj, jdouble pyr_scale, jint levels, jint winsize, jint iterations, jint poly_n, jdouble poly_sigma, jint flags)
{
    
    static const char method_name[] = "video::calcOpticalFlowFarneback_10()";
    try {
        LOGD("%s", method_name);
        Mat& prev = *((Mat*)prev_nativeObj);
        Mat& next = *((Mat*)next_nativeObj);
        Mat& flow = *((Mat*)flow_nativeObj);
        cv::calcOpticalFlowFarneback( prev, next, flow, (double)pyr_scale, (int)levels, (int)winsize, (int)iterations, (int)poly_n, (double)poly_sigma, (int)flags );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  double cv::computeECC(Mat templateImage, Mat inputImage, Mat inputMask = Mat())
//

JNIEXPORT jdouble JNICALL Java_org_opencv_video_Video_computeECC_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_Video_computeECC_10
  (JNIEnv* env, jclass , jlong templateImage_nativeObj, jlong inputImage_nativeObj, jlong inputMask_nativeObj)
{
    
    static const char method_name[] = "video::computeECC_10()";
    try {
        LOGD("%s", method_name);
        Mat& templateImage = *((Mat*)templateImage_nativeObj);
        Mat& inputImage = *((Mat*)inputImage_nativeObj);
        Mat& inputMask = *((Mat*)inputMask_nativeObj);
        return cv::computeECC( templateImage, inputImage, inputMask );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdouble JNICALL Java_org_opencv_video_Video_computeECC_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_Video_computeECC_11
  (JNIEnv* env, jclass , jlong templateImage_nativeObj, jlong inputImage_nativeObj)
{
    
    static const char method_name[] = "video::computeECC_11()";
    try {
        LOGD("%s", method_name);
        Mat& templateImage = *((Mat*)templateImage_nativeObj);
        Mat& inputImage = *((Mat*)inputImage_nativeObj);
        return cv::computeECC( templateImage, inputImage );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double cv::findTransformECC(Mat templateImage, Mat inputImage, Mat& warpMatrix, int motionType, TermCriteria criteria, Mat inputMask, int gaussFiltSize)
//

JNIEXPORT jdouble JNICALL Java_org_opencv_video_Video_findTransformECC_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jint, jint, jdouble, jlong, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_Video_findTransformECC_10
  (JNIEnv* env, jclass , jlong templateImage_nativeObj, jlong inputImage_nativeObj, jlong warpMatrix_nativeObj, jint motionType, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon, jlong inputMask_nativeObj, jint gaussFiltSize)
{
    
    static const char method_name[] = "video::findTransformECC_10()";
    try {
        LOGD("%s", method_name);
        Mat& templateImage = *((Mat*)templateImage_nativeObj);
        Mat& inputImage = *((Mat*)inputImage_nativeObj);
        Mat& warpMatrix = *((Mat*)warpMatrix_nativeObj);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        Mat& inputMask = *((Mat*)inputMask_nativeObj);
        return cv::findTransformECC( templateImage, inputImage, warpMatrix, (int)motionType, criteria, inputMask, (int)gaussFiltSize );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double cv::findTransformECC(Mat templateImage, Mat inputImage, Mat& warpMatrix, int motionType = MOTION_AFFINE, TermCriteria criteria = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 50, 0.001), Mat inputMask = Mat())
//

JNIEXPORT jdouble JNICALL Java_org_opencv_video_Video_findTransformECC_11 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jint, jint, jdouble, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_Video_findTransformECC_11
  (JNIEnv* env, jclass , jlong templateImage_nativeObj, jlong inputImage_nativeObj, jlong warpMatrix_nativeObj, jint motionType, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon, jlong inputMask_nativeObj)
{
    
    static const char method_name[] = "video::findTransformECC_11()";
    try {
        LOGD("%s", method_name);
        Mat& templateImage = *((Mat*)templateImage_nativeObj);
        Mat& inputImage = *((Mat*)inputImage_nativeObj);
        Mat& warpMatrix = *((Mat*)warpMatrix_nativeObj);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        Mat& inputMask = *((Mat*)inputMask_nativeObj);
        return cv::findTransformECC( templateImage, inputImage, warpMatrix, (int)motionType, criteria, inputMask );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdouble JNICALL Java_org_opencv_video_Video_findTransformECC_12 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jint, jint, jdouble);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_Video_findTransformECC_12
  (JNIEnv* env, jclass , jlong templateImage_nativeObj, jlong inputImage_nativeObj, jlong warpMatrix_nativeObj, jint motionType, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon)
{
    
    static const char method_name[] = "video::findTransformECC_12()";
    try {
        LOGD("%s", method_name);
        Mat& templateImage = *((Mat*)templateImage_nativeObj);
        Mat& inputImage = *((Mat*)inputImage_nativeObj);
        Mat& warpMatrix = *((Mat*)warpMatrix_nativeObj);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        return cv::findTransformECC( templateImage, inputImage, warpMatrix, (int)motionType, criteria );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdouble JNICALL Java_org_opencv_video_Video_findTransformECC_13 (JNIEnv*, jclass, jlong, jlong, jlong, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_Video_findTransformECC_13
  (JNIEnv* env, jclass , jlong templateImage_nativeObj, jlong inputImage_nativeObj, jlong warpMatrix_nativeObj, jint motionType)
{
    
    static const char method_name[] = "video::findTransformECC_13()";
    try {
        LOGD("%s", method_name);
        Mat& templateImage = *((Mat*)templateImage_nativeObj);
        Mat& inputImage = *((Mat*)inputImage_nativeObj);
        Mat& warpMatrix = *((Mat*)warpMatrix_nativeObj);
        return cv::findTransformECC( templateImage, inputImage, warpMatrix, (int)motionType );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdouble JNICALL Java_org_opencv_video_Video_findTransformECC_14 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_Video_findTransformECC_14
  (JNIEnv* env, jclass , jlong templateImage_nativeObj, jlong inputImage_nativeObj, jlong warpMatrix_nativeObj)
{
    
    static const char method_name[] = "video::findTransformECC_14()";
    try {
        LOGD("%s", method_name);
        Mat& templateImage = *((Mat*)templateImage_nativeObj);
        Mat& inputImage = *((Mat*)inputImage_nativeObj);
        Mat& warpMatrix = *((Mat*)warpMatrix_nativeObj);
        return cv::findTransformECC( templateImage, inputImage, warpMatrix );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat cv::readOpticalFlow(String path)
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_readOpticalFlow_10 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_readOpticalFlow_10
  (JNIEnv* env, jclass , jstring path)
{
    
    static const char method_name[] = "video::readOpticalFlow_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_path = env->GetStringUTFChars(path, 0); String n_path( utf_path ? utf_path : "" ); env->ReleaseStringUTFChars(path, utf_path);
        cv::Mat _retval_ = cv::readOpticalFlow( n_path );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::writeOpticalFlow(String path, Mat flow)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_video_Video_writeOpticalFlow_10 (JNIEnv*, jclass, jstring, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_video_Video_writeOpticalFlow_10
  (JNIEnv* env, jclass , jstring path, jlong flow_nativeObj)
{
    
    static const char method_name[] = "video::writeOpticalFlow_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_path = env->GetStringUTFChars(path, 0); String n_path( utf_path ? utf_path : "" ); env->ReleaseStringUTFChars(path, utf_path);
        Mat& flow = *((Mat*)flow_nativeObj);
        return cv::writeOpticalFlow( n_path, flow );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_BackgroundSubtractorMOG2 cv::createBackgroundSubtractorMOG2(int history = 500, double varThreshold = 16, bool detectShadows = true)
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorMOG2_10 (JNIEnv*, jclass, jint, jdouble, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorMOG2_10
  (JNIEnv* env, jclass , jint history, jdouble varThreshold, jboolean detectShadows)
{
    
    static const char method_name[] = "video::createBackgroundSubtractorMOG2_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::BackgroundSubtractorMOG2> Ptr_BackgroundSubtractorMOG2;
        Ptr_BackgroundSubtractorMOG2 _retval_ = cv::createBackgroundSubtractorMOG2( (int)history, (double)varThreshold, (bool)detectShadows );
        return (jlong)(new Ptr_BackgroundSubtractorMOG2(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorMOG2_11 (JNIEnv*, jclass, jint, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorMOG2_11
  (JNIEnv* env, jclass , jint history, jdouble varThreshold)
{
    
    static const char method_name[] = "video::createBackgroundSubtractorMOG2_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::BackgroundSubtractorMOG2> Ptr_BackgroundSubtractorMOG2;
        Ptr_BackgroundSubtractorMOG2 _retval_ = cv::createBackgroundSubtractorMOG2( (int)history, (double)varThreshold );
        return (jlong)(new Ptr_BackgroundSubtractorMOG2(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorMOG2_12 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorMOG2_12
  (JNIEnv* env, jclass , jint history)
{
    
    static const char method_name[] = "video::createBackgroundSubtractorMOG2_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::BackgroundSubtractorMOG2> Ptr_BackgroundSubtractorMOG2;
        Ptr_BackgroundSubtractorMOG2 _retval_ = cv::createBackgroundSubtractorMOG2( (int)history );
        return (jlong)(new Ptr_BackgroundSubtractorMOG2(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorMOG2_13 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorMOG2_13
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "video::createBackgroundSubtractorMOG2_13()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::BackgroundSubtractorMOG2> Ptr_BackgroundSubtractorMOG2;
        Ptr_BackgroundSubtractorMOG2 _retval_ = cv::createBackgroundSubtractorMOG2();
        return (jlong)(new Ptr_BackgroundSubtractorMOG2(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_BackgroundSubtractorKNN cv::createBackgroundSubtractorKNN(int history = 500, double dist2Threshold = 400.0, bool detectShadows = true)
//

JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorKNN_10 (JNIEnv*, jclass, jint, jdouble, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorKNN_10
  (JNIEnv* env, jclass , jint history, jdouble dist2Threshold, jboolean detectShadows)
{
    
    static const char method_name[] = "video::createBackgroundSubtractorKNN_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::BackgroundSubtractorKNN> Ptr_BackgroundSubtractorKNN;
        Ptr_BackgroundSubtractorKNN _retval_ = cv::createBackgroundSubtractorKNN( (int)history, (double)dist2Threshold, (bool)detectShadows );
        return (jlong)(new Ptr_BackgroundSubtractorKNN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorKNN_11 (JNIEnv*, jclass, jint, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorKNN_11
  (JNIEnv* env, jclass , jint history, jdouble dist2Threshold)
{
    
    static const char method_name[] = "video::createBackgroundSubtractorKNN_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::BackgroundSubtractorKNN> Ptr_BackgroundSubtractorKNN;
        Ptr_BackgroundSubtractorKNN _retval_ = cv::createBackgroundSubtractorKNN( (int)history, (double)dist2Threshold );
        return (jlong)(new Ptr_BackgroundSubtractorKNN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorKNN_12 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorKNN_12
  (JNIEnv* env, jclass , jint history)
{
    
    static const char method_name[] = "video::createBackgroundSubtractorKNN_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::BackgroundSubtractorKNN> Ptr_BackgroundSubtractorKNN;
        Ptr_BackgroundSubtractorKNN _retval_ = cv::createBackgroundSubtractorKNN( (int)history );
        return (jlong)(new Ptr_BackgroundSubtractorKNN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorKNN_13 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorKNN_13
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "video::createBackgroundSubtractorKNN_13()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::BackgroundSubtractorKNN> Ptr_BackgroundSubtractorKNN;
        Ptr_BackgroundSubtractorKNN _retval_ = cv::createBackgroundSubtractorKNN();
        return (jlong)(new Ptr_BackgroundSubtractorKNN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}




} // extern "C"

#endif // HAVE_OPENCV_VIDEO
