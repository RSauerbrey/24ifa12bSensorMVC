TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        datagate.cpp \
        feuchtesensor.cpp \
        main.cpp

HEADERS += \
    datagate.h \
    feuchtesensor.h
