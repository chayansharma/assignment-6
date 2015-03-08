#-------------------------------------------------
#
# Project created by QtCreator 2015-03-05T13:23:33
#
#-------------------------------------------------

QT       += core gui
CONFIG += qt

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Calc
TEMPLATE = app
include(./QtSpeech.pri)
SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
