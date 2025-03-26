QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    DlgOrderTicket.cpp \
    FrmAirlineTicketBooking.cpp \
    FrmAirlineTicketOrderManager.cpp \
    FrmItem.cpp \
    FrmLogIn.cpp \
    FrmMain.cpp \
    FrmRecommend.cpp \
    FrmRecommendItem.cpp \
    FrmSetting.cpp \
    FrmSignIn.cpp \
    MyData.cpp \
    database.cpp \
    form.cpp \
    main.cpp \
    DlgOrderTicket.cpp \
    FrmAirlineTicketBooking.cpp \
    FrmAirlineTicketOrderManager.cpp \
    FrmItem.cpp \
    FrmLogIn.cpp \
    FrmMain.cpp \
    FrmRecommend.cpp \
    FrmRecommendItem.cpp \
    FrmSetting.cpp \
    FrmSignIn.cpp \
    MyData.cpp

HEADERS += \
    DataStruct.h \
    DlgOrderTicket.h \
    FrmAirlineTicketBooking.h \
    FrmAirlineTicketOrderManager.h \
    FrmItem.h \
    FrmLogIn.h \
    FrmMain.h \
    FrmRecommend.h \
    FrmRecommendItem.h \
    FrmSetting.h \
    FrmSignIn.h \
    MyData.h \
    database.h \
    form.h

FORMS += \
    FrmAirlineTicketBooking.ui \
    FrmAirlineTicketOrderManager.ui \
    FrmItem.ui \
    FrmLogIn.ui \
    FrmMain.ui \
    FrmRecommend.ui \
    FrmRecommendItem.ui \
    FrmSetting.ui \
    FrmSignIn.ui \
    form.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resource.qrc
