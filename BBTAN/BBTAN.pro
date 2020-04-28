TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    frame.cpp \
    ball.cpp \
    equipment.cpp


LIBS +=-lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -lsfml-network

HEADERS += \
    frame.h \
    ball.h \
    equipment.h
