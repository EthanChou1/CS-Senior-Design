//
// This file is auto-generated. Please don't modify it!
//

#undef LOG_TAG

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_XIMGPROC

#include <string>

#include "opencv2/ximgproc.hpp"

#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc.hpp"
#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc/seeds.hpp"
#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc/edge_drawing.hpp"
#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc/find_ellipses.hpp"
#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc/structured_edge_detection.hpp"
#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc/peilin.hpp"
#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc/weighted_median_filter.hpp"
#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc/sparse_match_interpolator.hpp"
#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc/lsc.hpp"
#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc/fast_line_detector.hpp"
#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc/edgepreserving_filter.hpp"
#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc/edge_filter.hpp"
#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc/disparity_filter.hpp"
#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc/radon_transform.hpp"
#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc/slic.hpp"
#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc/fourier_descriptors.hpp"
#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc/color_match.hpp"
#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc/segmentation.hpp"
#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc/ridgefilter.hpp"
#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc/deriche_filter.hpp"
#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc/scansegment.hpp"
#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc/fast_hough_transform.hpp"
#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc/estimated_covariance.hpp"
#include "/home/ethan/opencv_build/opencv/../opencv_contrib/modules/ximgproc/include/opencv2/ximgproc/edgeboxes.hpp"

#define LOG_TAG "org.opencv.ximgproc"
#include "common.h"

using namespace cv;

/// throw java exception
#undef throwJavaException
#define throwJavaException throwJavaException_ximgproc
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
//  void cv::ximgproc::niBlackThreshold(Mat _src, Mat& _dst, double maxValue, int type, int blockSize, double k, int binarizationMethod = BINARIZATION_NIBLACK, double r = 128)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_niBlackThreshold_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jint, jint, jdouble, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_niBlackThreshold_10
  (JNIEnv* env, jclass , jlong _src_nativeObj, jlong _dst_nativeObj, jdouble maxValue, jint type, jint blockSize, jdouble k, jint binarizationMethod, jdouble r)
{
    
    static const char method_name[] = "ximgproc::niBlackThreshold_10()";
    try {
        LOGD("%s", method_name);
        Mat& _src = *((Mat*)_src_nativeObj);
        Mat& _dst = *((Mat*)_dst_nativeObj);
        cv::ximgproc::niBlackThreshold( _src, _dst, (double)maxValue, (int)type, (int)blockSize, (double)k, (int)binarizationMethod, (double)r );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_niBlackThreshold_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jint, jint, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_niBlackThreshold_11
  (JNIEnv* env, jclass , jlong _src_nativeObj, jlong _dst_nativeObj, jdouble maxValue, jint type, jint blockSize, jdouble k, jint binarizationMethod)
{
    
    static const char method_name[] = "ximgproc::niBlackThreshold_11()";
    try {
        LOGD("%s", method_name);
        Mat& _src = *((Mat*)_src_nativeObj);
        Mat& _dst = *((Mat*)_dst_nativeObj);
        cv::ximgproc::niBlackThreshold( _src, _dst, (double)maxValue, (int)type, (int)blockSize, (double)k, (int)binarizationMethod );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_niBlackThreshold_12 (JNIEnv*, jclass, jlong, jlong, jdouble, jint, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_niBlackThreshold_12
  (JNIEnv* env, jclass , jlong _src_nativeObj, jlong _dst_nativeObj, jdouble maxValue, jint type, jint blockSize, jdouble k)
{
    
    static const char method_name[] = "ximgproc::niBlackThreshold_12()";
    try {
        LOGD("%s", method_name);
        Mat& _src = *((Mat*)_src_nativeObj);
        Mat& _dst = *((Mat*)_dst_nativeObj);
        cv::ximgproc::niBlackThreshold( _src, _dst, (double)maxValue, (int)type, (int)blockSize, (double)k );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::thinning(Mat src, Mat& dst, int thinningType = THINNING_ZHANGSUEN)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_thinning_10 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_thinning_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint thinningType)
{
    
    static const char method_name[] = "ximgproc::thinning_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::thinning( src, dst, (int)thinningType );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_thinning_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_thinning_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    
    static const char method_name[] = "ximgproc::thinning_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::thinning( src, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::anisotropicDiffusion(Mat src, Mat& dst, float alpha, float K, int niters)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_anisotropicDiffusion_10 (JNIEnv*, jclass, jlong, jlong, jfloat, jfloat, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_anisotropicDiffusion_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jfloat alpha, jfloat K, jint niters)
{
    
    static const char method_name[] = "ximgproc::anisotropicDiffusion_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::anisotropicDiffusion( src, dst, (float)alpha, (float)K, (int)niters );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  Ptr_SuperpixelSEEDS cv::ximgproc::createSuperpixelSEEDS(int image_width, int image_height, int image_channels, int num_superpixels, int num_levels, int prior = 2, int histogram_bins = 5, bool double_step = false)
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSuperpixelSEEDS_10 (JNIEnv*, jclass, jint, jint, jint, jint, jint, jint, jint, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSuperpixelSEEDS_10
  (JNIEnv* env, jclass , jint image_width, jint image_height, jint image_channels, jint num_superpixels, jint num_levels, jint prior, jint histogram_bins, jboolean double_step)
{
    
    static const char method_name[] = "ximgproc::createSuperpixelSEEDS_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::SuperpixelSEEDS> Ptr_SuperpixelSEEDS;
        Ptr_SuperpixelSEEDS _retval_ = cv::ximgproc::createSuperpixelSEEDS( (int)image_width, (int)image_height, (int)image_channels, (int)num_superpixels, (int)num_levels, (int)prior, (int)histogram_bins, (bool)double_step );
        return (jlong)(new Ptr_SuperpixelSEEDS(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSuperpixelSEEDS_11 (JNIEnv*, jclass, jint, jint, jint, jint, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSuperpixelSEEDS_11
  (JNIEnv* env, jclass , jint image_width, jint image_height, jint image_channels, jint num_superpixels, jint num_levels, jint prior, jint histogram_bins)
{
    
    static const char method_name[] = "ximgproc::createSuperpixelSEEDS_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::SuperpixelSEEDS> Ptr_SuperpixelSEEDS;
        Ptr_SuperpixelSEEDS _retval_ = cv::ximgproc::createSuperpixelSEEDS( (int)image_width, (int)image_height, (int)image_channels, (int)num_superpixels, (int)num_levels, (int)prior, (int)histogram_bins );
        return (jlong)(new Ptr_SuperpixelSEEDS(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSuperpixelSEEDS_12 (JNIEnv*, jclass, jint, jint, jint, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSuperpixelSEEDS_12
  (JNIEnv* env, jclass , jint image_width, jint image_height, jint image_channels, jint num_superpixels, jint num_levels, jint prior)
{
    
    static const char method_name[] = "ximgproc::createSuperpixelSEEDS_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::SuperpixelSEEDS> Ptr_SuperpixelSEEDS;
        Ptr_SuperpixelSEEDS _retval_ = cv::ximgproc::createSuperpixelSEEDS( (int)image_width, (int)image_height, (int)image_channels, (int)num_superpixels, (int)num_levels, (int)prior );
        return (jlong)(new Ptr_SuperpixelSEEDS(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSuperpixelSEEDS_13 (JNIEnv*, jclass, jint, jint, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSuperpixelSEEDS_13
  (JNIEnv* env, jclass , jint image_width, jint image_height, jint image_channels, jint num_superpixels, jint num_levels)
{
    
    static const char method_name[] = "ximgproc::createSuperpixelSEEDS_13()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::SuperpixelSEEDS> Ptr_SuperpixelSEEDS;
        Ptr_SuperpixelSEEDS _retval_ = cv::ximgproc::createSuperpixelSEEDS( (int)image_width, (int)image_height, (int)image_channels, (int)num_superpixels, (int)num_levels );
        return (jlong)(new Ptr_SuperpixelSEEDS(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_EdgeDrawing cv::ximgproc::createEdgeDrawing()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeDrawing_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeDrawing_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "ximgproc::createEdgeDrawing_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::EdgeDrawing> Ptr_EdgeDrawing;
        Ptr_EdgeDrawing _retval_ = cv::ximgproc::createEdgeDrawing();
        return (jlong)(new Ptr_EdgeDrawing(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::findEllipses(Mat image, Mat& ellipses, float scoreThreshold = 0.7f, float reliabilityThreshold = 0.5f, float centerDistanceThreshold = 0.05f)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_findEllipses_10 (JNIEnv*, jclass, jlong, jlong, jfloat, jfloat, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_findEllipses_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong ellipses_nativeObj, jfloat scoreThreshold, jfloat reliabilityThreshold, jfloat centerDistanceThreshold)
{
    
    static const char method_name[] = "ximgproc::findEllipses_10()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& ellipses = *((Mat*)ellipses_nativeObj);
        cv::ximgproc::findEllipses( image, ellipses, (float)scoreThreshold, (float)reliabilityThreshold, (float)centerDistanceThreshold );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_findEllipses_11 (JNIEnv*, jclass, jlong, jlong, jfloat, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_findEllipses_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong ellipses_nativeObj, jfloat scoreThreshold, jfloat reliabilityThreshold)
{
    
    static const char method_name[] = "ximgproc::findEllipses_11()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& ellipses = *((Mat*)ellipses_nativeObj);
        cv::ximgproc::findEllipses( image, ellipses, (float)scoreThreshold, (float)reliabilityThreshold );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_findEllipses_12 (JNIEnv*, jclass, jlong, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_findEllipses_12
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong ellipses_nativeObj, jfloat scoreThreshold)
{
    
    static const char method_name[] = "ximgproc::findEllipses_12()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& ellipses = *((Mat*)ellipses_nativeObj);
        cv::ximgproc::findEllipses( image, ellipses, (float)scoreThreshold );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_findEllipses_13 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_findEllipses_13
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong ellipses_nativeObj)
{
    
    static const char method_name[] = "ximgproc::findEllipses_13()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& ellipses = *((Mat*)ellipses_nativeObj);
        cv::ximgproc::findEllipses( image, ellipses );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  Ptr_RFFeatureGetter cv::ximgproc::createRFFeatureGetter()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createRFFeatureGetter_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createRFFeatureGetter_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "ximgproc::createRFFeatureGetter_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::RFFeatureGetter> Ptr_RFFeatureGetter;
        Ptr_RFFeatureGetter _retval_ = cv::ximgproc::createRFFeatureGetter();
        return (jlong)(new Ptr_RFFeatureGetter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_StructuredEdgeDetection cv::ximgproc::createStructuredEdgeDetection(String model, Ptr_RFFeatureGetter howToGetFeatures = Ptr<RFFeatureGetter>())
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createStructuredEdgeDetection_10 (JNIEnv*, jclass, jstring, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createStructuredEdgeDetection_10
  (JNIEnv* env, jclass , jstring model, jlong howToGetFeatures_nativeObj)
{
    
    static const char method_name[] = "ximgproc::createStructuredEdgeDetection_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::StructuredEdgeDetection> Ptr_StructuredEdgeDetection;
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        Ptr_StructuredEdgeDetection _retval_ = cv::ximgproc::createStructuredEdgeDetection( n_model, *((Ptr<cv::ximgproc::RFFeatureGetter>*)howToGetFeatures_nativeObj) );
        return (jlong)(new Ptr_StructuredEdgeDetection(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createStructuredEdgeDetection_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createStructuredEdgeDetection_11
  (JNIEnv* env, jclass , jstring model)
{
    
    static const char method_name[] = "ximgproc::createStructuredEdgeDetection_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::StructuredEdgeDetection> Ptr_StructuredEdgeDetection;
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        Ptr_StructuredEdgeDetection _retval_ = cv::ximgproc::createStructuredEdgeDetection( n_model );
        return (jlong)(new Ptr_StructuredEdgeDetection(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::PeiLinNormalization(Mat I, Mat& T)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_PeiLinNormalization_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_PeiLinNormalization_10
  (JNIEnv* env, jclass , jlong I_nativeObj, jlong T_nativeObj)
{
    
    static const char method_name[] = "ximgproc::PeiLinNormalization_10()";
    try {
        LOGD("%s", method_name);
        Mat& I = *((Mat*)I_nativeObj);
        Mat& T = *((Mat*)T_nativeObj);
        cv::ximgproc::PeiLinNormalization( I, T );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::weightedMedianFilter(Mat joint, Mat src, Mat& dst, int r, double sigma = 25.5, int weightType = WMF_EXP, Mat mask = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_weightedMedianFilter_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jdouble, jint, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_weightedMedianFilter_10
  (JNIEnv* env, jclass , jlong joint_nativeObj, jlong src_nativeObj, jlong dst_nativeObj, jint r, jdouble sigma, jint weightType, jlong mask_nativeObj)
{
    
    static const char method_name[] = "ximgproc::weightedMedianFilter_10()";
    try {
        LOGD("%s", method_name);
        Mat& joint = *((Mat*)joint_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::ximgproc::weightedMedianFilter( joint, src, dst, (int)r, (double)sigma, (int)weightType, mask );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_weightedMedianFilter_11 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_weightedMedianFilter_11
  (JNIEnv* env, jclass , jlong joint_nativeObj, jlong src_nativeObj, jlong dst_nativeObj, jint r, jdouble sigma, jint weightType)
{
    
    static const char method_name[] = "ximgproc::weightedMedianFilter_11()";
    try {
        LOGD("%s", method_name);
        Mat& joint = *((Mat*)joint_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::weightedMedianFilter( joint, src, dst, (int)r, (double)sigma, (int)weightType );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_weightedMedianFilter_12 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_weightedMedianFilter_12
  (JNIEnv* env, jclass , jlong joint_nativeObj, jlong src_nativeObj, jlong dst_nativeObj, jint r, jdouble sigma)
{
    
    static const char method_name[] = "ximgproc::weightedMedianFilter_12()";
    try {
        LOGD("%s", method_name);
        Mat& joint = *((Mat*)joint_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::weightedMedianFilter( joint, src, dst, (int)r, (double)sigma );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_weightedMedianFilter_13 (JNIEnv*, jclass, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_weightedMedianFilter_13
  (JNIEnv* env, jclass , jlong joint_nativeObj, jlong src_nativeObj, jlong dst_nativeObj, jint r)
{
    
    static const char method_name[] = "ximgproc::weightedMedianFilter_13()";
    try {
        LOGD("%s", method_name);
        Mat& joint = *((Mat*)joint_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::weightedMedianFilter( joint, src, dst, (int)r );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  Ptr_EdgeAwareInterpolator cv::ximgproc::createEdgeAwareInterpolator()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeAwareInterpolator_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeAwareInterpolator_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "ximgproc::createEdgeAwareInterpolator_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::EdgeAwareInterpolator> Ptr_EdgeAwareInterpolator;
        Ptr_EdgeAwareInterpolator _retval_ = cv::ximgproc::createEdgeAwareInterpolator();
        return (jlong)(new Ptr_EdgeAwareInterpolator(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_RICInterpolator cv::ximgproc::createRICInterpolator()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createRICInterpolator_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createRICInterpolator_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "ximgproc::createRICInterpolator_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::RICInterpolator> Ptr_RICInterpolator;
        Ptr_RICInterpolator _retval_ = cv::ximgproc::createRICInterpolator();
        return (jlong)(new Ptr_RICInterpolator(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_SuperpixelLSC cv::ximgproc::createSuperpixelLSC(Mat image, int region_size = 10, float ratio = 0.075f)
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSuperpixelLSC_10 (JNIEnv*, jclass, jlong, jint, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSuperpixelLSC_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jint region_size, jfloat ratio)
{
    
    static const char method_name[] = "ximgproc::createSuperpixelLSC_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::SuperpixelLSC> Ptr_SuperpixelLSC;
        Mat& image = *((Mat*)image_nativeObj);
        Ptr_SuperpixelLSC _retval_ = cv::ximgproc::createSuperpixelLSC( image, (int)region_size, (float)ratio );
        return (jlong)(new Ptr_SuperpixelLSC(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSuperpixelLSC_11 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSuperpixelLSC_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jint region_size)
{
    
    static const char method_name[] = "ximgproc::createSuperpixelLSC_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::SuperpixelLSC> Ptr_SuperpixelLSC;
        Mat& image = *((Mat*)image_nativeObj);
        Ptr_SuperpixelLSC _retval_ = cv::ximgproc::createSuperpixelLSC( image, (int)region_size );
        return (jlong)(new Ptr_SuperpixelLSC(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSuperpixelLSC_12 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSuperpixelLSC_12
  (JNIEnv* env, jclass , jlong image_nativeObj)
{
    
    static const char method_name[] = "ximgproc::createSuperpixelLSC_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::SuperpixelLSC> Ptr_SuperpixelLSC;
        Mat& image = *((Mat*)image_nativeObj);
        Ptr_SuperpixelLSC _retval_ = cv::ximgproc::createSuperpixelLSC( image );
        return (jlong)(new Ptr_SuperpixelLSC(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_FastLineDetector cv::ximgproc::createFastLineDetector(int length_threshold = 10, float distance_threshold = 1.414213562f, double canny_th1 = 50.0, double canny_th2 = 50.0, int canny_aperture_size = 3, bool do_merge = false)
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastLineDetector_10 (JNIEnv*, jclass, jint, jfloat, jdouble, jdouble, jint, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastLineDetector_10
  (JNIEnv* env, jclass , jint length_threshold, jfloat distance_threshold, jdouble canny_th1, jdouble canny_th2, jint canny_aperture_size, jboolean do_merge)
{
    
    static const char method_name[] = "ximgproc::createFastLineDetector_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::FastLineDetector> Ptr_FastLineDetector;
        Ptr_FastLineDetector _retval_ = cv::ximgproc::createFastLineDetector( (int)length_threshold, (float)distance_threshold, (double)canny_th1, (double)canny_th2, (int)canny_aperture_size, (bool)do_merge );
        return (jlong)(new Ptr_FastLineDetector(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastLineDetector_11 (JNIEnv*, jclass, jint, jfloat, jdouble, jdouble, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastLineDetector_11
  (JNIEnv* env, jclass , jint length_threshold, jfloat distance_threshold, jdouble canny_th1, jdouble canny_th2, jint canny_aperture_size)
{
    
    static const char method_name[] = "ximgproc::createFastLineDetector_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::FastLineDetector> Ptr_FastLineDetector;
        Ptr_FastLineDetector _retval_ = cv::ximgproc::createFastLineDetector( (int)length_threshold, (float)distance_threshold, (double)canny_th1, (double)canny_th2, (int)canny_aperture_size );
        return (jlong)(new Ptr_FastLineDetector(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastLineDetector_12 (JNIEnv*, jclass, jint, jfloat, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastLineDetector_12
  (JNIEnv* env, jclass , jint length_threshold, jfloat distance_threshold, jdouble canny_th1, jdouble canny_th2)
{
    
    static const char method_name[] = "ximgproc::createFastLineDetector_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::FastLineDetector> Ptr_FastLineDetector;
        Ptr_FastLineDetector _retval_ = cv::ximgproc::createFastLineDetector( (int)length_threshold, (float)distance_threshold, (double)canny_th1, (double)canny_th2 );
        return (jlong)(new Ptr_FastLineDetector(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastLineDetector_13 (JNIEnv*, jclass, jint, jfloat, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastLineDetector_13
  (JNIEnv* env, jclass , jint length_threshold, jfloat distance_threshold, jdouble canny_th1)
{
    
    static const char method_name[] = "ximgproc::createFastLineDetector_13()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::FastLineDetector> Ptr_FastLineDetector;
        Ptr_FastLineDetector _retval_ = cv::ximgproc::createFastLineDetector( (int)length_threshold, (float)distance_threshold, (double)canny_th1 );
        return (jlong)(new Ptr_FastLineDetector(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastLineDetector_14 (JNIEnv*, jclass, jint, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastLineDetector_14
  (JNIEnv* env, jclass , jint length_threshold, jfloat distance_threshold)
{
    
    static const char method_name[] = "ximgproc::createFastLineDetector_14()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::FastLineDetector> Ptr_FastLineDetector;
        Ptr_FastLineDetector _retval_ = cv::ximgproc::createFastLineDetector( (int)length_threshold, (float)distance_threshold );
        return (jlong)(new Ptr_FastLineDetector(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastLineDetector_15 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastLineDetector_15
  (JNIEnv* env, jclass , jint length_threshold)
{
    
    static const char method_name[] = "ximgproc::createFastLineDetector_15()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::FastLineDetector> Ptr_FastLineDetector;
        Ptr_FastLineDetector _retval_ = cv::ximgproc::createFastLineDetector( (int)length_threshold );
        return (jlong)(new Ptr_FastLineDetector(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastLineDetector_16 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastLineDetector_16
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "ximgproc::createFastLineDetector_16()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::FastLineDetector> Ptr_FastLineDetector;
        Ptr_FastLineDetector _retval_ = cv::ximgproc::createFastLineDetector();
        return (jlong)(new Ptr_FastLineDetector(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::edgePreservingFilter(Mat src, Mat& dst, int d, double threshold)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_edgePreservingFilter_10 (JNIEnv*, jclass, jlong, jlong, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_edgePreservingFilter_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint d, jdouble threshold)
{
    
    static const char method_name[] = "ximgproc::edgePreservingFilter_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::edgePreservingFilter( src, dst, (int)d, (double)threshold );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  Ptr_DTFilter cv::ximgproc::createDTFilter(Mat guide, double sigmaSpatial, double sigmaColor, int mode = DTF_NC, int numIters = 3)
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createDTFilter_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createDTFilter_10
  (JNIEnv* env, jclass , jlong guide_nativeObj, jdouble sigmaSpatial, jdouble sigmaColor, jint mode, jint numIters)
{
    
    static const char method_name[] = "ximgproc::createDTFilter_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::DTFilter> Ptr_DTFilter;
        Mat& guide = *((Mat*)guide_nativeObj);
        Ptr_DTFilter _retval_ = cv::ximgproc::createDTFilter( guide, (double)sigmaSpatial, (double)sigmaColor, (int)mode, (int)numIters );
        return (jlong)(new Ptr_DTFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createDTFilter_11 (JNIEnv*, jclass, jlong, jdouble, jdouble, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createDTFilter_11
  (JNIEnv* env, jclass , jlong guide_nativeObj, jdouble sigmaSpatial, jdouble sigmaColor, jint mode)
{
    
    static const char method_name[] = "ximgproc::createDTFilter_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::DTFilter> Ptr_DTFilter;
        Mat& guide = *((Mat*)guide_nativeObj);
        Ptr_DTFilter _retval_ = cv::ximgproc::createDTFilter( guide, (double)sigmaSpatial, (double)sigmaColor, (int)mode );
        return (jlong)(new Ptr_DTFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createDTFilter_12 (JNIEnv*, jclass, jlong, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createDTFilter_12
  (JNIEnv* env, jclass , jlong guide_nativeObj, jdouble sigmaSpatial, jdouble sigmaColor)
{
    
    static const char method_name[] = "ximgproc::createDTFilter_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::DTFilter> Ptr_DTFilter;
        Mat& guide = *((Mat*)guide_nativeObj);
        Ptr_DTFilter _retval_ = cv::ximgproc::createDTFilter( guide, (double)sigmaSpatial, (double)sigmaColor );
        return (jlong)(new Ptr_DTFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::dtFilter(Mat guide, Mat src, Mat& dst, double sigmaSpatial, double sigmaColor, int mode = DTF_NC, int numIters = 3)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_dtFilter_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_dtFilter_10
  (JNIEnv* env, jclass , jlong guide_nativeObj, jlong src_nativeObj, jlong dst_nativeObj, jdouble sigmaSpatial, jdouble sigmaColor, jint mode, jint numIters)
{
    
    static const char method_name[] = "ximgproc::dtFilter_10()";
    try {
        LOGD("%s", method_name);
        Mat& guide = *((Mat*)guide_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::dtFilter( guide, src, dst, (double)sigmaSpatial, (double)sigmaColor, (int)mode, (int)numIters );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_dtFilter_11 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_dtFilter_11
  (JNIEnv* env, jclass , jlong guide_nativeObj, jlong src_nativeObj, jlong dst_nativeObj, jdouble sigmaSpatial, jdouble sigmaColor, jint mode)
{
    
    static const char method_name[] = "ximgproc::dtFilter_11()";
    try {
        LOGD("%s", method_name);
        Mat& guide = *((Mat*)guide_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::dtFilter( guide, src, dst, (double)sigmaSpatial, (double)sigmaColor, (int)mode );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_dtFilter_12 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_dtFilter_12
  (JNIEnv* env, jclass , jlong guide_nativeObj, jlong src_nativeObj, jlong dst_nativeObj, jdouble sigmaSpatial, jdouble sigmaColor)
{
    
    static const char method_name[] = "ximgproc::dtFilter_12()";
    try {
        LOGD("%s", method_name);
        Mat& guide = *((Mat*)guide_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::dtFilter( guide, src, dst, (double)sigmaSpatial, (double)sigmaColor );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  Ptr_GuidedFilter cv::ximgproc::createGuidedFilter(Mat guide, int radius, double eps, double scale = 1.0)
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createGuidedFilter_10 (JNIEnv*, jclass, jlong, jint, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createGuidedFilter_10
  (JNIEnv* env, jclass , jlong guide_nativeObj, jint radius, jdouble eps, jdouble scale)
{
    
    static const char method_name[] = "ximgproc::createGuidedFilter_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::GuidedFilter> Ptr_GuidedFilter;
        Mat& guide = *((Mat*)guide_nativeObj);
        Ptr_GuidedFilter _retval_ = cv::ximgproc::createGuidedFilter( guide, (int)radius, (double)eps, (double)scale );
        return (jlong)(new Ptr_GuidedFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createGuidedFilter_11 (JNIEnv*, jclass, jlong, jint, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createGuidedFilter_11
  (JNIEnv* env, jclass , jlong guide_nativeObj, jint radius, jdouble eps)
{
    
    static const char method_name[] = "ximgproc::createGuidedFilter_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::GuidedFilter> Ptr_GuidedFilter;
        Mat& guide = *((Mat*)guide_nativeObj);
        Ptr_GuidedFilter _retval_ = cv::ximgproc::createGuidedFilter( guide, (int)radius, (double)eps );
        return (jlong)(new Ptr_GuidedFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::guidedFilter(Mat guide, Mat src, Mat& dst, int radius, double eps, int dDepth = -1, double scale = 1.0)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_guidedFilter_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jdouble, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_guidedFilter_10
  (JNIEnv* env, jclass , jlong guide_nativeObj, jlong src_nativeObj, jlong dst_nativeObj, jint radius, jdouble eps, jint dDepth, jdouble scale)
{
    
    static const char method_name[] = "ximgproc::guidedFilter_10()";
    try {
        LOGD("%s", method_name);
        Mat& guide = *((Mat*)guide_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::guidedFilter( guide, src, dst, (int)radius, (double)eps, (int)dDepth, (double)scale );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_guidedFilter_11 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_guidedFilter_11
  (JNIEnv* env, jclass , jlong guide_nativeObj, jlong src_nativeObj, jlong dst_nativeObj, jint radius, jdouble eps, jint dDepth)
{
    
    static const char method_name[] = "ximgproc::guidedFilter_11()";
    try {
        LOGD("%s", method_name);
        Mat& guide = *((Mat*)guide_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::guidedFilter( guide, src, dst, (int)radius, (double)eps, (int)dDepth );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_guidedFilter_12 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_guidedFilter_12
  (JNIEnv* env, jclass , jlong guide_nativeObj, jlong src_nativeObj, jlong dst_nativeObj, jint radius, jdouble eps)
{
    
    static const char method_name[] = "ximgproc::guidedFilter_12()";
    try {
        LOGD("%s", method_name);
        Mat& guide = *((Mat*)guide_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::guidedFilter( guide, src, dst, (int)radius, (double)eps );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  Ptr_AdaptiveManifoldFilter cv::ximgproc::createAMFilter(double sigma_s, double sigma_r, bool adjust_outliers = false)
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createAMFilter_10 (JNIEnv*, jclass, jdouble, jdouble, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createAMFilter_10
  (JNIEnv* env, jclass , jdouble sigma_s, jdouble sigma_r, jboolean adjust_outliers)
{
    
    static const char method_name[] = "ximgproc::createAMFilter_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::AdaptiveManifoldFilter> Ptr_AdaptiveManifoldFilter;
        Ptr_AdaptiveManifoldFilter _retval_ = cv::ximgproc::createAMFilter( (double)sigma_s, (double)sigma_r, (bool)adjust_outliers );
        return (jlong)(new Ptr_AdaptiveManifoldFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createAMFilter_11 (JNIEnv*, jclass, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createAMFilter_11
  (JNIEnv* env, jclass , jdouble sigma_s, jdouble sigma_r)
{
    
    static const char method_name[] = "ximgproc::createAMFilter_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::AdaptiveManifoldFilter> Ptr_AdaptiveManifoldFilter;
        Ptr_AdaptiveManifoldFilter _retval_ = cv::ximgproc::createAMFilter( (double)sigma_s, (double)sigma_r );
        return (jlong)(new Ptr_AdaptiveManifoldFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::amFilter(Mat joint, Mat src, Mat& dst, double sigma_s, double sigma_r, bool adjust_outliers = false)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_amFilter_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_amFilter_10
  (JNIEnv* env, jclass , jlong joint_nativeObj, jlong src_nativeObj, jlong dst_nativeObj, jdouble sigma_s, jdouble sigma_r, jboolean adjust_outliers)
{
    
    static const char method_name[] = "ximgproc::amFilter_10()";
    try {
        LOGD("%s", method_name);
        Mat& joint = *((Mat*)joint_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::amFilter( joint, src, dst, (double)sigma_s, (double)sigma_r, (bool)adjust_outliers );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_amFilter_11 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_amFilter_11
  (JNIEnv* env, jclass , jlong joint_nativeObj, jlong src_nativeObj, jlong dst_nativeObj, jdouble sigma_s, jdouble sigma_r)
{
    
    static const char method_name[] = "ximgproc::amFilter_11()";
    try {
        LOGD("%s", method_name);
        Mat& joint = *((Mat*)joint_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::amFilter( joint, src, dst, (double)sigma_s, (double)sigma_r );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::jointBilateralFilter(Mat joint, Mat src, Mat& dst, int d, double sigmaColor, double sigmaSpace, int borderType = BORDER_DEFAULT)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_jointBilateralFilter_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_jointBilateralFilter_10
  (JNIEnv* env, jclass , jlong joint_nativeObj, jlong src_nativeObj, jlong dst_nativeObj, jint d, jdouble sigmaColor, jdouble sigmaSpace, jint borderType)
{
    
    static const char method_name[] = "ximgproc::jointBilateralFilter_10()";
    try {
        LOGD("%s", method_name);
        Mat& joint = *((Mat*)joint_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::jointBilateralFilter( joint, src, dst, (int)d, (double)sigmaColor, (double)sigmaSpace, (int)borderType );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_jointBilateralFilter_11 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_jointBilateralFilter_11
  (JNIEnv* env, jclass , jlong joint_nativeObj, jlong src_nativeObj, jlong dst_nativeObj, jint d, jdouble sigmaColor, jdouble sigmaSpace)
{
    
    static const char method_name[] = "ximgproc::jointBilateralFilter_11()";
    try {
        LOGD("%s", method_name);
        Mat& joint = *((Mat*)joint_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::jointBilateralFilter( joint, src, dst, (int)d, (double)sigmaColor, (double)sigmaSpace );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::bilateralTextureFilter(Mat src, Mat& dst, int fr = 3, int numIter = 1, double sigmaAlpha = -1., double sigmaAvg = -1.)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_bilateralTextureFilter_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_bilateralTextureFilter_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint fr, jint numIter, jdouble sigmaAlpha, jdouble sigmaAvg)
{
    
    static const char method_name[] = "ximgproc::bilateralTextureFilter_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::bilateralTextureFilter( src, dst, (int)fr, (int)numIter, (double)sigmaAlpha, (double)sigmaAvg );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_bilateralTextureFilter_11 (JNIEnv*, jclass, jlong, jlong, jint, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_bilateralTextureFilter_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint fr, jint numIter, jdouble sigmaAlpha)
{
    
    static const char method_name[] = "ximgproc::bilateralTextureFilter_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::bilateralTextureFilter( src, dst, (int)fr, (int)numIter, (double)sigmaAlpha );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_bilateralTextureFilter_12 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_bilateralTextureFilter_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint fr, jint numIter)
{
    
    static const char method_name[] = "ximgproc::bilateralTextureFilter_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::bilateralTextureFilter( src, dst, (int)fr, (int)numIter );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_bilateralTextureFilter_13 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_bilateralTextureFilter_13
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint fr)
{
    
    static const char method_name[] = "ximgproc::bilateralTextureFilter_13()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::bilateralTextureFilter( src, dst, (int)fr );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_bilateralTextureFilter_14 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_bilateralTextureFilter_14
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    
    static const char method_name[] = "ximgproc::bilateralTextureFilter_14()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::bilateralTextureFilter( src, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::rollingGuidanceFilter(Mat src, Mat& dst, int d = -1, double sigmaColor = 25, double sigmaSpace = 3, int numOfIter = 4, int borderType = BORDER_DEFAULT)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_rollingGuidanceFilter_10 (JNIEnv*, jclass, jlong, jlong, jint, jdouble, jdouble, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_rollingGuidanceFilter_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint d, jdouble sigmaColor, jdouble sigmaSpace, jint numOfIter, jint borderType)
{
    
    static const char method_name[] = "ximgproc::rollingGuidanceFilter_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::rollingGuidanceFilter( src, dst, (int)d, (double)sigmaColor, (double)sigmaSpace, (int)numOfIter, (int)borderType );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_rollingGuidanceFilter_11 (JNIEnv*, jclass, jlong, jlong, jint, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_rollingGuidanceFilter_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint d, jdouble sigmaColor, jdouble sigmaSpace, jint numOfIter)
{
    
    static const char method_name[] = "ximgproc::rollingGuidanceFilter_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::rollingGuidanceFilter( src, dst, (int)d, (double)sigmaColor, (double)sigmaSpace, (int)numOfIter );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_rollingGuidanceFilter_12 (JNIEnv*, jclass, jlong, jlong, jint, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_rollingGuidanceFilter_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint d, jdouble sigmaColor, jdouble sigmaSpace)
{
    
    static const char method_name[] = "ximgproc::rollingGuidanceFilter_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::rollingGuidanceFilter( src, dst, (int)d, (double)sigmaColor, (double)sigmaSpace );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_rollingGuidanceFilter_13 (JNIEnv*, jclass, jlong, jlong, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_rollingGuidanceFilter_13
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint d, jdouble sigmaColor)
{
    
    static const char method_name[] = "ximgproc::rollingGuidanceFilter_13()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::rollingGuidanceFilter( src, dst, (int)d, (double)sigmaColor );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_rollingGuidanceFilter_14 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_rollingGuidanceFilter_14
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint d)
{
    
    static const char method_name[] = "ximgproc::rollingGuidanceFilter_14()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::rollingGuidanceFilter( src, dst, (int)d );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_rollingGuidanceFilter_15 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_rollingGuidanceFilter_15
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    
    static const char method_name[] = "ximgproc::rollingGuidanceFilter_15()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::rollingGuidanceFilter( src, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  Ptr_FastBilateralSolverFilter cv::ximgproc::createFastBilateralSolverFilter(Mat guide, double sigma_spatial, double sigma_luma, double sigma_chroma, double lambda = 128.0, int num_iter = 25, double max_tol = 1e-5)
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastBilateralSolverFilter_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jint, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastBilateralSolverFilter_10
  (JNIEnv* env, jclass , jlong guide_nativeObj, jdouble sigma_spatial, jdouble sigma_luma, jdouble sigma_chroma, jdouble lambda, jint num_iter, jdouble max_tol)
{
    
    static const char method_name[] = "ximgproc::createFastBilateralSolverFilter_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::FastBilateralSolverFilter> Ptr_FastBilateralSolverFilter;
        Mat& guide = *((Mat*)guide_nativeObj);
        Ptr_FastBilateralSolverFilter _retval_ = cv::ximgproc::createFastBilateralSolverFilter( guide, (double)sigma_spatial, (double)sigma_luma, (double)sigma_chroma, (double)lambda, (int)num_iter, (double)max_tol );
        return (jlong)(new Ptr_FastBilateralSolverFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastBilateralSolverFilter_11 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastBilateralSolverFilter_11
  (JNIEnv* env, jclass , jlong guide_nativeObj, jdouble sigma_spatial, jdouble sigma_luma, jdouble sigma_chroma, jdouble lambda, jint num_iter)
{
    
    static const char method_name[] = "ximgproc::createFastBilateralSolverFilter_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::FastBilateralSolverFilter> Ptr_FastBilateralSolverFilter;
        Mat& guide = *((Mat*)guide_nativeObj);
        Ptr_FastBilateralSolverFilter _retval_ = cv::ximgproc::createFastBilateralSolverFilter( guide, (double)sigma_spatial, (double)sigma_luma, (double)sigma_chroma, (double)lambda, (int)num_iter );
        return (jlong)(new Ptr_FastBilateralSolverFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastBilateralSolverFilter_12 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastBilateralSolverFilter_12
  (JNIEnv* env, jclass , jlong guide_nativeObj, jdouble sigma_spatial, jdouble sigma_luma, jdouble sigma_chroma, jdouble lambda)
{
    
    static const char method_name[] = "ximgproc::createFastBilateralSolverFilter_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::FastBilateralSolverFilter> Ptr_FastBilateralSolverFilter;
        Mat& guide = *((Mat*)guide_nativeObj);
        Ptr_FastBilateralSolverFilter _retval_ = cv::ximgproc::createFastBilateralSolverFilter( guide, (double)sigma_spatial, (double)sigma_luma, (double)sigma_chroma, (double)lambda );
        return (jlong)(new Ptr_FastBilateralSolverFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastBilateralSolverFilter_13 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastBilateralSolverFilter_13
  (JNIEnv* env, jclass , jlong guide_nativeObj, jdouble sigma_spatial, jdouble sigma_luma, jdouble sigma_chroma)
{
    
    static const char method_name[] = "ximgproc::createFastBilateralSolverFilter_13()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::FastBilateralSolverFilter> Ptr_FastBilateralSolverFilter;
        Mat& guide = *((Mat*)guide_nativeObj);
        Ptr_FastBilateralSolverFilter _retval_ = cv::ximgproc::createFastBilateralSolverFilter( guide, (double)sigma_spatial, (double)sigma_luma, (double)sigma_chroma );
        return (jlong)(new Ptr_FastBilateralSolverFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::fastBilateralSolverFilter(Mat guide, Mat src, Mat confidence, Mat& dst, double sigma_spatial = 8, double sigma_luma = 8, double sigma_chroma = 8, double lambda = 128.0, int num_iter = 25, double max_tol = 1e-5)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fastBilateralSolverFilter_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fastBilateralSolverFilter_10
  (JNIEnv* env, jclass , jlong guide_nativeObj, jlong src_nativeObj, jlong confidence_nativeObj, jlong dst_nativeObj, jdouble sigma_spatial, jdouble sigma_luma, jdouble sigma_chroma, jdouble lambda, jint num_iter, jdouble max_tol)
{
    
    static const char method_name[] = "ximgproc::fastBilateralSolverFilter_10()";
    try {
        LOGD("%s", method_name);
        Mat& guide = *((Mat*)guide_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& confidence = *((Mat*)confidence_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::fastBilateralSolverFilter( guide, src, confidence, dst, (double)sigma_spatial, (double)sigma_luma, (double)sigma_chroma, (double)lambda, (int)num_iter, (double)max_tol );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fastBilateralSolverFilter_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fastBilateralSolverFilter_11
  (JNIEnv* env, jclass , jlong guide_nativeObj, jlong src_nativeObj, jlong confidence_nativeObj, jlong dst_nativeObj, jdouble sigma_spatial, jdouble sigma_luma, jdouble sigma_chroma, jdouble lambda, jint num_iter)
{
    
    static const char method_name[] = "ximgproc::fastBilateralSolverFilter_11()";
    try {
        LOGD("%s", method_name);
        Mat& guide = *((Mat*)guide_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& confidence = *((Mat*)confidence_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::fastBilateralSolverFilter( guide, src, confidence, dst, (double)sigma_spatial, (double)sigma_luma, (double)sigma_chroma, (double)lambda, (int)num_iter );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fastBilateralSolverFilter_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fastBilateralSolverFilter_12
  (JNIEnv* env, jclass , jlong guide_nativeObj, jlong src_nativeObj, jlong confidence_nativeObj, jlong dst_nativeObj, jdouble sigma_spatial, jdouble sigma_luma, jdouble sigma_chroma, jdouble lambda)
{
    
    static const char method_name[] = "ximgproc::fastBilateralSolverFilter_12()";
    try {
        LOGD("%s", method_name);
        Mat& guide = *((Mat*)guide_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& confidence = *((Mat*)confidence_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::fastBilateralSolverFilter( guide, src, confidence, dst, (double)sigma_spatial, (double)sigma_luma, (double)sigma_chroma, (double)lambda );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fastBilateralSolverFilter_13 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fastBilateralSolverFilter_13
  (JNIEnv* env, jclass , jlong guide_nativeObj, jlong src_nativeObj, jlong confidence_nativeObj, jlong dst_nativeObj, jdouble sigma_spatial, jdouble sigma_luma, jdouble sigma_chroma)
{
    
    static const char method_name[] = "ximgproc::fastBilateralSolverFilter_13()";
    try {
        LOGD("%s", method_name);
        Mat& guide = *((Mat*)guide_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& confidence = *((Mat*)confidence_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::fastBilateralSolverFilter( guide, src, confidence, dst, (double)sigma_spatial, (double)sigma_luma, (double)sigma_chroma );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fastBilateralSolverFilter_14 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fastBilateralSolverFilter_14
  (JNIEnv* env, jclass , jlong guide_nativeObj, jlong src_nativeObj, jlong confidence_nativeObj, jlong dst_nativeObj, jdouble sigma_spatial, jdouble sigma_luma)
{
    
    static const char method_name[] = "ximgproc::fastBilateralSolverFilter_14()";
    try {
        LOGD("%s", method_name);
        Mat& guide = *((Mat*)guide_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& confidence = *((Mat*)confidence_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::fastBilateralSolverFilter( guide, src, confidence, dst, (double)sigma_spatial, (double)sigma_luma );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fastBilateralSolverFilter_15 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fastBilateralSolverFilter_15
  (JNIEnv* env, jclass , jlong guide_nativeObj, jlong src_nativeObj, jlong confidence_nativeObj, jlong dst_nativeObj, jdouble sigma_spatial)
{
    
    static const char method_name[] = "ximgproc::fastBilateralSolverFilter_15()";
    try {
        LOGD("%s", method_name);
        Mat& guide = *((Mat*)guide_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& confidence = *((Mat*)confidence_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::fastBilateralSolverFilter( guide, src, confidence, dst, (double)sigma_spatial );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fastBilateralSolverFilter_16 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fastBilateralSolverFilter_16
  (JNIEnv* env, jclass , jlong guide_nativeObj, jlong src_nativeObj, jlong confidence_nativeObj, jlong dst_nativeObj)
{
    
    static const char method_name[] = "ximgproc::fastBilateralSolverFilter_16()";
    try {
        LOGD("%s", method_name);
        Mat& guide = *((Mat*)guide_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& confidence = *((Mat*)confidence_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::fastBilateralSolverFilter( guide, src, confidence, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  Ptr_FastGlobalSmootherFilter cv::ximgproc::createFastGlobalSmootherFilter(Mat guide, double lambda, double sigma_color, double lambda_attenuation = 0.25, int num_iter = 3)
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastGlobalSmootherFilter_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastGlobalSmootherFilter_10
  (JNIEnv* env, jclass , jlong guide_nativeObj, jdouble lambda, jdouble sigma_color, jdouble lambda_attenuation, jint num_iter)
{
    
    static const char method_name[] = "ximgproc::createFastGlobalSmootherFilter_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::FastGlobalSmootherFilter> Ptr_FastGlobalSmootherFilter;
        Mat& guide = *((Mat*)guide_nativeObj);
        Ptr_FastGlobalSmootherFilter _retval_ = cv::ximgproc::createFastGlobalSmootherFilter( guide, (double)lambda, (double)sigma_color, (double)lambda_attenuation, (int)num_iter );
        return (jlong)(new Ptr_FastGlobalSmootherFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastGlobalSmootherFilter_11 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastGlobalSmootherFilter_11
  (JNIEnv* env, jclass , jlong guide_nativeObj, jdouble lambda, jdouble sigma_color, jdouble lambda_attenuation)
{
    
    static const char method_name[] = "ximgproc::createFastGlobalSmootherFilter_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::FastGlobalSmootherFilter> Ptr_FastGlobalSmootherFilter;
        Mat& guide = *((Mat*)guide_nativeObj);
        Ptr_FastGlobalSmootherFilter _retval_ = cv::ximgproc::createFastGlobalSmootherFilter( guide, (double)lambda, (double)sigma_color, (double)lambda_attenuation );
        return (jlong)(new Ptr_FastGlobalSmootherFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastGlobalSmootherFilter_12 (JNIEnv*, jclass, jlong, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createFastGlobalSmootherFilter_12
  (JNIEnv* env, jclass , jlong guide_nativeObj, jdouble lambda, jdouble sigma_color)
{
    
    static const char method_name[] = "ximgproc::createFastGlobalSmootherFilter_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::FastGlobalSmootherFilter> Ptr_FastGlobalSmootherFilter;
        Mat& guide = *((Mat*)guide_nativeObj);
        Ptr_FastGlobalSmootherFilter _retval_ = cv::ximgproc::createFastGlobalSmootherFilter( guide, (double)lambda, (double)sigma_color );
        return (jlong)(new Ptr_FastGlobalSmootherFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::fastGlobalSmootherFilter(Mat guide, Mat src, Mat& dst, double lambda, double sigma_color, double lambda_attenuation = 0.25, int num_iter = 3)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fastGlobalSmootherFilter_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fastGlobalSmootherFilter_10
  (JNIEnv* env, jclass , jlong guide_nativeObj, jlong src_nativeObj, jlong dst_nativeObj, jdouble lambda, jdouble sigma_color, jdouble lambda_attenuation, jint num_iter)
{
    
    static const char method_name[] = "ximgproc::fastGlobalSmootherFilter_10()";
    try {
        LOGD("%s", method_name);
        Mat& guide = *((Mat*)guide_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::fastGlobalSmootherFilter( guide, src, dst, (double)lambda, (double)sigma_color, (double)lambda_attenuation, (int)num_iter );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fastGlobalSmootherFilter_11 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fastGlobalSmootherFilter_11
  (JNIEnv* env, jclass , jlong guide_nativeObj, jlong src_nativeObj, jlong dst_nativeObj, jdouble lambda, jdouble sigma_color, jdouble lambda_attenuation)
{
    
    static const char method_name[] = "ximgproc::fastGlobalSmootherFilter_11()";
    try {
        LOGD("%s", method_name);
        Mat& guide = *((Mat*)guide_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::fastGlobalSmootherFilter( guide, src, dst, (double)lambda, (double)sigma_color, (double)lambda_attenuation );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fastGlobalSmootherFilter_12 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fastGlobalSmootherFilter_12
  (JNIEnv* env, jclass , jlong guide_nativeObj, jlong src_nativeObj, jlong dst_nativeObj, jdouble lambda, jdouble sigma_color)
{
    
    static const char method_name[] = "ximgproc::fastGlobalSmootherFilter_12()";
    try {
        LOGD("%s", method_name);
        Mat& guide = *((Mat*)guide_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::fastGlobalSmootherFilter( guide, src, dst, (double)lambda, (double)sigma_color );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::l0Smooth(Mat src, Mat& dst, double lambda = 0.02, double kappa = 2.0)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_l0Smooth_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_l0Smooth_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble lambda, jdouble kappa)
{
    
    static const char method_name[] = "ximgproc::l0Smooth_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::l0Smooth( src, dst, (double)lambda, (double)kappa );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_l0Smooth_11 (JNIEnv*, jclass, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_l0Smooth_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble lambda)
{
    
    static const char method_name[] = "ximgproc::l0Smooth_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::l0Smooth( src, dst, (double)lambda );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_l0Smooth_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_l0Smooth_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    
    static const char method_name[] = "ximgproc::l0Smooth_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::l0Smooth( src, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  Ptr_DisparityWLSFilter cv::ximgproc::createDisparityWLSFilter(Ptr_StereoMatcher matcher_left)
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createDisparityWLSFilter_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createDisparityWLSFilter_10
  (JNIEnv* env, jclass , jlong matcher_left_nativeObj)
{
    
    static const char method_name[] = "ximgproc::createDisparityWLSFilter_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::DisparityWLSFilter> Ptr_DisparityWLSFilter;
        Ptr_DisparityWLSFilter _retval_ = cv::ximgproc::createDisparityWLSFilter( *((Ptr<cv::StereoMatcher>*)matcher_left_nativeObj) );
        return (jlong)(new Ptr_DisparityWLSFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_StereoMatcher cv::ximgproc::createRightMatcher(Ptr_StereoMatcher matcher_left)
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createRightMatcher_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createRightMatcher_10
  (JNIEnv* env, jclass , jlong matcher_left_nativeObj)
{
    
    static const char method_name[] = "ximgproc::createRightMatcher_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<StereoMatcher> Ptr_StereoMatcher;
        Ptr_StereoMatcher _retval_ = cv::ximgproc::createRightMatcher( *((Ptr<cv::StereoMatcher>*)matcher_left_nativeObj) );
        return (jlong)(new Ptr_StereoMatcher(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_DisparityWLSFilter cv::ximgproc::createDisparityWLSFilterGeneric(bool use_confidence)
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createDisparityWLSFilterGeneric_10 (JNIEnv*, jclass, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createDisparityWLSFilterGeneric_10
  (JNIEnv* env, jclass , jboolean use_confidence)
{
    
    static const char method_name[] = "ximgproc::createDisparityWLSFilterGeneric_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::DisparityWLSFilter> Ptr_DisparityWLSFilter;
        Ptr_DisparityWLSFilter _retval_ = cv::ximgproc::createDisparityWLSFilterGeneric( (bool)use_confidence );
        return (jlong)(new Ptr_DisparityWLSFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::ximgproc::readGT(String src_path, Mat& dst)
//

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_Ximgproc_readGT_10 (JNIEnv*, jclass, jstring, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_Ximgproc_readGT_10
  (JNIEnv* env, jclass , jstring src_path, jlong dst_nativeObj)
{
    
    static const char method_name[] = "ximgproc::readGT_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_src_path = env->GetStringUTFChars(src_path, 0); String n_src_path( utf_src_path ? utf_src_path : "" ); env->ReleaseStringUTFChars(src_path, utf_src_path);
        Mat& dst = *((Mat*)dst_nativeObj);
        return cv::ximgproc::readGT( n_src_path, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double cv::ximgproc::computeMSE(Mat GT, Mat src, Rect ROI)
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ximgproc_Ximgproc_computeMSE_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_ximgproc_Ximgproc_computeMSE_10
  (JNIEnv* env, jclass , jlong GT_nativeObj, jlong src_nativeObj, jint ROI_x, jint ROI_y, jint ROI_width, jint ROI_height)
{
    
    static const char method_name[] = "ximgproc::computeMSE_10()";
    try {
        LOGD("%s", method_name);
        Mat& GT = *((Mat*)GT_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Rect ROI(ROI_x, ROI_y, ROI_width, ROI_height);
        return cv::ximgproc::computeMSE( GT, src, ROI );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double cv::ximgproc::computeBadPixelPercent(Mat GT, Mat src, Rect ROI, int thresh = 24)
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ximgproc_Ximgproc_computeBadPixelPercent_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint, jint, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_ximgproc_Ximgproc_computeBadPixelPercent_10
  (JNIEnv* env, jclass , jlong GT_nativeObj, jlong src_nativeObj, jint ROI_x, jint ROI_y, jint ROI_width, jint ROI_height, jint thresh)
{
    
    static const char method_name[] = "ximgproc::computeBadPixelPercent_10()";
    try {
        LOGD("%s", method_name);
        Mat& GT = *((Mat*)GT_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Rect ROI(ROI_x, ROI_y, ROI_width, ROI_height);
        return cv::ximgproc::computeBadPixelPercent( GT, src, ROI, (int)thresh );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdouble JNICALL Java_org_opencv_ximgproc_Ximgproc_computeBadPixelPercent_11 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_ximgproc_Ximgproc_computeBadPixelPercent_11
  (JNIEnv* env, jclass , jlong GT_nativeObj, jlong src_nativeObj, jint ROI_x, jint ROI_y, jint ROI_width, jint ROI_height)
{
    
    static const char method_name[] = "ximgproc::computeBadPixelPercent_11()";
    try {
        LOGD("%s", method_name);
        Mat& GT = *((Mat*)GT_nativeObj);
        Mat& src = *((Mat*)src_nativeObj);
        Rect ROI(ROI_x, ROI_y, ROI_width, ROI_height);
        return cv::ximgproc::computeBadPixelPercent( GT, src, ROI );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::getDisparityVis(Mat src, Mat& dst, double scale = 1.0)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_getDisparityVis_10 (JNIEnv*, jclass, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_getDisparityVis_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble scale)
{
    
    static const char method_name[] = "ximgproc::getDisparityVis_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::getDisparityVis( src, dst, (double)scale );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_getDisparityVis_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_getDisparityVis_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    
    static const char method_name[] = "ximgproc::getDisparityVis_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::getDisparityVis( src, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::RadonTransform(Mat src, Mat& dst, double theta = 1, double start_angle = 0, double end_angle = 180, bool crop = false, bool norm = false)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_RadonTransform_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble, jboolean, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_RadonTransform_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble theta, jdouble start_angle, jdouble end_angle, jboolean crop, jboolean norm)
{
    
    static const char method_name[] = "ximgproc::RadonTransform_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::RadonTransform( src, dst, (double)theta, (double)start_angle, (double)end_angle, (bool)crop, (bool)norm );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_RadonTransform_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_RadonTransform_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble theta, jdouble start_angle, jdouble end_angle, jboolean crop)
{
    
    static const char method_name[] = "ximgproc::RadonTransform_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::RadonTransform( src, dst, (double)theta, (double)start_angle, (double)end_angle, (bool)crop );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_RadonTransform_12 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_RadonTransform_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble theta, jdouble start_angle, jdouble end_angle)
{
    
    static const char method_name[] = "ximgproc::RadonTransform_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::RadonTransform( src, dst, (double)theta, (double)start_angle, (double)end_angle );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_RadonTransform_13 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_RadonTransform_13
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble theta, jdouble start_angle)
{
    
    static const char method_name[] = "ximgproc::RadonTransform_13()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::RadonTransform( src, dst, (double)theta, (double)start_angle );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_RadonTransform_14 (JNIEnv*, jclass, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_RadonTransform_14
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble theta)
{
    
    static const char method_name[] = "ximgproc::RadonTransform_14()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::RadonTransform( src, dst, (double)theta );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_RadonTransform_15 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_RadonTransform_15
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    
    static const char method_name[] = "ximgproc::RadonTransform_15()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::RadonTransform( src, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  Ptr_SuperpixelSLIC cv::ximgproc::createSuperpixelSLIC(Mat image, int algorithm = SLICO, int region_size = 10, float ruler = 10.0f)
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSuperpixelSLIC_10 (JNIEnv*, jclass, jlong, jint, jint, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSuperpixelSLIC_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jint algorithm, jint region_size, jfloat ruler)
{
    
    static const char method_name[] = "ximgproc::createSuperpixelSLIC_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::SuperpixelSLIC> Ptr_SuperpixelSLIC;
        Mat& image = *((Mat*)image_nativeObj);
        Ptr_SuperpixelSLIC _retval_ = cv::ximgproc::createSuperpixelSLIC( image, (int)algorithm, (int)region_size, (float)ruler );
        return (jlong)(new Ptr_SuperpixelSLIC(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSuperpixelSLIC_11 (JNIEnv*, jclass, jlong, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSuperpixelSLIC_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jint algorithm, jint region_size)
{
    
    static const char method_name[] = "ximgproc::createSuperpixelSLIC_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::SuperpixelSLIC> Ptr_SuperpixelSLIC;
        Mat& image = *((Mat*)image_nativeObj);
        Ptr_SuperpixelSLIC _retval_ = cv::ximgproc::createSuperpixelSLIC( image, (int)algorithm, (int)region_size );
        return (jlong)(new Ptr_SuperpixelSLIC(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSuperpixelSLIC_12 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSuperpixelSLIC_12
  (JNIEnv* env, jclass , jlong image_nativeObj, jint algorithm)
{
    
    static const char method_name[] = "ximgproc::createSuperpixelSLIC_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::SuperpixelSLIC> Ptr_SuperpixelSLIC;
        Mat& image = *((Mat*)image_nativeObj);
        Ptr_SuperpixelSLIC _retval_ = cv::ximgproc::createSuperpixelSLIC( image, (int)algorithm );
        return (jlong)(new Ptr_SuperpixelSLIC(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSuperpixelSLIC_13 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSuperpixelSLIC_13
  (JNIEnv* env, jclass , jlong image_nativeObj)
{
    
    static const char method_name[] = "ximgproc::createSuperpixelSLIC_13()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::SuperpixelSLIC> Ptr_SuperpixelSLIC;
        Mat& image = *((Mat*)image_nativeObj);
        Ptr_SuperpixelSLIC _retval_ = cv::ximgproc::createSuperpixelSLIC( image );
        return (jlong)(new Ptr_SuperpixelSLIC(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::fourierDescriptor(Mat src, Mat& dst, int nbElt = -1, int nbFD = -1)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fourierDescriptor_10 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fourierDescriptor_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint nbElt, jint nbFD)
{
    
    static const char method_name[] = "ximgproc::fourierDescriptor_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::fourierDescriptor( src, dst, (int)nbElt, (int)nbFD );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fourierDescriptor_11 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fourierDescriptor_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint nbElt)
{
    
    static const char method_name[] = "ximgproc::fourierDescriptor_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::fourierDescriptor( src, dst, (int)nbElt );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fourierDescriptor_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_fourierDescriptor_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    
    static const char method_name[] = "ximgproc::fourierDescriptor_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::fourierDescriptor( src, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::transformFD(Mat src, Mat t, Mat& dst, bool fdContour = true)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_transformFD_10 (JNIEnv*, jclass, jlong, jlong, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_transformFD_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong t_nativeObj, jlong dst_nativeObj, jboolean fdContour)
{
    
    static const char method_name[] = "ximgproc::transformFD_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& t = *((Mat*)t_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::transformFD( src, t, dst, (bool)fdContour );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_transformFD_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_transformFD_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong t_nativeObj, jlong dst_nativeObj)
{
    
    static const char method_name[] = "ximgproc::transformFD_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& t = *((Mat*)t_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::transformFD( src, t, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::contourSampling(Mat src, Mat& out, int nbElt)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_contourSampling_10 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_contourSampling_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong out_nativeObj, jint nbElt)
{
    
    static const char method_name[] = "ximgproc::contourSampling_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& out = *((Mat*)out_nativeObj);
        cv::ximgproc::contourSampling( src, out, (int)nbElt );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  Ptr_ContourFitting cv::ximgproc::createContourFitting(int ctr = 1024, int fd = 16)
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createContourFitting_10 (JNIEnv*, jclass, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createContourFitting_10
  (JNIEnv* env, jclass , jint ctr, jint fd)
{
    
    static const char method_name[] = "ximgproc::createContourFitting_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::ContourFitting> Ptr_ContourFitting;
        Ptr_ContourFitting _retval_ = cv::ximgproc::createContourFitting( (int)ctr, (int)fd );
        return (jlong)(new Ptr_ContourFitting(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createContourFitting_11 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createContourFitting_11
  (JNIEnv* env, jclass , jint ctr)
{
    
    static const char method_name[] = "ximgproc::createContourFitting_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::ContourFitting> Ptr_ContourFitting;
        Ptr_ContourFitting _retval_ = cv::ximgproc::createContourFitting( (int)ctr );
        return (jlong)(new Ptr_ContourFitting(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createContourFitting_12 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createContourFitting_12
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "ximgproc::createContourFitting_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::ContourFitting> Ptr_ContourFitting;
        Ptr_ContourFitting _retval_ = cv::ximgproc::createContourFitting();
        return (jlong)(new Ptr_ContourFitting(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::createQuaternionImage(Mat img, Mat& qimg)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_createQuaternionImage_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_createQuaternionImage_10
  (JNIEnv* env, jclass , jlong img_nativeObj, jlong qimg_nativeObj)
{
    
    static const char method_name[] = "ximgproc::createQuaternionImage_10()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        Mat& qimg = *((Mat*)qimg_nativeObj);
        cv::ximgproc::createQuaternionImage( img, qimg );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::qconj(Mat qimg, Mat& qcimg)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_qconj_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_qconj_10
  (JNIEnv* env, jclass , jlong qimg_nativeObj, jlong qcimg_nativeObj)
{
    
    static const char method_name[] = "ximgproc::qconj_10()";
    try {
        LOGD("%s", method_name);
        Mat& qimg = *((Mat*)qimg_nativeObj);
        Mat& qcimg = *((Mat*)qcimg_nativeObj);
        cv::ximgproc::qconj( qimg, qcimg );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::qunitary(Mat qimg, Mat& qnimg)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_qunitary_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_qunitary_10
  (JNIEnv* env, jclass , jlong qimg_nativeObj, jlong qnimg_nativeObj)
{
    
    static const char method_name[] = "ximgproc::qunitary_10()";
    try {
        LOGD("%s", method_name);
        Mat& qimg = *((Mat*)qimg_nativeObj);
        Mat& qnimg = *((Mat*)qnimg_nativeObj);
        cv::ximgproc::qunitary( qimg, qnimg );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::qmultiply(Mat src1, Mat src2, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_qmultiply_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_qmultiply_10
  (JNIEnv* env, jclass , jlong src1_nativeObj, jlong src2_nativeObj, jlong dst_nativeObj)
{
    
    static const char method_name[] = "ximgproc::qmultiply_10()";
    try {
        LOGD("%s", method_name);
        Mat& src1 = *((Mat*)src1_nativeObj);
        Mat& src2 = *((Mat*)src2_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::qmultiply( src1, src2, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::qdft(Mat img, Mat& qimg, int flags, bool sideLeft)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_qdft_10 (JNIEnv*, jclass, jlong, jlong, jint, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_qdft_10
  (JNIEnv* env, jclass , jlong img_nativeObj, jlong qimg_nativeObj, jint flags, jboolean sideLeft)
{
    
    static const char method_name[] = "ximgproc::qdft_10()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        Mat& qimg = *((Mat*)qimg_nativeObj);
        cv::ximgproc::qdft( img, qimg, (int)flags, (bool)sideLeft );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::colorMatchTemplate(Mat img, Mat templ, Mat& result)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_colorMatchTemplate_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_colorMatchTemplate_10
  (JNIEnv* env, jclass , jlong img_nativeObj, jlong templ_nativeObj, jlong result_nativeObj)
{
    
    static const char method_name[] = "ximgproc::colorMatchTemplate_10()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        Mat& templ = *((Mat*)templ_nativeObj);
        Mat& result = *((Mat*)result_nativeObj);
        cv::ximgproc::colorMatchTemplate( img, templ, result );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  Ptr_GraphSegmentation cv::ximgproc::segmentation::createGraphSegmentation(double sigma = 0.5, float k = 300, int min_size = 100)
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createGraphSegmentation_10 (JNIEnv*, jclass, jdouble, jfloat, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createGraphSegmentation_10
  (JNIEnv* env, jclass , jdouble sigma, jfloat k, jint min_size)
{
    
    static const char method_name[] = "ximgproc::createGraphSegmentation_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::segmentation::GraphSegmentation> Ptr_GraphSegmentation;
        Ptr_GraphSegmentation _retval_ = cv::ximgproc::segmentation::createGraphSegmentation( (double)sigma, (float)k, (int)min_size );
        return (jlong)(new Ptr_GraphSegmentation(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createGraphSegmentation_11 (JNIEnv*, jclass, jdouble, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createGraphSegmentation_11
  (JNIEnv* env, jclass , jdouble sigma, jfloat k)
{
    
    static const char method_name[] = "ximgproc::createGraphSegmentation_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::segmentation::GraphSegmentation> Ptr_GraphSegmentation;
        Ptr_GraphSegmentation _retval_ = cv::ximgproc::segmentation::createGraphSegmentation( (double)sigma, (float)k );
        return (jlong)(new Ptr_GraphSegmentation(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createGraphSegmentation_12 (JNIEnv*, jclass, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createGraphSegmentation_12
  (JNIEnv* env, jclass , jdouble sigma)
{
    
    static const char method_name[] = "ximgproc::createGraphSegmentation_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::segmentation::GraphSegmentation> Ptr_GraphSegmentation;
        Ptr_GraphSegmentation _retval_ = cv::ximgproc::segmentation::createGraphSegmentation( (double)sigma );
        return (jlong)(new Ptr_GraphSegmentation(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createGraphSegmentation_13 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createGraphSegmentation_13
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "ximgproc::createGraphSegmentation_13()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::segmentation::GraphSegmentation> Ptr_GraphSegmentation;
        Ptr_GraphSegmentation _retval_ = cv::ximgproc::segmentation::createGraphSegmentation();
        return (jlong)(new Ptr_GraphSegmentation(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_SelectiveSearchSegmentationStrategyColor cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyColor()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSelectiveSearchSegmentationStrategyColor_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSelectiveSearchSegmentationStrategyColor_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "ximgproc::createSelectiveSearchSegmentationStrategyColor_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyColor> Ptr_SelectiveSearchSegmentationStrategyColor;
        Ptr_SelectiveSearchSegmentationStrategyColor _retval_ = cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyColor();
        return (jlong)(new Ptr_SelectiveSearchSegmentationStrategyColor(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_SelectiveSearchSegmentationStrategySize cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategySize()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSelectiveSearchSegmentationStrategySize_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSelectiveSearchSegmentationStrategySize_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "ximgproc::createSelectiveSearchSegmentationStrategySize_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategySize> Ptr_SelectiveSearchSegmentationStrategySize;
        Ptr_SelectiveSearchSegmentationStrategySize _retval_ = cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategySize();
        return (jlong)(new Ptr_SelectiveSearchSegmentationStrategySize(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_SelectiveSearchSegmentationStrategyTexture cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyTexture()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSelectiveSearchSegmentationStrategyTexture_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSelectiveSearchSegmentationStrategyTexture_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "ximgproc::createSelectiveSearchSegmentationStrategyTexture_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyTexture> Ptr_SelectiveSearchSegmentationStrategyTexture;
        Ptr_SelectiveSearchSegmentationStrategyTexture _retval_ = cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyTexture();
        return (jlong)(new Ptr_SelectiveSearchSegmentationStrategyTexture(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_SelectiveSearchSegmentationStrategyFill cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyFill()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSelectiveSearchSegmentationStrategyFill_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSelectiveSearchSegmentationStrategyFill_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "ximgproc::createSelectiveSearchSegmentationStrategyFill_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyFill> Ptr_SelectiveSearchSegmentationStrategyFill;
        Ptr_SelectiveSearchSegmentationStrategyFill _retval_ = cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyFill();
        return (jlong)(new Ptr_SelectiveSearchSegmentationStrategyFill(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_SelectiveSearchSegmentationStrategyMultiple cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyMultiple()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSelectiveSearchSegmentationStrategyMultiple_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSelectiveSearchSegmentationStrategyMultiple_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "ximgproc::createSelectiveSearchSegmentationStrategyMultiple_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple> Ptr_SelectiveSearchSegmentationStrategyMultiple;
        Ptr_SelectiveSearchSegmentationStrategyMultiple _retval_ = cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyMultiple();
        return (jlong)(new Ptr_SelectiveSearchSegmentationStrategyMultiple(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_SelectiveSearchSegmentationStrategyMultiple cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyMultiple(Ptr_SelectiveSearchSegmentationStrategy s1)
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSelectiveSearchSegmentationStrategyMultiple_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSelectiveSearchSegmentationStrategyMultiple_11
  (JNIEnv* env, jclass , jlong s1_nativeObj)
{
    
    static const char method_name[] = "ximgproc::createSelectiveSearchSegmentationStrategyMultiple_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple> Ptr_SelectiveSearchSegmentationStrategyMultiple;
        Ptr_SelectiveSearchSegmentationStrategyMultiple _retval_ = cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyMultiple( *((Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>*)s1_nativeObj) );
        return (jlong)(new Ptr_SelectiveSearchSegmentationStrategyMultiple(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_SelectiveSearchSegmentationStrategyMultiple cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyMultiple(Ptr_SelectiveSearchSegmentationStrategy s1, Ptr_SelectiveSearchSegmentationStrategy s2)
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSelectiveSearchSegmentationStrategyMultiple_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSelectiveSearchSegmentationStrategyMultiple_12
  (JNIEnv* env, jclass , jlong s1_nativeObj, jlong s2_nativeObj)
{
    
    static const char method_name[] = "ximgproc::createSelectiveSearchSegmentationStrategyMultiple_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple> Ptr_SelectiveSearchSegmentationStrategyMultiple;
        Ptr_SelectiveSearchSegmentationStrategyMultiple _retval_ = cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyMultiple( *((Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>*)s1_nativeObj), *((Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>*)s2_nativeObj) );
        return (jlong)(new Ptr_SelectiveSearchSegmentationStrategyMultiple(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_SelectiveSearchSegmentationStrategyMultiple cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyMultiple(Ptr_SelectiveSearchSegmentationStrategy s1, Ptr_SelectiveSearchSegmentationStrategy s2, Ptr_SelectiveSearchSegmentationStrategy s3)
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSelectiveSearchSegmentationStrategyMultiple_13 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSelectiveSearchSegmentationStrategyMultiple_13
  (JNIEnv* env, jclass , jlong s1_nativeObj, jlong s2_nativeObj, jlong s3_nativeObj)
{
    
    static const char method_name[] = "ximgproc::createSelectiveSearchSegmentationStrategyMultiple_13()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple> Ptr_SelectiveSearchSegmentationStrategyMultiple;
        Ptr_SelectiveSearchSegmentationStrategyMultiple _retval_ = cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyMultiple( *((Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>*)s1_nativeObj), *((Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>*)s2_nativeObj), *((Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>*)s3_nativeObj) );
        return (jlong)(new Ptr_SelectiveSearchSegmentationStrategyMultiple(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_SelectiveSearchSegmentationStrategyMultiple cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyMultiple(Ptr_SelectiveSearchSegmentationStrategy s1, Ptr_SelectiveSearchSegmentationStrategy s2, Ptr_SelectiveSearchSegmentationStrategy s3, Ptr_SelectiveSearchSegmentationStrategy s4)
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSelectiveSearchSegmentationStrategyMultiple_14 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSelectiveSearchSegmentationStrategyMultiple_14
  (JNIEnv* env, jclass , jlong s1_nativeObj, jlong s2_nativeObj, jlong s3_nativeObj, jlong s4_nativeObj)
{
    
    static const char method_name[] = "ximgproc::createSelectiveSearchSegmentationStrategyMultiple_14()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple> Ptr_SelectiveSearchSegmentationStrategyMultiple;
        Ptr_SelectiveSearchSegmentationStrategyMultiple _retval_ = cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyMultiple( *((Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>*)s1_nativeObj), *((Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>*)s2_nativeObj), *((Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>*)s3_nativeObj), *((Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>*)s4_nativeObj) );
        return (jlong)(new Ptr_SelectiveSearchSegmentationStrategyMultiple(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_SelectiveSearchSegmentation cv::ximgproc::segmentation::createSelectiveSearchSegmentation()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSelectiveSearchSegmentation_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createSelectiveSearchSegmentation_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "ximgproc::createSelectiveSearchSegmentation_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation> Ptr_SelectiveSearchSegmentation;
        Ptr_SelectiveSearchSegmentation _retval_ = cv::ximgproc::segmentation::createSelectiveSearchSegmentation();
        return (jlong)(new Ptr_SelectiveSearchSegmentation(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::GradientDericheY(Mat op, Mat& dst, double alpha, double omega)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_GradientDericheY_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_GradientDericheY_10
  (JNIEnv* env, jclass , jlong op_nativeObj, jlong dst_nativeObj, jdouble alpha, jdouble omega)
{
    
    static const char method_name[] = "ximgproc::GradientDericheY_10()";
    try {
        LOGD("%s", method_name);
        Mat& op = *((Mat*)op_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::GradientDericheY( op, dst, (double)alpha, (double)omega );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::GradientDericheX(Mat op, Mat& dst, double alpha, double omega)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_GradientDericheX_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_GradientDericheX_10
  (JNIEnv* env, jclass , jlong op_nativeObj, jlong dst_nativeObj, jdouble alpha, jdouble omega)
{
    
    static const char method_name[] = "ximgproc::GradientDericheX_10()";
    try {
        LOGD("%s", method_name);
        Mat& op = *((Mat*)op_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::GradientDericheX( op, dst, (double)alpha, (double)omega );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  Ptr_ScanSegment cv::ximgproc::createScanSegment(int image_width, int image_height, int num_superpixels, int slices = 8, bool merge_small = true)
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createScanSegment_10 (JNIEnv*, jclass, jint, jint, jint, jint, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createScanSegment_10
  (JNIEnv* env, jclass , jint image_width, jint image_height, jint num_superpixels, jint slices, jboolean merge_small)
{
    
    static const char method_name[] = "ximgproc::createScanSegment_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::ScanSegment> Ptr_ScanSegment;
        Ptr_ScanSegment _retval_ = cv::ximgproc::createScanSegment( (int)image_width, (int)image_height, (int)num_superpixels, (int)slices, (bool)merge_small );
        return (jlong)(new Ptr_ScanSegment(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createScanSegment_11 (JNIEnv*, jclass, jint, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createScanSegment_11
  (JNIEnv* env, jclass , jint image_width, jint image_height, jint num_superpixels, jint slices)
{
    
    static const char method_name[] = "ximgproc::createScanSegment_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::ScanSegment> Ptr_ScanSegment;
        Ptr_ScanSegment _retval_ = cv::ximgproc::createScanSegment( (int)image_width, (int)image_height, (int)num_superpixels, (int)slices );
        return (jlong)(new Ptr_ScanSegment(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createScanSegment_12 (JNIEnv*, jclass, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createScanSegment_12
  (JNIEnv* env, jclass , jint image_width, jint image_height, jint num_superpixels)
{
    
    static const char method_name[] = "ximgproc::createScanSegment_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::ScanSegment> Ptr_ScanSegment;
        Ptr_ScanSegment _retval_ = cv::ximgproc::createScanSegment( (int)image_width, (int)image_height, (int)num_superpixels );
        return (jlong)(new Ptr_ScanSegment(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::FastHoughTransform(Mat src, Mat& dst, int dstMatDepth, int angleRange = ARO_315_135, int op = FHT_ADD, int makeSkew = HDO_DESKEW)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_FastHoughTransform_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_FastHoughTransform_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint dstMatDepth, jint angleRange, jint op, jint makeSkew)
{
    
    static const char method_name[] = "ximgproc::FastHoughTransform_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::FastHoughTransform( src, dst, (int)dstMatDepth, (int)angleRange, (int)op, (int)makeSkew );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_FastHoughTransform_11 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_FastHoughTransform_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint dstMatDepth, jint angleRange, jint op)
{
    
    static const char method_name[] = "ximgproc::FastHoughTransform_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::FastHoughTransform( src, dst, (int)dstMatDepth, (int)angleRange, (int)op );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_FastHoughTransform_12 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_FastHoughTransform_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint dstMatDepth, jint angleRange)
{
    
    static const char method_name[] = "ximgproc::FastHoughTransform_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::FastHoughTransform( src, dst, (int)dstMatDepth, (int)angleRange );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_FastHoughTransform_13 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_FastHoughTransform_13
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint dstMatDepth)
{
    
    static const char method_name[] = "ximgproc::FastHoughTransform_13()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::FastHoughTransform( src, dst, (int)dstMatDepth );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::covarianceEstimation(Mat src, Mat& dst, int windowRows, int windowCols)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_covarianceEstimation_10 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_Ximgproc_covarianceEstimation_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint windowRows, jint windowCols)
{
    
    static const char method_name[] = "ximgproc::covarianceEstimation_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::ximgproc::covarianceEstimation( src, dst, (int)windowRows, (int)windowCols );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  Ptr_EdgeBoxes cv::ximgproc::createEdgeBoxes(float alpha = 0.65f, float beta = 0.75f, float eta = 1, float minScore = 0.01f, int maxBoxes = 10000, float edgeMinMag = 0.1f, float edgeMergeThr = 0.5f, float clusterMinMag = 0.5f, float maxAspectRatio = 3, float minBoxArea = 1000, float gamma = 2, float kappa = 1.5f)
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_10 (JNIEnv*, jclass, jfloat, jfloat, jfloat, jfloat, jint, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_10
  (JNIEnv* env, jclass , jfloat alpha, jfloat beta, jfloat eta, jfloat minScore, jint maxBoxes, jfloat edgeMinMag, jfloat edgeMergeThr, jfloat clusterMinMag, jfloat maxAspectRatio, jfloat minBoxArea, jfloat gamma, jfloat kappa)
{
    
    static const char method_name[] = "ximgproc::createEdgeBoxes_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::EdgeBoxes> Ptr_EdgeBoxes;
        Ptr_EdgeBoxes _retval_ = cv::ximgproc::createEdgeBoxes( (float)alpha, (float)beta, (float)eta, (float)minScore, (int)maxBoxes, (float)edgeMinMag, (float)edgeMergeThr, (float)clusterMinMag, (float)maxAspectRatio, (float)minBoxArea, (float)gamma, (float)kappa );
        return (jlong)(new Ptr_EdgeBoxes(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_11 (JNIEnv*, jclass, jfloat, jfloat, jfloat, jfloat, jint, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_11
  (JNIEnv* env, jclass , jfloat alpha, jfloat beta, jfloat eta, jfloat minScore, jint maxBoxes, jfloat edgeMinMag, jfloat edgeMergeThr, jfloat clusterMinMag, jfloat maxAspectRatio, jfloat minBoxArea, jfloat gamma)
{
    
    static const char method_name[] = "ximgproc::createEdgeBoxes_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::EdgeBoxes> Ptr_EdgeBoxes;
        Ptr_EdgeBoxes _retval_ = cv::ximgproc::createEdgeBoxes( (float)alpha, (float)beta, (float)eta, (float)minScore, (int)maxBoxes, (float)edgeMinMag, (float)edgeMergeThr, (float)clusterMinMag, (float)maxAspectRatio, (float)minBoxArea, (float)gamma );
        return (jlong)(new Ptr_EdgeBoxes(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_12 (JNIEnv*, jclass, jfloat, jfloat, jfloat, jfloat, jint, jfloat, jfloat, jfloat, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_12
  (JNIEnv* env, jclass , jfloat alpha, jfloat beta, jfloat eta, jfloat minScore, jint maxBoxes, jfloat edgeMinMag, jfloat edgeMergeThr, jfloat clusterMinMag, jfloat maxAspectRatio, jfloat minBoxArea)
{
    
    static const char method_name[] = "ximgproc::createEdgeBoxes_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::EdgeBoxes> Ptr_EdgeBoxes;
        Ptr_EdgeBoxes _retval_ = cv::ximgproc::createEdgeBoxes( (float)alpha, (float)beta, (float)eta, (float)minScore, (int)maxBoxes, (float)edgeMinMag, (float)edgeMergeThr, (float)clusterMinMag, (float)maxAspectRatio, (float)minBoxArea );
        return (jlong)(new Ptr_EdgeBoxes(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_13 (JNIEnv*, jclass, jfloat, jfloat, jfloat, jfloat, jint, jfloat, jfloat, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_13
  (JNIEnv* env, jclass , jfloat alpha, jfloat beta, jfloat eta, jfloat minScore, jint maxBoxes, jfloat edgeMinMag, jfloat edgeMergeThr, jfloat clusterMinMag, jfloat maxAspectRatio)
{
    
    static const char method_name[] = "ximgproc::createEdgeBoxes_13()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::EdgeBoxes> Ptr_EdgeBoxes;
        Ptr_EdgeBoxes _retval_ = cv::ximgproc::createEdgeBoxes( (float)alpha, (float)beta, (float)eta, (float)minScore, (int)maxBoxes, (float)edgeMinMag, (float)edgeMergeThr, (float)clusterMinMag, (float)maxAspectRatio );
        return (jlong)(new Ptr_EdgeBoxes(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_14 (JNIEnv*, jclass, jfloat, jfloat, jfloat, jfloat, jint, jfloat, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_14
  (JNIEnv* env, jclass , jfloat alpha, jfloat beta, jfloat eta, jfloat minScore, jint maxBoxes, jfloat edgeMinMag, jfloat edgeMergeThr, jfloat clusterMinMag)
{
    
    static const char method_name[] = "ximgproc::createEdgeBoxes_14()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::EdgeBoxes> Ptr_EdgeBoxes;
        Ptr_EdgeBoxes _retval_ = cv::ximgproc::createEdgeBoxes( (float)alpha, (float)beta, (float)eta, (float)minScore, (int)maxBoxes, (float)edgeMinMag, (float)edgeMergeThr, (float)clusterMinMag );
        return (jlong)(new Ptr_EdgeBoxes(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_15 (JNIEnv*, jclass, jfloat, jfloat, jfloat, jfloat, jint, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_15
  (JNIEnv* env, jclass , jfloat alpha, jfloat beta, jfloat eta, jfloat minScore, jint maxBoxes, jfloat edgeMinMag, jfloat edgeMergeThr)
{
    
    static const char method_name[] = "ximgproc::createEdgeBoxes_15()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::EdgeBoxes> Ptr_EdgeBoxes;
        Ptr_EdgeBoxes _retval_ = cv::ximgproc::createEdgeBoxes( (float)alpha, (float)beta, (float)eta, (float)minScore, (int)maxBoxes, (float)edgeMinMag, (float)edgeMergeThr );
        return (jlong)(new Ptr_EdgeBoxes(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_16 (JNIEnv*, jclass, jfloat, jfloat, jfloat, jfloat, jint, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_16
  (JNIEnv* env, jclass , jfloat alpha, jfloat beta, jfloat eta, jfloat minScore, jint maxBoxes, jfloat edgeMinMag)
{
    
    static const char method_name[] = "ximgproc::createEdgeBoxes_16()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::EdgeBoxes> Ptr_EdgeBoxes;
        Ptr_EdgeBoxes _retval_ = cv::ximgproc::createEdgeBoxes( (float)alpha, (float)beta, (float)eta, (float)minScore, (int)maxBoxes, (float)edgeMinMag );
        return (jlong)(new Ptr_EdgeBoxes(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_17 (JNIEnv*, jclass, jfloat, jfloat, jfloat, jfloat, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_17
  (JNIEnv* env, jclass , jfloat alpha, jfloat beta, jfloat eta, jfloat minScore, jint maxBoxes)
{
    
    static const char method_name[] = "ximgproc::createEdgeBoxes_17()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::EdgeBoxes> Ptr_EdgeBoxes;
        Ptr_EdgeBoxes _retval_ = cv::ximgproc::createEdgeBoxes( (float)alpha, (float)beta, (float)eta, (float)minScore, (int)maxBoxes );
        return (jlong)(new Ptr_EdgeBoxes(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_18 (JNIEnv*, jclass, jfloat, jfloat, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_18
  (JNIEnv* env, jclass , jfloat alpha, jfloat beta, jfloat eta, jfloat minScore)
{
    
    static const char method_name[] = "ximgproc::createEdgeBoxes_18()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::EdgeBoxes> Ptr_EdgeBoxes;
        Ptr_EdgeBoxes _retval_ = cv::ximgproc::createEdgeBoxes( (float)alpha, (float)beta, (float)eta, (float)minScore );
        return (jlong)(new Ptr_EdgeBoxes(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_19 (JNIEnv*, jclass, jfloat, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_19
  (JNIEnv* env, jclass , jfloat alpha, jfloat beta, jfloat eta)
{
    
    static const char method_name[] = "ximgproc::createEdgeBoxes_19()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::EdgeBoxes> Ptr_EdgeBoxes;
        Ptr_EdgeBoxes _retval_ = cv::ximgproc::createEdgeBoxes( (float)alpha, (float)beta, (float)eta );
        return (jlong)(new Ptr_EdgeBoxes(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_110 (JNIEnv*, jclass, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_110
  (JNIEnv* env, jclass , jfloat alpha, jfloat beta)
{
    
    static const char method_name[] = "ximgproc::createEdgeBoxes_110()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::EdgeBoxes> Ptr_EdgeBoxes;
        Ptr_EdgeBoxes _retval_ = cv::ximgproc::createEdgeBoxes( (float)alpha, (float)beta );
        return (jlong)(new Ptr_EdgeBoxes(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_111 (JNIEnv*, jclass, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_111
  (JNIEnv* env, jclass , jfloat alpha)
{
    
    static const char method_name[] = "ximgproc::createEdgeBoxes_111()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::EdgeBoxes> Ptr_EdgeBoxes;
        Ptr_EdgeBoxes _retval_ = cv::ximgproc::createEdgeBoxes( (float)alpha );
        return (jlong)(new Ptr_EdgeBoxes(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_112 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_Ximgproc_createEdgeBoxes_112
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "ximgproc::createEdgeBoxes_112()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::EdgeBoxes> Ptr_EdgeBoxes;
        Ptr_EdgeBoxes _retval_ = cv::ximgproc::createEdgeBoxes();
        return (jlong)(new Ptr_EdgeBoxes(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::AdaptiveManifoldFilter::filter(Mat src, Mat& dst, Mat joint = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_AdaptiveManifoldFilter_filter_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_AdaptiveManifoldFilter_filter_10
  (JNIEnv* env, jclass , jlong self, jlong src_nativeObj, jlong dst_nativeObj, jlong joint_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::filter_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::AdaptiveManifoldFilter>* me = (Ptr<cv::ximgproc::AdaptiveManifoldFilter>*) self; //TODO: check for NULL
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& joint = *((Mat*)joint_nativeObj);
        (*me)->filter( src, dst, joint );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_AdaptiveManifoldFilter_filter_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_AdaptiveManifoldFilter_filter_11
  (JNIEnv* env, jclass , jlong self, jlong src_nativeObj, jlong dst_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::filter_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::AdaptiveManifoldFilter>* me = (Ptr<cv::ximgproc::AdaptiveManifoldFilter>*) self; //TODO: check for NULL
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        (*me)->filter( src, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::AdaptiveManifoldFilter::collectGarbage()
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_AdaptiveManifoldFilter_collectGarbage_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_AdaptiveManifoldFilter_collectGarbage_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::collectGarbage_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::AdaptiveManifoldFilter>* me = (Ptr<cv::ximgproc::AdaptiveManifoldFilter>*) self; //TODO: check for NULL
        (*me)->collectGarbage();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// static Ptr_AdaptiveManifoldFilter cv::ximgproc::AdaptiveManifoldFilter::create()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_AdaptiveManifoldFilter_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_AdaptiveManifoldFilter_create_10
  (JNIEnv* env, jclass )
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::AdaptiveManifoldFilter> Ptr_AdaptiveManifoldFilter;
        Ptr_AdaptiveManifoldFilter _retval_ = cv::ximgproc::AdaptiveManifoldFilter::create();
        return (jlong)(new Ptr_AdaptiveManifoldFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::AdaptiveManifoldFilter>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_AdaptiveManifoldFilter_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_AdaptiveManifoldFilter_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::AdaptiveManifoldFilter>*) self;
}


//
//  void cv::ximgproc::ContourFitting::estimateTransformation(Mat src, Mat dst, Mat& alphaPhiST, double& dist, bool fdContour = false)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_ContourFitting_estimateTransformation_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdoubleArray, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_ContourFitting_estimateTransformation_10
  (JNIEnv* env, jclass , jlong self, jlong src_nativeObj, jlong dst_nativeObj, jlong alphaPhiST_nativeObj, jdoubleArray dist_out, jboolean fdContour)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::estimateTransformation_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::ContourFitting>* me = (Ptr<cv::ximgproc::ContourFitting>*) self; //TODO: check for NULL
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& alphaPhiST = *((Mat*)alphaPhiST_nativeObj);
        double dist;
        (*me)->estimateTransformation( src, dst, alphaPhiST, dist, (bool)fdContour );
        jdouble tmp_dist[1] = {(jdouble)dist}; env->SetDoubleArrayRegion(dist_out, 0, 1, tmp_dist);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_ContourFitting_estimateTransformation_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdoubleArray);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_ContourFitting_estimateTransformation_11
  (JNIEnv* env, jclass , jlong self, jlong src_nativeObj, jlong dst_nativeObj, jlong alphaPhiST_nativeObj, jdoubleArray dist_out)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::estimateTransformation_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::ContourFitting>* me = (Ptr<cv::ximgproc::ContourFitting>*) self; //TODO: check for NULL
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        Mat& alphaPhiST = *((Mat*)alphaPhiST_nativeObj);
        double dist;
        (*me)->estimateTransformation( src, dst, alphaPhiST, dist );
        jdouble tmp_dist[1] = {(jdouble)dist}; env->SetDoubleArrayRegion(dist_out, 0, 1, tmp_dist);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::ContourFitting::setCtrSize(int n)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_ContourFitting_setCtrSize_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_ContourFitting_setCtrSize_10
  (JNIEnv* env, jclass , jlong self, jint n)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setCtrSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::ContourFitting>* me = (Ptr<cv::ximgproc::ContourFitting>*) self; //TODO: check for NULL
        (*me)->setCtrSize( (int)n );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::ContourFitting::setFDSize(int n)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_ContourFitting_setFDSize_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_ContourFitting_setFDSize_10
  (JNIEnv* env, jclass , jlong self, jint n)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setFDSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::ContourFitting>* me = (Ptr<cv::ximgproc::ContourFitting>*) self; //TODO: check for NULL
        (*me)->setFDSize( (int)n );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::ximgproc::ContourFitting::getCtrSize()
//

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_ContourFitting_getCtrSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_ContourFitting_getCtrSize_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getCtrSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::ContourFitting>* me = (Ptr<cv::ximgproc::ContourFitting>*) self; //TODO: check for NULL
        return (*me)->getCtrSize();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::ximgproc::ContourFitting::getFDSize()
//

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_ContourFitting_getFDSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_ContourFitting_getFDSize_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getFDSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::ContourFitting>* me = (Ptr<cv::ximgproc::ContourFitting>*) self; //TODO: check for NULL
        return (*me)->getFDSize();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::ContourFitting>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_ContourFitting_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_ContourFitting_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::ContourFitting>*) self;
}


//
//  void cv::ximgproc::DTFilter::filter(Mat src, Mat& dst, int dDepth = -1)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DTFilter_filter_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DTFilter_filter_10
  (JNIEnv* env, jclass , jlong self, jlong src_nativeObj, jlong dst_nativeObj, jint dDepth)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::filter_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::DTFilter>* me = (Ptr<cv::ximgproc::DTFilter>*) self; //TODO: check for NULL
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        (*me)->filter( src, dst, (int)dDepth );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DTFilter_filter_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DTFilter_filter_11
  (JNIEnv* env, jclass , jlong self, jlong src_nativeObj, jlong dst_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::filter_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::DTFilter>* me = (Ptr<cv::ximgproc::DTFilter>*) self; //TODO: check for NULL
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        (*me)->filter( src, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::DTFilter>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DTFilter_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DTFilter_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::DTFilter>*) self;
}


//
//  void cv::ximgproc::DisparityFilter::filter(Mat disparity_map_left, Mat left_view, Mat& filtered_disparity_map, Mat disparity_map_right = Mat(), Rect ROI = Rect(), Mat right_view = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DisparityFilter_filter_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jint, jint, jint, jint, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DisparityFilter_filter_10
  (JNIEnv* env, jclass , jlong self, jlong disparity_map_left_nativeObj, jlong left_view_nativeObj, jlong filtered_disparity_map_nativeObj, jlong disparity_map_right_nativeObj, jint ROI_x, jint ROI_y, jint ROI_width, jint ROI_height, jlong right_view_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::filter_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::DisparityFilter>* me = (Ptr<cv::ximgproc::DisparityFilter>*) self; //TODO: check for NULL
        Mat& disparity_map_left = *((Mat*)disparity_map_left_nativeObj);
        Mat& left_view = *((Mat*)left_view_nativeObj);
        Mat& filtered_disparity_map = *((Mat*)filtered_disparity_map_nativeObj);
        Mat& disparity_map_right = *((Mat*)disparity_map_right_nativeObj);
        Rect ROI(ROI_x, ROI_y, ROI_width, ROI_height);
        Mat& right_view = *((Mat*)right_view_nativeObj);
        (*me)->filter( disparity_map_left, left_view, filtered_disparity_map, disparity_map_right, ROI, right_view );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DisparityFilter_filter_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jint, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DisparityFilter_filter_11
  (JNIEnv* env, jclass , jlong self, jlong disparity_map_left_nativeObj, jlong left_view_nativeObj, jlong filtered_disparity_map_nativeObj, jlong disparity_map_right_nativeObj, jint ROI_x, jint ROI_y, jint ROI_width, jint ROI_height)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::filter_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::DisparityFilter>* me = (Ptr<cv::ximgproc::DisparityFilter>*) self; //TODO: check for NULL
        Mat& disparity_map_left = *((Mat*)disparity_map_left_nativeObj);
        Mat& left_view = *((Mat*)left_view_nativeObj);
        Mat& filtered_disparity_map = *((Mat*)filtered_disparity_map_nativeObj);
        Mat& disparity_map_right = *((Mat*)disparity_map_right_nativeObj);
        Rect ROI(ROI_x, ROI_y, ROI_width, ROI_height);
        (*me)->filter( disparity_map_left, left_view, filtered_disparity_map, disparity_map_right, ROI );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DisparityFilter_filter_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DisparityFilter_filter_12
  (JNIEnv* env, jclass , jlong self, jlong disparity_map_left_nativeObj, jlong left_view_nativeObj, jlong filtered_disparity_map_nativeObj, jlong disparity_map_right_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::filter_12()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::DisparityFilter>* me = (Ptr<cv::ximgproc::DisparityFilter>*) self; //TODO: check for NULL
        Mat& disparity_map_left = *((Mat*)disparity_map_left_nativeObj);
        Mat& left_view = *((Mat*)left_view_nativeObj);
        Mat& filtered_disparity_map = *((Mat*)filtered_disparity_map_nativeObj);
        Mat& disparity_map_right = *((Mat*)disparity_map_right_nativeObj);
        (*me)->filter( disparity_map_left, left_view, filtered_disparity_map, disparity_map_right );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DisparityFilter_filter_13 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DisparityFilter_filter_13
  (JNIEnv* env, jclass , jlong self, jlong disparity_map_left_nativeObj, jlong left_view_nativeObj, jlong filtered_disparity_map_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::filter_13()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::DisparityFilter>* me = (Ptr<cv::ximgproc::DisparityFilter>*) self; //TODO: check for NULL
        Mat& disparity_map_left = *((Mat*)disparity_map_left_nativeObj);
        Mat& left_view = *((Mat*)left_view_nativeObj);
        Mat& filtered_disparity_map = *((Mat*)filtered_disparity_map_nativeObj);
        (*me)->filter( disparity_map_left, left_view, filtered_disparity_map );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::DisparityFilter>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DisparityFilter_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DisparityFilter_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::DisparityFilter>*) self;
}


//
//  double cv::ximgproc::DisparityWLSFilter::getLambda()
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ximgproc_DisparityWLSFilter_getLambda_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ximgproc_DisparityWLSFilter_getLambda_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getLambda_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::DisparityWLSFilter>* me = (Ptr<cv::ximgproc::DisparityWLSFilter>*) self; //TODO: check for NULL
        return (*me)->getLambda();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::DisparityWLSFilter::setLambda(double _lambda)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DisparityWLSFilter_setLambda_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DisparityWLSFilter_setLambda_10
  (JNIEnv* env, jclass , jlong self, jdouble _lambda)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setLambda_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::DisparityWLSFilter>* me = (Ptr<cv::ximgproc::DisparityWLSFilter>*) self; //TODO: check for NULL
        (*me)->setLambda( (double)_lambda );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  double cv::ximgproc::DisparityWLSFilter::getSigmaColor()
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ximgproc_DisparityWLSFilter_getSigmaColor_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ximgproc_DisparityWLSFilter_getSigmaColor_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getSigmaColor_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::DisparityWLSFilter>* me = (Ptr<cv::ximgproc::DisparityWLSFilter>*) self; //TODO: check for NULL
        return (*me)->getSigmaColor();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::DisparityWLSFilter::setSigmaColor(double _sigma_color)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DisparityWLSFilter_setSigmaColor_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DisparityWLSFilter_setSigmaColor_10
  (JNIEnv* env, jclass , jlong self, jdouble _sigma_color)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setSigmaColor_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::DisparityWLSFilter>* me = (Ptr<cv::ximgproc::DisparityWLSFilter>*) self; //TODO: check for NULL
        (*me)->setSigmaColor( (double)_sigma_color );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::ximgproc::DisparityWLSFilter::getLRCthresh()
//

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_DisparityWLSFilter_getLRCthresh_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_DisparityWLSFilter_getLRCthresh_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getLRCthresh_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::DisparityWLSFilter>* me = (Ptr<cv::ximgproc::DisparityWLSFilter>*) self; //TODO: check for NULL
        return (*me)->getLRCthresh();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::DisparityWLSFilter::setLRCthresh(int _LRC_thresh)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DisparityWLSFilter_setLRCthresh_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DisparityWLSFilter_setLRCthresh_10
  (JNIEnv* env, jclass , jlong self, jint _LRC_thresh)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setLRCthresh_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::DisparityWLSFilter>* me = (Ptr<cv::ximgproc::DisparityWLSFilter>*) self; //TODO: check for NULL
        (*me)->setLRCthresh( (int)_LRC_thresh );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::ximgproc::DisparityWLSFilter::getDepthDiscontinuityRadius()
//

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_DisparityWLSFilter_getDepthDiscontinuityRadius_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_DisparityWLSFilter_getDepthDiscontinuityRadius_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getDepthDiscontinuityRadius_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::DisparityWLSFilter>* me = (Ptr<cv::ximgproc::DisparityWLSFilter>*) self; //TODO: check for NULL
        return (*me)->getDepthDiscontinuityRadius();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::DisparityWLSFilter::setDepthDiscontinuityRadius(int _disc_radius)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DisparityWLSFilter_setDepthDiscontinuityRadius_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DisparityWLSFilter_setDepthDiscontinuityRadius_10
  (JNIEnv* env, jclass , jlong self, jint _disc_radius)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setDepthDiscontinuityRadius_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::DisparityWLSFilter>* me = (Ptr<cv::ximgproc::DisparityWLSFilter>*) self; //TODO: check for NULL
        (*me)->setDepthDiscontinuityRadius( (int)_disc_radius );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  Mat cv::ximgproc::DisparityWLSFilter::getConfidenceMap()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_DisparityWLSFilter_getConfidenceMap_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_DisparityWLSFilter_getConfidenceMap_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getConfidenceMap_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::DisparityWLSFilter>* me = (Ptr<cv::ximgproc::DisparityWLSFilter>*) self; //TODO: check for NULL
        cv::Mat _retval_ = (*me)->getConfidenceMap();
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Rect cv::ximgproc::DisparityWLSFilter::getROI()
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ximgproc_DisparityWLSFilter_getROI_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ximgproc_DisparityWLSFilter_getROI_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getROI_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::DisparityWLSFilter>* me = (Ptr<cv::ximgproc::DisparityWLSFilter>*) self; //TODO: check for NULL
        Rect _retval_ = (*me)->getROI();
        jdoubleArray _da_retval_ = env->NewDoubleArray(4);  jdouble _tmp_retval_[4] = {(jdouble)_retval_.x, (jdouble)_retval_.y, (jdouble)_retval_.width, (jdouble)_retval_.height}; env->SetDoubleArrayRegion(_da_retval_, 0, 4, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::DisparityWLSFilter>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DisparityWLSFilter_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_DisparityWLSFilter_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::DisparityWLSFilter>*) self;
}


//
//  void cv::ximgproc::EdgeAwareInterpolator::setCostMap(Mat _costMap)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_setCostMap_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_setCostMap_10
  (JNIEnv* env, jclass , jlong self, jlong _costMap_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setCostMap_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeAwareInterpolator>* me = (Ptr<cv::ximgproc::EdgeAwareInterpolator>*) self; //TODO: check for NULL
        Mat& _costMap = *((Mat*)_costMap_nativeObj);
        (*me)->setCostMap( _costMap );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::EdgeAwareInterpolator::setK(int _k)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_setK_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_setK_10
  (JNIEnv* env, jclass , jlong self, jint _k)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setK_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeAwareInterpolator>* me = (Ptr<cv::ximgproc::EdgeAwareInterpolator>*) self; //TODO: check for NULL
        (*me)->setK( (int)_k );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::ximgproc::EdgeAwareInterpolator::getK()
//

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_getK_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_getK_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getK_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeAwareInterpolator>* me = (Ptr<cv::ximgproc::EdgeAwareInterpolator>*) self; //TODO: check for NULL
        return (*me)->getK();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::EdgeAwareInterpolator::setSigma(float _sigma)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_setSigma_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_setSigma_10
  (JNIEnv* env, jclass , jlong self, jfloat _sigma)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setSigma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeAwareInterpolator>* me = (Ptr<cv::ximgproc::EdgeAwareInterpolator>*) self; //TODO: check for NULL
        (*me)->setSigma( (float)_sigma );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::ximgproc::EdgeAwareInterpolator::getSigma()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_getSigma_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_getSigma_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getSigma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeAwareInterpolator>* me = (Ptr<cv::ximgproc::EdgeAwareInterpolator>*) self; //TODO: check for NULL
        return (*me)->getSigma();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::EdgeAwareInterpolator::setLambda(float _lambda)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_setLambda_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_setLambda_10
  (JNIEnv* env, jclass , jlong self, jfloat _lambda)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setLambda_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeAwareInterpolator>* me = (Ptr<cv::ximgproc::EdgeAwareInterpolator>*) self; //TODO: check for NULL
        (*me)->setLambda( (float)_lambda );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::ximgproc::EdgeAwareInterpolator::getLambda()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_getLambda_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_getLambda_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getLambda_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeAwareInterpolator>* me = (Ptr<cv::ximgproc::EdgeAwareInterpolator>*) self; //TODO: check for NULL
        return (*me)->getLambda();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::EdgeAwareInterpolator::setUsePostProcessing(bool _use_post_proc)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_setUsePostProcessing_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_setUsePostProcessing_10
  (JNIEnv* env, jclass , jlong self, jboolean _use_post_proc)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setUsePostProcessing_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeAwareInterpolator>* me = (Ptr<cv::ximgproc::EdgeAwareInterpolator>*) self; //TODO: check for NULL
        (*me)->setUsePostProcessing( (bool)_use_post_proc );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  bool cv::ximgproc::EdgeAwareInterpolator::getUsePostProcessing()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_getUsePostProcessing_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_getUsePostProcessing_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getUsePostProcessing_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeAwareInterpolator>* me = (Ptr<cv::ximgproc::EdgeAwareInterpolator>*) self; //TODO: check for NULL
        return (*me)->getUsePostProcessing();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::EdgeAwareInterpolator::setFGSLambda(float _lambda)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_setFGSLambda_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_setFGSLambda_10
  (JNIEnv* env, jclass , jlong self, jfloat _lambda)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setFGSLambda_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeAwareInterpolator>* me = (Ptr<cv::ximgproc::EdgeAwareInterpolator>*) self; //TODO: check for NULL
        (*me)->setFGSLambda( (float)_lambda );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::ximgproc::EdgeAwareInterpolator::getFGSLambda()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_getFGSLambda_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_getFGSLambda_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getFGSLambda_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeAwareInterpolator>* me = (Ptr<cv::ximgproc::EdgeAwareInterpolator>*) self; //TODO: check for NULL
        return (*me)->getFGSLambda();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::EdgeAwareInterpolator::setFGSSigma(float _sigma)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_setFGSSigma_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_setFGSSigma_10
  (JNIEnv* env, jclass , jlong self, jfloat _sigma)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setFGSSigma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeAwareInterpolator>* me = (Ptr<cv::ximgproc::EdgeAwareInterpolator>*) self; //TODO: check for NULL
        (*me)->setFGSSigma( (float)_sigma );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::ximgproc::EdgeAwareInterpolator::getFGSSigma()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_getFGSSigma_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_getFGSSigma_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getFGSSigma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeAwareInterpolator>* me = (Ptr<cv::ximgproc::EdgeAwareInterpolator>*) self; //TODO: check for NULL
        return (*me)->getFGSSigma();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::EdgeAwareInterpolator>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeAwareInterpolator_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::EdgeAwareInterpolator>*) self;
}


//
//  void cv::ximgproc::EdgeBoxes::getBoundingBoxes(Mat edge_map, Mat orientation_map, vector_Rect& boxes, Mat& scores = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getBoundingBoxes_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getBoundingBoxes_10
  (JNIEnv* env, jclass , jlong self, jlong edge_map_nativeObj, jlong orientation_map_nativeObj, jlong boxes_mat_nativeObj, jlong scores_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getBoundingBoxes_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> boxes;
        Mat& boxes_mat = *((Mat*)boxes_mat_nativeObj);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        Mat& edge_map = *((Mat*)edge_map_nativeObj);
        Mat& orientation_map = *((Mat*)orientation_map_nativeObj);
        Mat& scores = *((Mat*)scores_nativeObj);
        (*me)->getBoundingBoxes( edge_map, orientation_map, boxes, scores );
        vector_Rect_to_Mat( boxes, boxes_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getBoundingBoxes_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getBoundingBoxes_11
  (JNIEnv* env, jclass , jlong self, jlong edge_map_nativeObj, jlong orientation_map_nativeObj, jlong boxes_mat_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getBoundingBoxes_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> boxes;
        Mat& boxes_mat = *((Mat*)boxes_mat_nativeObj);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        Mat& edge_map = *((Mat*)edge_map_nativeObj);
        Mat& orientation_map = *((Mat*)orientation_map_nativeObj);
        (*me)->getBoundingBoxes( edge_map, orientation_map, boxes );
        vector_Rect_to_Mat( boxes, boxes_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::ximgproc::EdgeBoxes::getAlpha()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getAlpha_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getAlpha_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getAlpha_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        return (*me)->getAlpha();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::EdgeBoxes::setAlpha(float value)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setAlpha_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setAlpha_10
  (JNIEnv* env, jclass , jlong self, jfloat value)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setAlpha_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        (*me)->setAlpha( (float)value );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::ximgproc::EdgeBoxes::getBeta()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getBeta_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getBeta_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getBeta_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        return (*me)->getBeta();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::EdgeBoxes::setBeta(float value)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setBeta_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setBeta_10
  (JNIEnv* env, jclass , jlong self, jfloat value)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setBeta_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        (*me)->setBeta( (float)value );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::ximgproc::EdgeBoxes::getEta()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getEta_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getEta_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getEta_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        return (*me)->getEta();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::EdgeBoxes::setEta(float value)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setEta_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setEta_10
  (JNIEnv* env, jclass , jlong self, jfloat value)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setEta_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        (*me)->setEta( (float)value );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::ximgproc::EdgeBoxes::getMinScore()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getMinScore_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getMinScore_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getMinScore_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        return (*me)->getMinScore();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::EdgeBoxes::setMinScore(float value)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setMinScore_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setMinScore_10
  (JNIEnv* env, jclass , jlong self, jfloat value)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setMinScore_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        (*me)->setMinScore( (float)value );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::ximgproc::EdgeBoxes::getMaxBoxes()
//

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getMaxBoxes_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getMaxBoxes_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getMaxBoxes_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        return (*me)->getMaxBoxes();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::EdgeBoxes::setMaxBoxes(int value)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setMaxBoxes_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setMaxBoxes_10
  (JNIEnv* env, jclass , jlong self, jint value)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setMaxBoxes_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        (*me)->setMaxBoxes( (int)value );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::ximgproc::EdgeBoxes::getEdgeMinMag()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getEdgeMinMag_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getEdgeMinMag_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getEdgeMinMag_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        return (*me)->getEdgeMinMag();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::EdgeBoxes::setEdgeMinMag(float value)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setEdgeMinMag_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setEdgeMinMag_10
  (JNIEnv* env, jclass , jlong self, jfloat value)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setEdgeMinMag_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        (*me)->setEdgeMinMag( (float)value );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::ximgproc::EdgeBoxes::getEdgeMergeThr()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getEdgeMergeThr_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getEdgeMergeThr_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getEdgeMergeThr_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        return (*me)->getEdgeMergeThr();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::EdgeBoxes::setEdgeMergeThr(float value)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setEdgeMergeThr_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setEdgeMergeThr_10
  (JNIEnv* env, jclass , jlong self, jfloat value)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setEdgeMergeThr_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        (*me)->setEdgeMergeThr( (float)value );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::ximgproc::EdgeBoxes::getClusterMinMag()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getClusterMinMag_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getClusterMinMag_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getClusterMinMag_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        return (*me)->getClusterMinMag();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::EdgeBoxes::setClusterMinMag(float value)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setClusterMinMag_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setClusterMinMag_10
  (JNIEnv* env, jclass , jlong self, jfloat value)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setClusterMinMag_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        (*me)->setClusterMinMag( (float)value );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::ximgproc::EdgeBoxes::getMaxAspectRatio()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getMaxAspectRatio_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getMaxAspectRatio_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getMaxAspectRatio_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        return (*me)->getMaxAspectRatio();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::EdgeBoxes::setMaxAspectRatio(float value)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setMaxAspectRatio_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setMaxAspectRatio_10
  (JNIEnv* env, jclass , jlong self, jfloat value)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setMaxAspectRatio_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        (*me)->setMaxAspectRatio( (float)value );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::ximgproc::EdgeBoxes::getMinBoxArea()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getMinBoxArea_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getMinBoxArea_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getMinBoxArea_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        return (*me)->getMinBoxArea();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::EdgeBoxes::setMinBoxArea(float value)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setMinBoxArea_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setMinBoxArea_10
  (JNIEnv* env, jclass , jlong self, jfloat value)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setMinBoxArea_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        (*me)->setMinBoxArea( (float)value );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::ximgproc::EdgeBoxes::getGamma()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getGamma_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getGamma_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getGamma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        return (*me)->getGamma();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::EdgeBoxes::setGamma(float value)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setGamma_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setGamma_10
  (JNIEnv* env, jclass , jlong self, jfloat value)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setGamma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        (*me)->setGamma( (float)value );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::ximgproc::EdgeBoxes::getKappa()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getKappa_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeBoxes_getKappa_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getKappa_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        return (*me)->getKappa();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::EdgeBoxes::setKappa(float value)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setKappa_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_setKappa_10
  (JNIEnv* env, jclass , jlong self, jfloat value)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setKappa_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeBoxes>* me = (Ptr<cv::ximgproc::EdgeBoxes>*) self; //TODO: check for NULL
        (*me)->setKappa( (float)value );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::EdgeBoxes>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeBoxes_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::EdgeBoxes>*) self;
}


//
//  void cv::ximgproc::EdgeDrawing::detectEdges(Mat src)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_detectEdges_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_detectEdges_10
  (JNIEnv* env, jclass , jlong self, jlong src_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::detectEdges_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeDrawing>* me = (Ptr<cv::ximgproc::EdgeDrawing>*) self; //TODO: check for NULL
        Mat& src = *((Mat*)src_nativeObj);
        (*me)->detectEdges( src );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::EdgeDrawing::getEdgeImage(Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_getEdgeImage_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_getEdgeImage_10
  (JNIEnv* env, jclass , jlong self, jlong dst_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getEdgeImage_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeDrawing>* me = (Ptr<cv::ximgproc::EdgeDrawing>*) self; //TODO: check for NULL
        Mat& dst = *((Mat*)dst_nativeObj);
        (*me)->getEdgeImage( dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::EdgeDrawing::getGradientImage(Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_getGradientImage_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_getGradientImage_10
  (JNIEnv* env, jclass , jlong self, jlong dst_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getGradientImage_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeDrawing>* me = (Ptr<cv::ximgproc::EdgeDrawing>*) self; //TODO: check for NULL
        Mat& dst = *((Mat*)dst_nativeObj);
        (*me)->getGradientImage( dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  vector_vector_Point cv::ximgproc::EdgeDrawing::getSegments()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_EdgeDrawing_getSegments_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_EdgeDrawing_getSegments_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getSegments_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeDrawing>* me = (Ptr<cv::ximgproc::EdgeDrawing>*) self; //TODO: check for NULL
        std::vector< std::vector<Point> > _ret_val_vector_ = (*me)->getSegments();
        Mat* _retval_ = new Mat();
        vector_vector_Point_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  vector_int cv::ximgproc::EdgeDrawing::getSegmentIndicesOfLines()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_EdgeDrawing_getSegmentIndicesOfLines_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_EdgeDrawing_getSegmentIndicesOfLines_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getSegmentIndicesOfLines_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeDrawing>* me = (Ptr<cv::ximgproc::EdgeDrawing>*) self; //TODO: check for NULL
        std::vector<int> _ret_val_vector_ = (*me)->getSegmentIndicesOfLines();
        Mat* _retval_ = new Mat();
        vector_int_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::EdgeDrawing::detectLines(Mat& lines)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_detectLines_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_detectLines_10
  (JNIEnv* env, jclass , jlong self, jlong lines_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::detectLines_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeDrawing>* me = (Ptr<cv::ximgproc::EdgeDrawing>*) self; //TODO: check for NULL
        Mat& lines = *((Mat*)lines_nativeObj);
        (*me)->detectLines( lines );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::EdgeDrawing::detectEllipses(Mat& ellipses)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_detectEllipses_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_detectEllipses_10
  (JNIEnv* env, jclass , jlong self, jlong ellipses_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::detectEllipses_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeDrawing>* me = (Ptr<cv::ximgproc::EdgeDrawing>*) self; //TODO: check for NULL
        Mat& ellipses = *((Mat*)ellipses_nativeObj);
        (*me)->detectEllipses( ellipses );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::EdgeDrawing::setParams(EdgeDrawing_Params parameters)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_setParams_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_setParams_10
  (JNIEnv* env, jclass , jlong self, jlong parameters_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setParams_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::EdgeDrawing>* me = (Ptr<cv::ximgproc::EdgeDrawing>*) self; //TODO: check for NULL
        (*me)->setParams( (*(cv::ximgproc::EdgeDrawing::Params*)parameters_nativeObj) );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::EdgeDrawing>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::EdgeDrawing>*) self;
}


//
//   cv::ximgproc::EdgeDrawing::Params::Params()
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_EdgeDrawing_1Params_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_EdgeDrawing_1Params_10
  (JNIEnv* env, jclass )
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::EdgeDrawing_1Params_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* _retval_ = new cv::ximgproc::EdgeDrawing::Params();
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// bool EdgeDrawing_Params::PFmode
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1PFmode_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1PFmode_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::get_1PFmode_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        return me->PFmode;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void EdgeDrawing_Params::PFmode
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1PFmode_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1PFmode_10
  (JNIEnv* env, jclass , jlong self, jboolean PFmode)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::set_1PFmode_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        me->PFmode = ( (bool)PFmode );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int EdgeDrawing_Params::EdgeDetectionOperator
//

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1EdgeDetectionOperator_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1EdgeDetectionOperator_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::get_1EdgeDetectionOperator_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        return me->EdgeDetectionOperator;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void EdgeDrawing_Params::EdgeDetectionOperator
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1EdgeDetectionOperator_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1EdgeDetectionOperator_10
  (JNIEnv* env, jclass , jlong self, jint EdgeDetectionOperator)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::set_1EdgeDetectionOperator_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        me->EdgeDetectionOperator = ( (int)EdgeDetectionOperator );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int EdgeDrawing_Params::GradientThresholdValue
//

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1GradientThresholdValue_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1GradientThresholdValue_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::get_1GradientThresholdValue_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        return me->GradientThresholdValue;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void EdgeDrawing_Params::GradientThresholdValue
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1GradientThresholdValue_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1GradientThresholdValue_10
  (JNIEnv* env, jclass , jlong self, jint GradientThresholdValue)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::set_1GradientThresholdValue_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        me->GradientThresholdValue = ( (int)GradientThresholdValue );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int EdgeDrawing_Params::AnchorThresholdValue
//

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1AnchorThresholdValue_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1AnchorThresholdValue_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::get_1AnchorThresholdValue_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        return me->AnchorThresholdValue;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void EdgeDrawing_Params::AnchorThresholdValue
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1AnchorThresholdValue_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1AnchorThresholdValue_10
  (JNIEnv* env, jclass , jlong self, jint AnchorThresholdValue)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::set_1AnchorThresholdValue_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        me->AnchorThresholdValue = ( (int)AnchorThresholdValue );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int EdgeDrawing_Params::ScanInterval
//

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1ScanInterval_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1ScanInterval_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::get_1ScanInterval_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        return me->ScanInterval;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void EdgeDrawing_Params::ScanInterval
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1ScanInterval_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1ScanInterval_10
  (JNIEnv* env, jclass , jlong self, jint ScanInterval)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::set_1ScanInterval_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        me->ScanInterval = ( (int)ScanInterval );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int EdgeDrawing_Params::MinPathLength
//

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1MinPathLength_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1MinPathLength_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::get_1MinPathLength_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        return me->MinPathLength;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void EdgeDrawing_Params::MinPathLength
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1MinPathLength_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1MinPathLength_10
  (JNIEnv* env, jclass , jlong self, jint MinPathLength)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::set_1MinPathLength_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        me->MinPathLength = ( (int)MinPathLength );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// float EdgeDrawing_Params::Sigma
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1Sigma_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1Sigma_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::get_1Sigma_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        return me->Sigma;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void EdgeDrawing_Params::Sigma
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1Sigma_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1Sigma_10
  (JNIEnv* env, jclass , jlong self, jfloat Sigma)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::set_1Sigma_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        me->Sigma = ( (float)Sigma );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// bool EdgeDrawing_Params::SumFlag
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1SumFlag_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1SumFlag_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::get_1SumFlag_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        return me->SumFlag;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void EdgeDrawing_Params::SumFlag
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1SumFlag_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1SumFlag_10
  (JNIEnv* env, jclass , jlong self, jboolean SumFlag)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::set_1SumFlag_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        me->SumFlag = ( (bool)SumFlag );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// bool EdgeDrawing_Params::NFAValidation
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1NFAValidation_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1NFAValidation_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::get_1NFAValidation_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        return me->NFAValidation;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void EdgeDrawing_Params::NFAValidation
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1NFAValidation_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1NFAValidation_10
  (JNIEnv* env, jclass , jlong self, jboolean NFAValidation)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::set_1NFAValidation_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        me->NFAValidation = ( (bool)NFAValidation );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int EdgeDrawing_Params::MinLineLength
//

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1MinLineLength_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1MinLineLength_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::get_1MinLineLength_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        return me->MinLineLength;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void EdgeDrawing_Params::MinLineLength
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1MinLineLength_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1MinLineLength_10
  (JNIEnv* env, jclass , jlong self, jint MinLineLength)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::set_1MinLineLength_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        me->MinLineLength = ( (int)MinLineLength );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// double EdgeDrawing_Params::MaxDistanceBetweenTwoLines
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1MaxDistanceBetweenTwoLines_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1MaxDistanceBetweenTwoLines_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::get_1MaxDistanceBetweenTwoLines_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        return me->MaxDistanceBetweenTwoLines;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void EdgeDrawing_Params::MaxDistanceBetweenTwoLines
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1MaxDistanceBetweenTwoLines_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1MaxDistanceBetweenTwoLines_10
  (JNIEnv* env, jclass , jlong self, jdouble MaxDistanceBetweenTwoLines)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::set_1MaxDistanceBetweenTwoLines_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        me->MaxDistanceBetweenTwoLines = ( (double)MaxDistanceBetweenTwoLines );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// double EdgeDrawing_Params::LineFitErrorThreshold
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1LineFitErrorThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1LineFitErrorThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::get_1LineFitErrorThreshold_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        return me->LineFitErrorThreshold;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void EdgeDrawing_Params::LineFitErrorThreshold
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1LineFitErrorThreshold_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1LineFitErrorThreshold_10
  (JNIEnv* env, jclass , jlong self, jdouble LineFitErrorThreshold)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::set_1LineFitErrorThreshold_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        me->LineFitErrorThreshold = ( (double)LineFitErrorThreshold );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// double EdgeDrawing_Params::MaxErrorThreshold
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1MaxErrorThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_get_1MaxErrorThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::get_1MaxErrorThreshold_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        return me->MaxErrorThreshold;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void EdgeDrawing_Params::MaxErrorThreshold
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1MaxErrorThreshold_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_set_1MaxErrorThreshold_10
  (JNIEnv* env, jclass , jlong self, jdouble MaxErrorThreshold)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::set_1MaxErrorThreshold_10()";
    try {
        LOGD("%s", method_name);
        cv::ximgproc::EdgeDrawing::Params* me = (cv::ximgproc::EdgeDrawing::Params*) self; //TODO: check for NULL
        me->MaxErrorThreshold = ( (double)MaxErrorThreshold );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void cv::ximgproc::EdgeDrawing::Params::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_EdgeDrawing_1Params_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::ximgproc::EdgeDrawing::Params*) self;
}


//
//  void cv::ximgproc::FastBilateralSolverFilter::filter(Mat src, Mat confidence, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_FastBilateralSolverFilter_filter_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_FastBilateralSolverFilter_filter_10
  (JNIEnv* env, jclass , jlong self, jlong src_nativeObj, jlong confidence_nativeObj, jlong dst_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::filter_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::FastBilateralSolverFilter>* me = (Ptr<cv::ximgproc::FastBilateralSolverFilter>*) self; //TODO: check for NULL
        Mat& src = *((Mat*)src_nativeObj);
        Mat& confidence = *((Mat*)confidence_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        (*me)->filter( src, confidence, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::FastBilateralSolverFilter>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_FastBilateralSolverFilter_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_FastBilateralSolverFilter_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::FastBilateralSolverFilter>*) self;
}


//
//  void cv::ximgproc::FastGlobalSmootherFilter::filter(Mat src, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_FastGlobalSmootherFilter_filter_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_FastGlobalSmootherFilter_filter_10
  (JNIEnv* env, jclass , jlong self, jlong src_nativeObj, jlong dst_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::filter_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::FastGlobalSmootherFilter>* me = (Ptr<cv::ximgproc::FastGlobalSmootherFilter>*) self; //TODO: check for NULL
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        (*me)->filter( src, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::FastGlobalSmootherFilter>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_FastGlobalSmootherFilter_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_FastGlobalSmootherFilter_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::FastGlobalSmootherFilter>*) self;
}


//
//  void cv::ximgproc::FastLineDetector::detect(Mat image, Mat& lines)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_FastLineDetector_detect_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_FastLineDetector_detect_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong lines_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::detect_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::FastLineDetector>* me = (Ptr<cv::ximgproc::FastLineDetector>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& lines = *((Mat*)lines_nativeObj);
        (*me)->detect( image, lines );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::FastLineDetector::drawSegments(Mat& image, Mat lines, bool draw_arrow = false, Scalar linecolor = Scalar(0, 0, 255), int linethickness = 1)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_FastLineDetector_drawSegments_10 (JNIEnv*, jclass, jlong, jlong, jlong, jboolean, jdouble, jdouble, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_FastLineDetector_drawSegments_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong lines_nativeObj, jboolean draw_arrow, jdouble linecolor_val0, jdouble linecolor_val1, jdouble linecolor_val2, jdouble linecolor_val3, jint linethickness)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::drawSegments_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::FastLineDetector>* me = (Ptr<cv::ximgproc::FastLineDetector>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& lines = *((Mat*)lines_nativeObj);
        Scalar linecolor(linecolor_val0, linecolor_val1, linecolor_val2, linecolor_val3);
        (*me)->drawSegments( image, lines, (bool)draw_arrow, linecolor, (int)linethickness );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_FastLineDetector_drawSegments_11 (JNIEnv*, jclass, jlong, jlong, jlong, jboolean, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_FastLineDetector_drawSegments_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong lines_nativeObj, jboolean draw_arrow, jdouble linecolor_val0, jdouble linecolor_val1, jdouble linecolor_val2, jdouble linecolor_val3)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::drawSegments_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::FastLineDetector>* me = (Ptr<cv::ximgproc::FastLineDetector>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& lines = *((Mat*)lines_nativeObj);
        Scalar linecolor(linecolor_val0, linecolor_val1, linecolor_val2, linecolor_val3);
        (*me)->drawSegments( image, lines, (bool)draw_arrow, linecolor );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_FastLineDetector_drawSegments_12 (JNIEnv*, jclass, jlong, jlong, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_FastLineDetector_drawSegments_12
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong lines_nativeObj, jboolean draw_arrow)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::drawSegments_12()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::FastLineDetector>* me = (Ptr<cv::ximgproc::FastLineDetector>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& lines = *((Mat*)lines_nativeObj);
        (*me)->drawSegments( image, lines, (bool)draw_arrow );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_FastLineDetector_drawSegments_13 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_FastLineDetector_drawSegments_13
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong lines_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::drawSegments_13()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::FastLineDetector>* me = (Ptr<cv::ximgproc::FastLineDetector>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& lines = *((Mat*)lines_nativeObj);
        (*me)->drawSegments( image, lines );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::FastLineDetector>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_FastLineDetector_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_FastLineDetector_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::FastLineDetector>*) self;
}


//
//  void cv::ximgproc::GuidedFilter::filter(Mat src, Mat& dst, int dDepth = -1)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_GuidedFilter_filter_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_GuidedFilter_filter_10
  (JNIEnv* env, jclass , jlong self, jlong src_nativeObj, jlong dst_nativeObj, jint dDepth)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::filter_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::GuidedFilter>* me = (Ptr<cv::ximgproc::GuidedFilter>*) self; //TODO: check for NULL
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        (*me)->filter( src, dst, (int)dDepth );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_GuidedFilter_filter_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_GuidedFilter_filter_11
  (JNIEnv* env, jclass , jlong self, jlong src_nativeObj, jlong dst_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::filter_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::GuidedFilter>* me = (Ptr<cv::ximgproc::GuidedFilter>*) self; //TODO: check for NULL
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        (*me)->filter( src, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::GuidedFilter>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_GuidedFilter_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_GuidedFilter_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::GuidedFilter>*) self;
}


//
//  void cv::ximgproc::RFFeatureGetter::getFeatures(Mat src, Mat features, int gnrmRad, int gsmthRad, int shrink, int outNum, int gradNum)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RFFeatureGetter_getFeatures_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jint, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RFFeatureGetter_getFeatures_10
  (JNIEnv* env, jclass , jlong self, jlong src_nativeObj, jlong features_nativeObj, jint gnrmRad, jint gsmthRad, jint shrink, jint outNum, jint gradNum)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getFeatures_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RFFeatureGetter>* me = (Ptr<cv::ximgproc::RFFeatureGetter>*) self; //TODO: check for NULL
        Mat& src = *((Mat*)src_nativeObj);
        Mat& features = *((Mat*)features_nativeObj);
        (*me)->getFeatures( src, features, (int)gnrmRad, (int)gsmthRad, (int)shrink, (int)outNum, (int)gradNum );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::RFFeatureGetter>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RFFeatureGetter_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RFFeatureGetter_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::RFFeatureGetter>*) self;
}


//
//  void cv::ximgproc::RICInterpolator::setK(int k = 32)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setK_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setK_10
  (JNIEnv* env, jclass , jlong self, jint k)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setK_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setK( (int)k );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setK_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setK_11
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setK_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setK();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::ximgproc::RICInterpolator::getK()
//

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_RICInterpolator_getK_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_RICInterpolator_getK_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getK_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        return (*me)->getK();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::RICInterpolator::setCostMap(Mat costMap)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setCostMap_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setCostMap_10
  (JNIEnv* env, jclass , jlong self, jlong costMap_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setCostMap_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        Mat& costMap = *((Mat*)costMap_nativeObj);
        (*me)->setCostMap( costMap );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::RICInterpolator::setSuperpixelSize(int spSize = 15)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setSuperpixelSize_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setSuperpixelSize_10
  (JNIEnv* env, jclass , jlong self, jint spSize)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setSuperpixelSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setSuperpixelSize( (int)spSize );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setSuperpixelSize_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setSuperpixelSize_11
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setSuperpixelSize_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setSuperpixelSize();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::ximgproc::RICInterpolator::getSuperpixelSize()
//

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_RICInterpolator_getSuperpixelSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_RICInterpolator_getSuperpixelSize_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getSuperpixelSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        return (*me)->getSuperpixelSize();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::RICInterpolator::setSuperpixelNNCnt(int spNN = 150)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setSuperpixelNNCnt_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setSuperpixelNNCnt_10
  (JNIEnv* env, jclass , jlong self, jint spNN)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setSuperpixelNNCnt_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setSuperpixelNNCnt( (int)spNN );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setSuperpixelNNCnt_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setSuperpixelNNCnt_11
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setSuperpixelNNCnt_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setSuperpixelNNCnt();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::ximgproc::RICInterpolator::getSuperpixelNNCnt()
//

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_RICInterpolator_getSuperpixelNNCnt_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_RICInterpolator_getSuperpixelNNCnt_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getSuperpixelNNCnt_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        return (*me)->getSuperpixelNNCnt();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::RICInterpolator::setSuperpixelRuler(float ruler = 15.f)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setSuperpixelRuler_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setSuperpixelRuler_10
  (JNIEnv* env, jclass , jlong self, jfloat ruler)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setSuperpixelRuler_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setSuperpixelRuler( (float)ruler );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setSuperpixelRuler_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setSuperpixelRuler_11
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setSuperpixelRuler_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setSuperpixelRuler();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::ximgproc::RICInterpolator::getSuperpixelRuler()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_RICInterpolator_getSuperpixelRuler_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_RICInterpolator_getSuperpixelRuler_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getSuperpixelRuler_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        return (*me)->getSuperpixelRuler();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::RICInterpolator::setSuperpixelMode(int mode = 100)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setSuperpixelMode_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setSuperpixelMode_10
  (JNIEnv* env, jclass , jlong self, jint mode)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setSuperpixelMode_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setSuperpixelMode( (int)mode );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setSuperpixelMode_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setSuperpixelMode_11
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setSuperpixelMode_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setSuperpixelMode();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::ximgproc::RICInterpolator::getSuperpixelMode()
//

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_RICInterpolator_getSuperpixelMode_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_RICInterpolator_getSuperpixelMode_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getSuperpixelMode_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        return (*me)->getSuperpixelMode();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::RICInterpolator::setAlpha(float alpha = 0.7f)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setAlpha_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setAlpha_10
  (JNIEnv* env, jclass , jlong self, jfloat alpha)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setAlpha_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setAlpha( (float)alpha );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setAlpha_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setAlpha_11
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setAlpha_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setAlpha();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::ximgproc::RICInterpolator::getAlpha()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_RICInterpolator_getAlpha_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_RICInterpolator_getAlpha_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getAlpha_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        return (*me)->getAlpha();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::RICInterpolator::setModelIter(int modelIter = 4)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setModelIter_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setModelIter_10
  (JNIEnv* env, jclass , jlong self, jint modelIter)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setModelIter_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setModelIter( (int)modelIter );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setModelIter_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setModelIter_11
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setModelIter_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setModelIter();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::ximgproc::RICInterpolator::getModelIter()
//

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_RICInterpolator_getModelIter_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_RICInterpolator_getModelIter_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getModelIter_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        return (*me)->getModelIter();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::RICInterpolator::setRefineModels(bool refineModles = true)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setRefineModels_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setRefineModels_10
  (JNIEnv* env, jclass , jlong self, jboolean refineModles)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setRefineModels_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setRefineModels( (bool)refineModles );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setRefineModels_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setRefineModels_11
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setRefineModels_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setRefineModels();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  bool cv::ximgproc::RICInterpolator::getRefineModels()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ximgproc_RICInterpolator_getRefineModels_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ximgproc_RICInterpolator_getRefineModels_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getRefineModels_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        return (*me)->getRefineModels();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::RICInterpolator::setMaxFlow(float maxFlow = 250.f)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setMaxFlow_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setMaxFlow_10
  (JNIEnv* env, jclass , jlong self, jfloat maxFlow)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setMaxFlow_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setMaxFlow( (float)maxFlow );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setMaxFlow_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setMaxFlow_11
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setMaxFlow_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setMaxFlow();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::ximgproc::RICInterpolator::getMaxFlow()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_RICInterpolator_getMaxFlow_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_RICInterpolator_getMaxFlow_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getMaxFlow_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        return (*me)->getMaxFlow();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::RICInterpolator::setUseVariationalRefinement(bool use_variational_refinement = false)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setUseVariationalRefinement_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setUseVariationalRefinement_10
  (JNIEnv* env, jclass , jlong self, jboolean use_variational_refinement)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setUseVariationalRefinement_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setUseVariationalRefinement( (bool)use_variational_refinement );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setUseVariationalRefinement_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setUseVariationalRefinement_11
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setUseVariationalRefinement_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setUseVariationalRefinement();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  bool cv::ximgproc::RICInterpolator::getUseVariationalRefinement()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ximgproc_RICInterpolator_getUseVariationalRefinement_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ximgproc_RICInterpolator_getUseVariationalRefinement_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getUseVariationalRefinement_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        return (*me)->getUseVariationalRefinement();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::RICInterpolator::setUseGlobalSmootherFilter(bool use_FGS = true)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setUseGlobalSmootherFilter_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setUseGlobalSmootherFilter_10
  (JNIEnv* env, jclass , jlong self, jboolean use_FGS)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setUseGlobalSmootherFilter_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setUseGlobalSmootherFilter( (bool)use_FGS );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setUseGlobalSmootherFilter_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setUseGlobalSmootherFilter_11
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setUseGlobalSmootherFilter_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setUseGlobalSmootherFilter();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  bool cv::ximgproc::RICInterpolator::getUseGlobalSmootherFilter()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_ximgproc_RICInterpolator_getUseGlobalSmootherFilter_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ximgproc_RICInterpolator_getUseGlobalSmootherFilter_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getUseGlobalSmootherFilter_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        return (*me)->getUseGlobalSmootherFilter();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::RICInterpolator::setFGSLambda(float lambda = 500.f)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setFGSLambda_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setFGSLambda_10
  (JNIEnv* env, jclass , jlong self, jfloat lambda)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setFGSLambda_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setFGSLambda( (float)lambda );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setFGSLambda_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setFGSLambda_11
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setFGSLambda_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setFGSLambda();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::ximgproc::RICInterpolator::getFGSLambda()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_RICInterpolator_getFGSLambda_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_RICInterpolator_getFGSLambda_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getFGSLambda_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        return (*me)->getFGSLambda();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::RICInterpolator::setFGSSigma(float sigma = 1.5f)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setFGSSigma_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setFGSSigma_10
  (JNIEnv* env, jclass , jlong self, jfloat sigma)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setFGSSigma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setFGSSigma( (float)sigma );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setFGSSigma_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_setFGSSigma_11
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::setFGSSigma_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        (*me)->setFGSSigma();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::ximgproc::RICInterpolator::getFGSSigma()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_RICInterpolator_getFGSSigma_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_RICInterpolator_getFGSSigma_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getFGSSigma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RICInterpolator>* me = (Ptr<cv::ximgproc::RICInterpolator>*) self; //TODO: check for NULL
        return (*me)->getFGSSigma();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::RICInterpolator>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RICInterpolator_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::RICInterpolator>*) self;
}


//
// static Ptr_RidgeDetectionFilter cv::ximgproc::RidgeDetectionFilter::create(int ddepth = CV_32FC1, int dx = 1, int dy = 1, int ksize = 3, int out_dtype = CV_8UC1, double scale = 1, double delta = 0, int borderType = BORDER_DEFAULT)
//

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_RidgeDetectionFilter_create_10 (JNIEnv*, jclass, jint, jint, jint, jint, jint, jdouble, jdouble, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_RidgeDetectionFilter_create_10
  (JNIEnv* env, jclass , jint ddepth, jint dx, jint dy, jint ksize, jint out_dtype, jdouble scale, jdouble delta, jint borderType)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::RidgeDetectionFilter> Ptr_RidgeDetectionFilter;
        Ptr_RidgeDetectionFilter _retval_ = cv::ximgproc::RidgeDetectionFilter::create( (int)ddepth, (int)dx, (int)dy, (int)ksize, (int)out_dtype, (double)scale, (double)delta, (int)borderType );
        return (jlong)(new Ptr_RidgeDetectionFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_RidgeDetectionFilter_create_11 (JNIEnv*, jclass, jint, jint, jint, jint, jint, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_RidgeDetectionFilter_create_11
  (JNIEnv* env, jclass , jint ddepth, jint dx, jint dy, jint ksize, jint out_dtype, jdouble scale, jdouble delta)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::RidgeDetectionFilter> Ptr_RidgeDetectionFilter;
        Ptr_RidgeDetectionFilter _retval_ = cv::ximgproc::RidgeDetectionFilter::create( (int)ddepth, (int)dx, (int)dy, (int)ksize, (int)out_dtype, (double)scale, (double)delta );
        return (jlong)(new Ptr_RidgeDetectionFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_RidgeDetectionFilter_create_12 (JNIEnv*, jclass, jint, jint, jint, jint, jint, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_RidgeDetectionFilter_create_12
  (JNIEnv* env, jclass , jint ddepth, jint dx, jint dy, jint ksize, jint out_dtype, jdouble scale)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::create_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::RidgeDetectionFilter> Ptr_RidgeDetectionFilter;
        Ptr_RidgeDetectionFilter _retval_ = cv::ximgproc::RidgeDetectionFilter::create( (int)ddepth, (int)dx, (int)dy, (int)ksize, (int)out_dtype, (double)scale );
        return (jlong)(new Ptr_RidgeDetectionFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_RidgeDetectionFilter_create_13 (JNIEnv*, jclass, jint, jint, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_RidgeDetectionFilter_create_13
  (JNIEnv* env, jclass , jint ddepth, jint dx, jint dy, jint ksize, jint out_dtype)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::create_13()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::RidgeDetectionFilter> Ptr_RidgeDetectionFilter;
        Ptr_RidgeDetectionFilter _retval_ = cv::ximgproc::RidgeDetectionFilter::create( (int)ddepth, (int)dx, (int)dy, (int)ksize, (int)out_dtype );
        return (jlong)(new Ptr_RidgeDetectionFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_RidgeDetectionFilter_create_14 (JNIEnv*, jclass, jint, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_RidgeDetectionFilter_create_14
  (JNIEnv* env, jclass , jint ddepth, jint dx, jint dy, jint ksize)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::create_14()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::RidgeDetectionFilter> Ptr_RidgeDetectionFilter;
        Ptr_RidgeDetectionFilter _retval_ = cv::ximgproc::RidgeDetectionFilter::create( (int)ddepth, (int)dx, (int)dy, (int)ksize );
        return (jlong)(new Ptr_RidgeDetectionFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_RidgeDetectionFilter_create_15 (JNIEnv*, jclass, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_RidgeDetectionFilter_create_15
  (JNIEnv* env, jclass , jint ddepth, jint dx, jint dy)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::create_15()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::RidgeDetectionFilter> Ptr_RidgeDetectionFilter;
        Ptr_RidgeDetectionFilter _retval_ = cv::ximgproc::RidgeDetectionFilter::create( (int)ddepth, (int)dx, (int)dy );
        return (jlong)(new Ptr_RidgeDetectionFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_RidgeDetectionFilter_create_16 (JNIEnv*, jclass, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_RidgeDetectionFilter_create_16
  (JNIEnv* env, jclass , jint ddepth, jint dx)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::create_16()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::RidgeDetectionFilter> Ptr_RidgeDetectionFilter;
        Ptr_RidgeDetectionFilter _retval_ = cv::ximgproc::RidgeDetectionFilter::create( (int)ddepth, (int)dx );
        return (jlong)(new Ptr_RidgeDetectionFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_RidgeDetectionFilter_create_17 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_RidgeDetectionFilter_create_17
  (JNIEnv* env, jclass , jint ddepth)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::create_17()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::RidgeDetectionFilter> Ptr_RidgeDetectionFilter;
        Ptr_RidgeDetectionFilter _retval_ = cv::ximgproc::RidgeDetectionFilter::create( (int)ddepth );
        return (jlong)(new Ptr_RidgeDetectionFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_RidgeDetectionFilter_create_18 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ximgproc_RidgeDetectionFilter_create_18
  (JNIEnv* env, jclass )
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::create_18()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ximgproc::RidgeDetectionFilter> Ptr_RidgeDetectionFilter;
        Ptr_RidgeDetectionFilter _retval_ = cv::ximgproc::RidgeDetectionFilter::create();
        return (jlong)(new Ptr_RidgeDetectionFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::RidgeDetectionFilter::getRidgeFilteredImage(Mat _img, Mat& out)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RidgeDetectionFilter_getRidgeFilteredImage_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RidgeDetectionFilter_getRidgeFilteredImage_10
  (JNIEnv* env, jclass , jlong self, jlong _img_nativeObj, jlong out_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getRidgeFilteredImage_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::RidgeDetectionFilter>* me = (Ptr<cv::ximgproc::RidgeDetectionFilter>*) self; //TODO: check for NULL
        Mat& _img = *((Mat*)_img_nativeObj);
        Mat& out = *((Mat*)out_nativeObj);
        (*me)->getRidgeFilteredImage( _img, out );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::RidgeDetectionFilter>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RidgeDetectionFilter_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_RidgeDetectionFilter_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::RidgeDetectionFilter>*) self;
}


//
//  int cv::ximgproc::ScanSegment::getNumberOfSuperpixels()
//

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_ScanSegment_getNumberOfSuperpixels_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_ScanSegment_getNumberOfSuperpixels_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getNumberOfSuperpixels_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::ScanSegment>* me = (Ptr<cv::ximgproc::ScanSegment>*) self; //TODO: check for NULL
        return (*me)->getNumberOfSuperpixels();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::ScanSegment::iterate(Mat img)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_ScanSegment_iterate_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_ScanSegment_iterate_10
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::iterate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::ScanSegment>* me = (Ptr<cv::ximgproc::ScanSegment>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        (*me)->iterate( img );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::ScanSegment::getLabels(Mat& labels_out)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_ScanSegment_getLabels_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_ScanSegment_getLabels_10
  (JNIEnv* env, jclass , jlong self, jlong labels_out_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getLabels_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::ScanSegment>* me = (Ptr<cv::ximgproc::ScanSegment>*) self; //TODO: check for NULL
        Mat& labels_out = *((Mat*)labels_out_nativeObj);
        (*me)->getLabels( labels_out );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::ScanSegment::getLabelContourMask(Mat& image, bool thick_line = false)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_ScanSegment_getLabelContourMask_10 (JNIEnv*, jclass, jlong, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_ScanSegment_getLabelContourMask_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jboolean thick_line)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getLabelContourMask_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::ScanSegment>* me = (Ptr<cv::ximgproc::ScanSegment>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        (*me)->getLabelContourMask( image, (bool)thick_line );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_ScanSegment_getLabelContourMask_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_ScanSegment_getLabelContourMask_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getLabelContourMask_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::ScanSegment>* me = (Ptr<cv::ximgproc::ScanSegment>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        (*me)->getLabelContourMask( image );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::ScanSegment>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_ScanSegment_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_ScanSegment_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::ScanSegment>*) self;
}


//
//  void cv::ximgproc::SparseMatchInterpolator::interpolate(Mat from_image, Mat from_points, Mat to_image, Mat to_points, Mat& dense_flow)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SparseMatchInterpolator_interpolate_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SparseMatchInterpolator_interpolate_10
  (JNIEnv* env, jclass , jlong self, jlong from_image_nativeObj, jlong from_points_nativeObj, jlong to_image_nativeObj, jlong to_points_nativeObj, jlong dense_flow_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::interpolate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::SparseMatchInterpolator>* me = (Ptr<cv::ximgproc::SparseMatchInterpolator>*) self; //TODO: check for NULL
        Mat& from_image = *((Mat*)from_image_nativeObj);
        Mat& from_points = *((Mat*)from_points_nativeObj);
        Mat& to_image = *((Mat*)to_image_nativeObj);
        Mat& to_points = *((Mat*)to_points_nativeObj);
        Mat& dense_flow = *((Mat*)dense_flow_nativeObj);
        (*me)->interpolate( from_image, from_points, to_image, to_points, dense_flow );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::SparseMatchInterpolator>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SparseMatchInterpolator_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SparseMatchInterpolator_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::SparseMatchInterpolator>*) self;
}


//
//  void cv::ximgproc::StructuredEdgeDetection::detectEdges(Mat src, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_StructuredEdgeDetection_detectEdges_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_StructuredEdgeDetection_detectEdges_10
  (JNIEnv* env, jclass , jlong self, jlong src_nativeObj, jlong dst_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::detectEdges_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::StructuredEdgeDetection>* me = (Ptr<cv::ximgproc::StructuredEdgeDetection>*) self; //TODO: check for NULL
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        (*me)->detectEdges( src, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::StructuredEdgeDetection::computeOrientation(Mat src, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_StructuredEdgeDetection_computeOrientation_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_StructuredEdgeDetection_computeOrientation_10
  (JNIEnv* env, jclass , jlong self, jlong src_nativeObj, jlong dst_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::computeOrientation_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::StructuredEdgeDetection>* me = (Ptr<cv::ximgproc::StructuredEdgeDetection>*) self; //TODO: check for NULL
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        (*me)->computeOrientation( src, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::StructuredEdgeDetection::edgesNms(Mat edge_image, Mat orientation_image, Mat& dst, int r = 2, int s = 0, float m = 1, bool isParallel = true)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_StructuredEdgeDetection_edgesNms_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jint, jint, jfloat, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_StructuredEdgeDetection_edgesNms_10
  (JNIEnv* env, jclass , jlong self, jlong edge_image_nativeObj, jlong orientation_image_nativeObj, jlong dst_nativeObj, jint r, jint s, jfloat m, jboolean isParallel)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::edgesNms_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::StructuredEdgeDetection>* me = (Ptr<cv::ximgproc::StructuredEdgeDetection>*) self; //TODO: check for NULL
        Mat& edge_image = *((Mat*)edge_image_nativeObj);
        Mat& orientation_image = *((Mat*)orientation_image_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        (*me)->edgesNms( edge_image, orientation_image, dst, (int)r, (int)s, (float)m, (bool)isParallel );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_StructuredEdgeDetection_edgesNms_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jint, jint, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_StructuredEdgeDetection_edgesNms_11
  (JNIEnv* env, jclass , jlong self, jlong edge_image_nativeObj, jlong orientation_image_nativeObj, jlong dst_nativeObj, jint r, jint s, jfloat m)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::edgesNms_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::StructuredEdgeDetection>* me = (Ptr<cv::ximgproc::StructuredEdgeDetection>*) self; //TODO: check for NULL
        Mat& edge_image = *((Mat*)edge_image_nativeObj);
        Mat& orientation_image = *((Mat*)orientation_image_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        (*me)->edgesNms( edge_image, orientation_image, dst, (int)r, (int)s, (float)m );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_StructuredEdgeDetection_edgesNms_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_StructuredEdgeDetection_edgesNms_12
  (JNIEnv* env, jclass , jlong self, jlong edge_image_nativeObj, jlong orientation_image_nativeObj, jlong dst_nativeObj, jint r, jint s)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::edgesNms_12()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::StructuredEdgeDetection>* me = (Ptr<cv::ximgproc::StructuredEdgeDetection>*) self; //TODO: check for NULL
        Mat& edge_image = *((Mat*)edge_image_nativeObj);
        Mat& orientation_image = *((Mat*)orientation_image_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        (*me)->edgesNms( edge_image, orientation_image, dst, (int)r, (int)s );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_StructuredEdgeDetection_edgesNms_13 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_StructuredEdgeDetection_edgesNms_13
  (JNIEnv* env, jclass , jlong self, jlong edge_image_nativeObj, jlong orientation_image_nativeObj, jlong dst_nativeObj, jint r)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::edgesNms_13()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::StructuredEdgeDetection>* me = (Ptr<cv::ximgproc::StructuredEdgeDetection>*) self; //TODO: check for NULL
        Mat& edge_image = *((Mat*)edge_image_nativeObj);
        Mat& orientation_image = *((Mat*)orientation_image_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        (*me)->edgesNms( edge_image, orientation_image, dst, (int)r );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_StructuredEdgeDetection_edgesNms_14 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_StructuredEdgeDetection_edgesNms_14
  (JNIEnv* env, jclass , jlong self, jlong edge_image_nativeObj, jlong orientation_image_nativeObj, jlong dst_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::edgesNms_14()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::StructuredEdgeDetection>* me = (Ptr<cv::ximgproc::StructuredEdgeDetection>*) self; //TODO: check for NULL
        Mat& edge_image = *((Mat*)edge_image_nativeObj);
        Mat& orientation_image = *((Mat*)orientation_image_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        (*me)->edgesNms( edge_image, orientation_image, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::StructuredEdgeDetection>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_StructuredEdgeDetection_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_StructuredEdgeDetection_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::StructuredEdgeDetection>*) self;
}


//
//  int cv::ximgproc::SuperpixelLSC::getNumberOfSuperpixels()
//

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_SuperpixelLSC_getNumberOfSuperpixels_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_SuperpixelLSC_getNumberOfSuperpixels_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getNumberOfSuperpixels_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::SuperpixelLSC>* me = (Ptr<cv::ximgproc::SuperpixelLSC>*) self; //TODO: check for NULL
        return (*me)->getNumberOfSuperpixels();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::SuperpixelLSC::iterate(int num_iterations = 10)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelLSC_iterate_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelLSC_iterate_10
  (JNIEnv* env, jclass , jlong self, jint num_iterations)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::iterate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::SuperpixelLSC>* me = (Ptr<cv::ximgproc::SuperpixelLSC>*) self; //TODO: check for NULL
        (*me)->iterate( (int)num_iterations );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelLSC_iterate_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelLSC_iterate_11
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::iterate_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::SuperpixelLSC>* me = (Ptr<cv::ximgproc::SuperpixelLSC>*) self; //TODO: check for NULL
        (*me)->iterate();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::SuperpixelLSC::getLabels(Mat& labels_out)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelLSC_getLabels_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelLSC_getLabels_10
  (JNIEnv* env, jclass , jlong self, jlong labels_out_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getLabels_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::SuperpixelLSC>* me = (Ptr<cv::ximgproc::SuperpixelLSC>*) self; //TODO: check for NULL
        Mat& labels_out = *((Mat*)labels_out_nativeObj);
        (*me)->getLabels( labels_out );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::SuperpixelLSC::getLabelContourMask(Mat& image, bool thick_line = true)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelLSC_getLabelContourMask_10 (JNIEnv*, jclass, jlong, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelLSC_getLabelContourMask_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jboolean thick_line)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getLabelContourMask_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::SuperpixelLSC>* me = (Ptr<cv::ximgproc::SuperpixelLSC>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        (*me)->getLabelContourMask( image, (bool)thick_line );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelLSC_getLabelContourMask_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelLSC_getLabelContourMask_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getLabelContourMask_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::SuperpixelLSC>* me = (Ptr<cv::ximgproc::SuperpixelLSC>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        (*me)->getLabelContourMask( image );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::SuperpixelLSC::enforceLabelConnectivity(int min_element_size = 25)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelLSC_enforceLabelConnectivity_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelLSC_enforceLabelConnectivity_10
  (JNIEnv* env, jclass , jlong self, jint min_element_size)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::enforceLabelConnectivity_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::SuperpixelLSC>* me = (Ptr<cv::ximgproc::SuperpixelLSC>*) self; //TODO: check for NULL
        (*me)->enforceLabelConnectivity( (int)min_element_size );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelLSC_enforceLabelConnectivity_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelLSC_enforceLabelConnectivity_11
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::enforceLabelConnectivity_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::SuperpixelLSC>* me = (Ptr<cv::ximgproc::SuperpixelLSC>*) self; //TODO: check for NULL
        (*me)->enforceLabelConnectivity();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::SuperpixelLSC>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelLSC_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelLSC_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::SuperpixelLSC>*) self;
}


//
//  int cv::ximgproc::SuperpixelSEEDS::getNumberOfSuperpixels()
//

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_SuperpixelSEEDS_getNumberOfSuperpixels_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_SuperpixelSEEDS_getNumberOfSuperpixels_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getNumberOfSuperpixels_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::SuperpixelSEEDS>* me = (Ptr<cv::ximgproc::SuperpixelSEEDS>*) self; //TODO: check for NULL
        return (*me)->getNumberOfSuperpixels();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::SuperpixelSEEDS::iterate(Mat img, int num_iterations = 4)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSEEDS_iterate_10 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSEEDS_iterate_10
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jint num_iterations)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::iterate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::SuperpixelSEEDS>* me = (Ptr<cv::ximgproc::SuperpixelSEEDS>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        (*me)->iterate( img, (int)num_iterations );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSEEDS_iterate_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSEEDS_iterate_11
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::iterate_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::SuperpixelSEEDS>* me = (Ptr<cv::ximgproc::SuperpixelSEEDS>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        (*me)->iterate( img );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::SuperpixelSEEDS::getLabels(Mat& labels_out)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSEEDS_getLabels_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSEEDS_getLabels_10
  (JNIEnv* env, jclass , jlong self, jlong labels_out_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getLabels_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::SuperpixelSEEDS>* me = (Ptr<cv::ximgproc::SuperpixelSEEDS>*) self; //TODO: check for NULL
        Mat& labels_out = *((Mat*)labels_out_nativeObj);
        (*me)->getLabels( labels_out );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::SuperpixelSEEDS::getLabelContourMask(Mat& image, bool thick_line = false)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSEEDS_getLabelContourMask_10 (JNIEnv*, jclass, jlong, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSEEDS_getLabelContourMask_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jboolean thick_line)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getLabelContourMask_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::SuperpixelSEEDS>* me = (Ptr<cv::ximgproc::SuperpixelSEEDS>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        (*me)->getLabelContourMask( image, (bool)thick_line );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSEEDS_getLabelContourMask_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSEEDS_getLabelContourMask_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getLabelContourMask_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::SuperpixelSEEDS>* me = (Ptr<cv::ximgproc::SuperpixelSEEDS>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        (*me)->getLabelContourMask( image );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::SuperpixelSEEDS>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSEEDS_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSEEDS_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::SuperpixelSEEDS>*) self;
}


//
//  int cv::ximgproc::SuperpixelSLIC::getNumberOfSuperpixels()
//

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_SuperpixelSLIC_getNumberOfSuperpixels_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_SuperpixelSLIC_getNumberOfSuperpixels_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getNumberOfSuperpixels_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::SuperpixelSLIC>* me = (Ptr<cv::ximgproc::SuperpixelSLIC>*) self; //TODO: check for NULL
        return (*me)->getNumberOfSuperpixels();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::SuperpixelSLIC::iterate(int num_iterations = 10)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSLIC_iterate_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSLIC_iterate_10
  (JNIEnv* env, jclass , jlong self, jint num_iterations)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::iterate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::SuperpixelSLIC>* me = (Ptr<cv::ximgproc::SuperpixelSLIC>*) self; //TODO: check for NULL
        (*me)->iterate( (int)num_iterations );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSLIC_iterate_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSLIC_iterate_11
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::iterate_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::SuperpixelSLIC>* me = (Ptr<cv::ximgproc::SuperpixelSLIC>*) self; //TODO: check for NULL
        (*me)->iterate();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::SuperpixelSLIC::getLabels(Mat& labels_out)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSLIC_getLabels_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSLIC_getLabels_10
  (JNIEnv* env, jclass , jlong self, jlong labels_out_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getLabels_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::SuperpixelSLIC>* me = (Ptr<cv::ximgproc::SuperpixelSLIC>*) self; //TODO: check for NULL
        Mat& labels_out = *((Mat*)labels_out_nativeObj);
        (*me)->getLabels( labels_out );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::SuperpixelSLIC::getLabelContourMask(Mat& image, bool thick_line = true)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSLIC_getLabelContourMask_10 (JNIEnv*, jclass, jlong, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSLIC_getLabelContourMask_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jboolean thick_line)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getLabelContourMask_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::SuperpixelSLIC>* me = (Ptr<cv::ximgproc::SuperpixelSLIC>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        (*me)->getLabelContourMask( image, (bool)thick_line );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSLIC_getLabelContourMask_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSLIC_getLabelContourMask_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::getLabelContourMask_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::SuperpixelSLIC>* me = (Ptr<cv::ximgproc::SuperpixelSLIC>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        (*me)->getLabelContourMask( image );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::SuperpixelSLIC::enforceLabelConnectivity(int min_element_size = 25)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSLIC_enforceLabelConnectivity_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSLIC_enforceLabelConnectivity_10
  (JNIEnv* env, jclass , jlong self, jint min_element_size)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::enforceLabelConnectivity_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::SuperpixelSLIC>* me = (Ptr<cv::ximgproc::SuperpixelSLIC>*) self; //TODO: check for NULL
        (*me)->enforceLabelConnectivity( (int)min_element_size );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSLIC_enforceLabelConnectivity_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSLIC_enforceLabelConnectivity_11
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc;
    static const char method_name[] = "ximgproc::enforceLabelConnectivity_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::SuperpixelSLIC>* me = (Ptr<cv::ximgproc::SuperpixelSLIC>*) self; //TODO: check for NULL
        (*me)->enforceLabelConnectivity();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::SuperpixelSLIC>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSLIC_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SuperpixelSLIC_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::SuperpixelSLIC>*) self;
}


//
//  void cv::ximgproc::segmentation::GraphSegmentation::processImage(Mat src, Mat& dst)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_GraphSegmentation_processImage_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_GraphSegmentation_processImage_10
  (JNIEnv* env, jclass , jlong self, jlong src_nativeObj, jlong dst_nativeObj)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::processImage_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::GraphSegmentation>* me = (Ptr<cv::ximgproc::segmentation::GraphSegmentation>*) self; //TODO: check for NULL
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        (*me)->processImage( src, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::segmentation::GraphSegmentation::setSigma(double sigma)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_GraphSegmentation_setSigma_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_GraphSegmentation_setSigma_10
  (JNIEnv* env, jclass , jlong self, jdouble sigma)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::setSigma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::GraphSegmentation>* me = (Ptr<cv::ximgproc::segmentation::GraphSegmentation>*) self; //TODO: check for NULL
        (*me)->setSigma( (double)sigma );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  double cv::ximgproc::segmentation::GraphSegmentation::getSigma()
//

JNIEXPORT jdouble JNICALL Java_org_opencv_ximgproc_GraphSegmentation_getSigma_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ximgproc_GraphSegmentation_getSigma_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::getSigma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::GraphSegmentation>* me = (Ptr<cv::ximgproc::segmentation::GraphSegmentation>*) self; //TODO: check for NULL
        return (*me)->getSigma();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::segmentation::GraphSegmentation::setK(float k)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_GraphSegmentation_setK_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_GraphSegmentation_setK_10
  (JNIEnv* env, jclass , jlong self, jfloat k)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::setK_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::GraphSegmentation>* me = (Ptr<cv::ximgproc::segmentation::GraphSegmentation>*) self; //TODO: check for NULL
        (*me)->setK( (float)k );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::ximgproc::segmentation::GraphSegmentation::getK()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_GraphSegmentation_getK_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_GraphSegmentation_getK_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::getK_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::GraphSegmentation>* me = (Ptr<cv::ximgproc::segmentation::GraphSegmentation>*) self; //TODO: check for NULL
        return (*me)->getK();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::segmentation::GraphSegmentation::setMinSize(int min_size)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_GraphSegmentation_setMinSize_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_GraphSegmentation_setMinSize_10
  (JNIEnv* env, jclass , jlong self, jint min_size)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::setMinSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::GraphSegmentation>* me = (Ptr<cv::ximgproc::segmentation::GraphSegmentation>*) self; //TODO: check for NULL
        (*me)->setMinSize( (int)min_size );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::ximgproc::segmentation::GraphSegmentation::getMinSize()
//

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_GraphSegmentation_getMinSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ximgproc_GraphSegmentation_getMinSize_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::getMinSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::GraphSegmentation>* me = (Ptr<cv::ximgproc::segmentation::GraphSegmentation>*) self; //TODO: check for NULL
        return (*me)->getMinSize();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::segmentation::GraphSegmentation>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_GraphSegmentation_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_GraphSegmentation_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::segmentation::GraphSegmentation>*) self;
}


//
//  void cv::ximgproc::segmentation::SelectiveSearchSegmentation::setBaseImage(Mat img)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_setBaseImage_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_setBaseImage_10
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::setBaseImage_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        (*me)->setBaseImage( img );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::segmentation::SelectiveSearchSegmentation::switchToSingleStrategy(int k = 200, float sigma = 0.8f)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_switchToSingleStrategy_10 (JNIEnv*, jclass, jlong, jint, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_switchToSingleStrategy_10
  (JNIEnv* env, jclass , jlong self, jint k, jfloat sigma)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::switchToSingleStrategy_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>*) self; //TODO: check for NULL
        (*me)->switchToSingleStrategy( (int)k, (float)sigma );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_switchToSingleStrategy_11 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_switchToSingleStrategy_11
  (JNIEnv* env, jclass , jlong self, jint k)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::switchToSingleStrategy_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>*) self; //TODO: check for NULL
        (*me)->switchToSingleStrategy( (int)k );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_switchToSingleStrategy_12 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_switchToSingleStrategy_12
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::switchToSingleStrategy_12()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>*) self; //TODO: check for NULL
        (*me)->switchToSingleStrategy();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::segmentation::SelectiveSearchSegmentation::switchToSelectiveSearchFast(int base_k = 150, int inc_k = 150, float sigma = 0.8f)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_switchToSelectiveSearchFast_10 (JNIEnv*, jclass, jlong, jint, jint, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_switchToSelectiveSearchFast_10
  (JNIEnv* env, jclass , jlong self, jint base_k, jint inc_k, jfloat sigma)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::switchToSelectiveSearchFast_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>*) self; //TODO: check for NULL
        (*me)->switchToSelectiveSearchFast( (int)base_k, (int)inc_k, (float)sigma );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_switchToSelectiveSearchFast_11 (JNIEnv*, jclass, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_switchToSelectiveSearchFast_11
  (JNIEnv* env, jclass , jlong self, jint base_k, jint inc_k)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::switchToSelectiveSearchFast_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>*) self; //TODO: check for NULL
        (*me)->switchToSelectiveSearchFast( (int)base_k, (int)inc_k );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_switchToSelectiveSearchFast_12 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_switchToSelectiveSearchFast_12
  (JNIEnv* env, jclass , jlong self, jint base_k)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::switchToSelectiveSearchFast_12()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>*) self; //TODO: check for NULL
        (*me)->switchToSelectiveSearchFast( (int)base_k );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_switchToSelectiveSearchFast_13 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_switchToSelectiveSearchFast_13
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::switchToSelectiveSearchFast_13()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>*) self; //TODO: check for NULL
        (*me)->switchToSelectiveSearchFast();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::segmentation::SelectiveSearchSegmentation::switchToSelectiveSearchQuality(int base_k = 150, int inc_k = 150, float sigma = 0.8f)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_switchToSelectiveSearchQuality_10 (JNIEnv*, jclass, jlong, jint, jint, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_switchToSelectiveSearchQuality_10
  (JNIEnv* env, jclass , jlong self, jint base_k, jint inc_k, jfloat sigma)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::switchToSelectiveSearchQuality_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>*) self; //TODO: check for NULL
        (*me)->switchToSelectiveSearchQuality( (int)base_k, (int)inc_k, (float)sigma );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_switchToSelectiveSearchQuality_11 (JNIEnv*, jclass, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_switchToSelectiveSearchQuality_11
  (JNIEnv* env, jclass , jlong self, jint base_k, jint inc_k)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::switchToSelectiveSearchQuality_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>*) self; //TODO: check for NULL
        (*me)->switchToSelectiveSearchQuality( (int)base_k, (int)inc_k );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_switchToSelectiveSearchQuality_12 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_switchToSelectiveSearchQuality_12
  (JNIEnv* env, jclass , jlong self, jint base_k)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::switchToSelectiveSearchQuality_12()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>*) self; //TODO: check for NULL
        (*me)->switchToSelectiveSearchQuality( (int)base_k );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_switchToSelectiveSearchQuality_13 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_switchToSelectiveSearchQuality_13
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::switchToSelectiveSearchQuality_13()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>*) self; //TODO: check for NULL
        (*me)->switchToSelectiveSearchQuality();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::segmentation::SelectiveSearchSegmentation::addImage(Mat img)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_addImage_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_addImage_10
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::addImage_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        (*me)->addImage( img );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::segmentation::SelectiveSearchSegmentation::clearImages()
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_clearImages_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_clearImages_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::clearImages_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>*) self; //TODO: check for NULL
        (*me)->clearImages();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::segmentation::SelectiveSearchSegmentation::addGraphSegmentation(Ptr_GraphSegmentation g)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_addGraphSegmentation_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_addGraphSegmentation_10
  (JNIEnv* env, jclass , jlong self, jlong g_nativeObj)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::addGraphSegmentation_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>*) self; //TODO: check for NULL
        (*me)->addGraphSegmentation( *((Ptr<cv::ximgproc::segmentation::GraphSegmentation>*)g_nativeObj) );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::segmentation::SelectiveSearchSegmentation::clearGraphSegmentations()
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_clearGraphSegmentations_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_clearGraphSegmentations_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::clearGraphSegmentations_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>*) self; //TODO: check for NULL
        (*me)->clearGraphSegmentations();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::segmentation::SelectiveSearchSegmentation::addStrategy(Ptr_SelectiveSearchSegmentationStrategy s)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_addStrategy_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_addStrategy_10
  (JNIEnv* env, jclass , jlong self, jlong s_nativeObj)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::addStrategy_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>*) self; //TODO: check for NULL
        (*me)->addStrategy( *((Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>*)s_nativeObj) );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::segmentation::SelectiveSearchSegmentation::clearStrategies()
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_clearStrategies_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_clearStrategies_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::clearStrategies_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>*) self; //TODO: check for NULL
        (*me)->clearStrategies();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::segmentation::SelectiveSearchSegmentation::process(vector_Rect& rects)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_process_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_process_10
  (JNIEnv* env, jclass , jlong self, jlong rects_mat_nativeObj)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::process_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> rects;
        Mat& rects_mat = *((Mat*)rects_mat_nativeObj);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>*) self; //TODO: check for NULL
        (*me)->process( rects );
        vector_Rect_to_Mat( rects, rects_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentation_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>*) self;
}


//
//  void cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy::setImage(Mat img, Mat regions, Mat sizes, int image_id = -1)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategy_setImage_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategy_setImage_10
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong regions_nativeObj, jlong sizes_nativeObj, jint image_id)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::setImage_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Mat& regions = *((Mat*)regions_nativeObj);
        Mat& sizes = *((Mat*)sizes_nativeObj);
        (*me)->setImage( img, regions, sizes, (int)image_id );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategy_setImage_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategy_setImage_11
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong regions_nativeObj, jlong sizes_nativeObj)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::setImage_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Mat& regions = *((Mat*)regions_nativeObj);
        Mat& sizes = *((Mat*)sizes_nativeObj);
        (*me)->setImage( img, regions, sizes );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy::get(int r1, int r2)
//

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategy_get_10 (JNIEnv*, jclass, jlong, jint, jint);

JNIEXPORT jfloat JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategy_get_10
  (JNIEnv* env, jclass , jlong self, jint r1, jint r2)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::get_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>*) self; //TODO: check for NULL
        return (*me)->get( (int)r1, (int)r2 );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy::merge(int r1, int r2)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategy_merge_10 (JNIEnv*, jclass, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategy_merge_10
  (JNIEnv* env, jclass , jlong self, jint r1, jint r2)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::merge_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>*) self; //TODO: check for NULL
        (*me)->merge( (int)r1, (int)r2 );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategy_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategy_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>*) self;
}


//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyColor>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategyColor_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategyColor_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyColor>*) self;
}


//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyFill>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategyFill_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategyFill_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyFill>*) self;
}


//
//  void cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple::addStrategy(Ptr_SelectiveSearchSegmentationStrategy g, float weight)
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategyMultiple_addStrategy_10 (JNIEnv*, jclass, jlong, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategyMultiple_addStrategy_10
  (JNIEnv* env, jclass , jlong self, jlong g_nativeObj, jfloat weight)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::addStrategy_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple>*) self; //TODO: check for NULL
        (*me)->addStrategy( *((Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>*)g_nativeObj), (float)weight );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple::clearStrategies()
//

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategyMultiple_clearStrategies_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategyMultiple_clearStrategies_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::ximgproc::segmentation;
    static const char method_name[] = "ximgproc::clearStrategies_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple>* me = (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple>*) self; //TODO: check for NULL
        (*me)->clearStrategies();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategyMultiple_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategyMultiple_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple>*) self;
}


//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategySize>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategySize_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategySize_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategySize>*) self;
}


//
//  native support for java finalize()
//  static void Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyTexture>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategyTexture_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ximgproc_SelectiveSearchSegmentationStrategyTexture_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyTexture>*) self;
}



} // extern "C"

#endif // HAVE_OPENCV_XIMGPROC
