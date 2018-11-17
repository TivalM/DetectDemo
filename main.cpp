#include "VideoDetectPage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	VideoDetect w;
	w.show();
	w.refreshImg();
	return a.exec();


//	cv::Mat frame;
//	//从视频中读取一个帧
//	cv::VideoCapture capture("G:\\OBS捕获\\2018-08-30 12-26-11.mp4");

//	//读取帧
//	bool bSuccess = capture.read(frame);
//	if (!bSuccess) {
//		std::cout << "不能从视频文件读取帧" << endl;
//	}
//	//在MyVideo窗口上显示当前帧
//	cv::namedWindow("MyVideo", CV_WINDOW_AUTOSIZE);
//	imshow("MyVideo", frame);

//	cv::waitKey(0);
}

