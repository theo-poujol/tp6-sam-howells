TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    CException.cpp \
    Duree.cpp \
    SqueletteMain.cpp \
    TestDuree.cpp \
    CException.cpp \
    ClasseEditable.cpp

HEADERS += \
    CException.h \
    CstCodErr.h \
    Duree.h \
    IEditable.hpp
