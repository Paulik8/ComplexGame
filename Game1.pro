#-------------------------------------------------
#
# Project created by QtCreator 2017-06-20T23:26:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Game1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    main.cpp \
    mainwindow.cpp \
    Tetris/tetrixboard.cpp \
    Tetris/tetrixpiece.cpp \
    Tetris/tetrixwindow.cpp \
    Snake/widget.cpp \
    Snake/snake.cpp \
    main.cpp \
    mainwindow.cpp \
    PingPong/move.cpp \
    PingPong/PPwindow.cpp



HEADERS += \
    Tetris/tetrixboard.h \
    Tetris/tetrixpiece.h \
    Tetris/tetrixwindow.h \
    mainwindow.h \
    PingPong/move.h \
    PingPong/PPwindow.h \
    Snake/snake.h \
    Snake/widget.h

FORMS += \
    mainwindow.ui \
    PingPong/PPwindow.ui \
    Snake/widget.ui

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/widgets/tetrix
INSTALLS += target

SUBDIRS += \
    Tetris/tetrix.pro
