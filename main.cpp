﻿#include "VideoDetectPage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	VideoDetect w;
	w.show();

	return a.exec();
}

