#include "ImageHandler.h"



ImageHandler::ImageHandler(QString fileName)
{
	if (videoFlow.open(fileName.toStdString())) {
		this->rate = videoFlow.get(CV_CAP_PROP_FPS);
		this->width = (int)videoFlow.get(CV_CAP_PROP_FRAME_WIDTH);
		this->heigth = (int)videoFlow.get(CV_CAP_PROP_FRAME_HEIGHT);
		currentImg = nullptr;
	} else
		errorRaise(-1);
}

int ImageHandler::errorRaise(int index)
{
	if (index == -1) {
		std::cout << "Cannot open file.";
		exit(index);
	} else
		exit(index);
}

int ImageHandler::getWidth() const
{
	return width;
}

int ImageHandler::getHeigth() const
{
	return heigth;
}

QImage *ImageHandler::getProcessedImg()
{
	//读取帧
	if (videoFlow.read(this->frame)) {
////    more to do

////    more to do
		currentImg = new QImage((const uchar *)frame.data, frame.cols, frame.rows, QImage::Format_RGB888);
		return currentImg;
	} else
		return nullptr;
}
