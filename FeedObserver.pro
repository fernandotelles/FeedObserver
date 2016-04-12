QT += core
QT -= gui

CONFIG += c++11

TARGET = FeedObserver
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    feedobserver.cpp \
    subject.cpp \
    feedsubject.cpp

HEADERS += \
    iobserver.h \
    feedobserver.h \
    subject.h \
    feedsubject.h
