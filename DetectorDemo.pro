#-------------------------------------------------
#
# Project created by QtCreator 2018-11-15T16:59:05
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia  multimediawidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DetectorDemo
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
	main.cpp \
    ImageHandler.cpp \
    VideoDetectPage.cpp


HEADERS += \
    ImageHandler.h \
    VideoDetectPage.h

FORMS += \
    VideoDetectPage.ui

INCLUDEPATH += G:\OpenCV\opencv\build\include \
            G:\OpenCV\opencv\build\include\opencv  \
            G:\OpenCV\opencv\build\include\opencv2

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../OpenCV/opencv/build/x64/vc15/lib/ -lopencv_world340
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../OpenCV/opencv/build/x64/vc15/lib/ -lopencv_world340d

INCLUDEPATH += $$PWD/../../../OpenCV/opencv/build/x64/vc15
DEPENDPATH += $$PWD/../../../OpenCV/opencv/build/x64/vc15
