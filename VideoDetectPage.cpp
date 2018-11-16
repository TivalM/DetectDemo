#include "VideoDetectPage.h"
#include "ImageHandler.h"
#include "ui_videoDetectPage.h"

VideoDetect::VideoDetect(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::VideoDetect)
{
	ui->setupUi(this);
	ImageHandler imageHandler = ImageHandler("C:\\Users\\HASEE\\Desktop\\05\\00005.MTS");
	ui->imgArea->setPixmap(QPixmap::fromImage(imageHandler.getProcessedImg()));
}

VideoDetect::~VideoDetect()
{
	delete ui;
}
