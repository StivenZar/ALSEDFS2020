#-------------------------------------------------
#
# Project created by QtCreator 2020-05-13T18:20:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Proyecto3
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        opciones.cpp \
        inicio.cpp \
        registro_usr.cpp \
        registro_paci.cpp \
        filtro.cpp \
        juego.cpp \
        resultados.cpp \
        base_da.cpp \
        conectardb.cpp

HEADERS += \
        opciones.h \
        inicio.h \
        registro_usr.h \
        registro_paci.h \
        filtro.h \
        juego.h \
        resultados.h \
        base_da.h \
        conectardb.h

FORMS += \
        opciones.ui \
        inicio.ui \
        registro_usr.ui \
        registro_paci.ui \
        filtro.ui \
        juego.ui \
        resultados.ui
