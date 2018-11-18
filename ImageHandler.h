#ifndef IMAGEHANDLER_H
#define IMAGEHANDLER_H
#pragma once
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <QString>
#include <QImage>
#include <QTimer>
#include <QDebug>

class ImageHandler
{
public:
	ImageHandler(QString fileName);
	int errorRaise(int index);
	int getWidth() const;
	int getHeigth() const;
	double getRate() const;
	QImage *getProcessedImg();

private:
	int width;
	int heigth;
	double rate;         //帧率
	QImage *currentImg;
	cv::Mat frame;       //在此声明Mat的主要目的是防止在将Mat转换为QImage时，(const uchar *)指向的内存不被回收
	cv::VideoCapture videoFlow;
};

#endif // IMAGEHANDLER_H
