#-------------------------------------------------
#
# Project created by QtCreator 2013-08-14T17:34:43
#
#-------------------------------------------------

QT       += core gui serialport network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GroundControlStation
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    xplane.cpp \
    falconboard.cpp \
    speedcommunications.cpp \
    horizonte_artificial.cpp \
    magnetic_heading.cpp \
    airspeed.cpp \
    altimetro.cpp \
    vvi.cpp \
    velocimetro.cpp

HEADERS  += mainwindow.h \
    xplane.h \
    falconboard.h \
    speedcommunications.h \
    PaqueteType.h \
    horizonte_artificial.h \
    magnetic_heading.h \
    airspeed.h \
    altimetro.h \
    vvi.h \
    velocimetro.h

FORMS    += mainwindow.ui \
    horizonte_artificial.ui \
    magnetic_heading.ui \
    airspeed.ui \
    altimetro.ui \
    vvi.ui \
    velocimetro.ui

RESOURCES += \
    MyRes.qrc
