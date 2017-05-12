QT += core
QT -= gui

CONFIG += c++11

TARGET = VypocetEleObvodu
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    electriccomponent.cpp \
    opencircutefile.cpp \
    electriccomponentlist.cpp

HEADERS += \
    electriccomponent.h \
    electriccomponentlist.h
