#ifndef VIDEODETECTPAGE_H
#define VIDEODETECTPAGE_H
#pragma once
#include <QMainWindow>
#include <QUrl>
#include <QMediaPlayer>
#include <QVideoWidget>
#include "QPixmap"
namespace Ui
{
class VideoDetect;
}

class VideoDetect : public QMainWindow
{
	Q_OBJECT

public:
	explicit VideoDetect(QWidget *parent = nullptr);
	~VideoDetect();

private:
	Ui::VideoDetect *ui;
};

#endif // VIDEODETECTPAGE_H
