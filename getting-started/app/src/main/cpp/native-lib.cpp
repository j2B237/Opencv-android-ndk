#include "com_example_opencvtest_NativeLibrary.h"

#include <android/log.h>
#include <opencv2/core.hpp>

#define LOGTAG "libNative"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOGTAG, __VA_ARGS__)


JNIEXPORT void JNICALL 
Java_com_example_opencvtest_NativeLibrary_testOpenCV(
	JNIEnv* env, jclass clazz)
{
	LOGI("OpenCV Loaded successfuly!");

	cv::Mat img(3, 3, CV_8UC1, cv::Scalar(42));

	LOGI("image : %dx%d pixels", img.rows, img.cols);	
}