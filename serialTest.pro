TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    dummy_class.cpp

LIBS += -lserial

QMAKE_CXXFLAGS += -std=c++11

HEADERS += \
    dummy_class.h
