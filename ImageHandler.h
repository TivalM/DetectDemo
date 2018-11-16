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
	QImage &getProcessedImg();

private:
	int width;
	int heigth;
	double rate;         //帧率
	QImage currentImg;
	cv::VideoCapture videoFlow;
};

#endif // IMAGEHANDLER_H
