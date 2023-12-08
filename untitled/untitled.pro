#-------------------------------------------------
#
# Project created by QtCreator 2022-07-01T14:35:58
#
#-------------------------------------------------

QT       += core gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = untitled
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
QT+=multimedia
# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    predialog.cpp \
    nottrue.cpp \
    istrue.cpp \
    publicitem.cpp \
    inexistence.cpp \
    qipan.cpp \
    theend.cpp \
    huiqif.cpp \
    ais.cpp \
    peace.cpp \
    paihangbang.cpp \
    setting.cpp \
    resetpswd.cpp \
    ing.cpp

HEADERS += \
        mainwindow.h \
    predialog.h \
    nottrue.h \
    istrue.h \
    publicitem.h \
    inexistence.h \
    publicitem.h \
    qipan.h \
    publicitem.h \
    theend.h \
    huiqif.h \
    ais.h \
    peace.h \
    paihangbang.h \
    setting.h \
    resetpswd.h \
    ing.h

FORMS += \
        mainwindow.ui \
    predialog.ui \
    nottrue.ui \
    istrue.ui \
    inexistence.ui \
    qipan.ui \
    theend.ui \
    huiqif.ui \
    ais.ui \
    peace.ui \
    paihangbang.ui \
    setting.ui \
    resetpswd.ui \
    ing.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../Users/wood.png \
    ../Users/ID.txt
