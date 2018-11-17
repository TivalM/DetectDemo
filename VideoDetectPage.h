#ifndef VIDEODETECTPAGE_H
#define VIDEODETECTPAGE_H
#pragma once
#include <QMainWindow>
#include <QUrl>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QPixmap>
#include "ImageHandler.h"
namespace Ui
{
class VideoDetect;
}

class VideoDetect : public QMainWindow
{
	Q_OBJECT

public:
	explicit VideoDetect(QWidget *parent = nullptr);
	void refreshImg();
	~VideoDetect();

private:
	Ui::VideoDetect *ui;
	ImageHandler imageHandler;
};

#endif // VIDEODETECTPAGE_H
