#include "VideoDetectPage.h"
#include "ImageHandler.h"
#include "ui_VideoDetectPage.h"

VideoDetect::VideoDetect(QWidget *parent) :
	QMainWindow(parent), ui(new Ui::VideoDetect),
	imageHandler(QString::fromLocal8Bit("G:\\OBS捕获\\2018-08-30 12-26-11.mp4"))
{
	ui->setupUi(this);
	this->timer = new QTimer(this);
}

void VideoDetect::playVideo()
{
	int offset = 1000 / (int)imageHandler.getRate();
	QImage *imgPtr = imageHandler.getProcessedImg();
	connect(timer, SIGNAL(timeout()), this, SLOT(refreshImg(QImage * imgPtr)));
	while (imgPtr) {
		QImage *imgPtr = imageHandler.getProcessedImg();
		timer->start(offset);
	}
}

void VideoDetect::refreshImg(QImage *imgPtr)
{
	imgPtr->scaled(ui->imgArea->width(), ui->imgArea->height());
	ui->imgArea->setPixmap(QPixmap::fromImage(*(imgPtr)));
	delete imgPtr;
}

VideoDetect::~VideoDetect()
{
	delete ui;
}
