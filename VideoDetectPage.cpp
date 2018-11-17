#include "VideoDetectPage.h"
#include "ImageHandler.h"
#include "ui_VideoDetectPage.h"

VideoDetect::VideoDetect(QWidget *parent) :
	QMainWindow(parent), ui(new Ui::VideoDetect),
	imageHandler(QString::fromLocal8Bit("G:\\OBS捕获\\2018-08-30 12-26-11.mp4"))
{
	ui->setupUi(this);

//	QImage *imgPtr = imageHandler.getProcessedImg();
//	if (imgPtr) {
//		ui->imgArea->setPixmap(QPixmap::fromImage(*imgPtr));
//	}

}

void VideoDetect::refreshImg()
{
	QImage *imgPtr = imageHandler.getProcessedImg();
	if (!imgPtr)
		return;
	imgPtr->scaled(ui->imgArea->width(), ui->imgArea->height());
	ui->imgArea->setPixmap(QPixmap::fromImage(*(imgPtr)));
	cv::waitKey(0);
}

VideoDetect::~VideoDetect()
{
	delete ui;
}
