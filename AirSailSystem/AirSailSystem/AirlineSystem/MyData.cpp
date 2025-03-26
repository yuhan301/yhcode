#include "MyData.h"


#include <QApplication>
// #include <QDesktopWidget>
#include <QScreen>

#include <QSettings>
#include <QFile>
#include <QDir>
#include <QProcess>
#include <QDebug>

QString MyData::m_strUserName        = "";

QList<OrderInfo> MyData::m_lstOrderInfo;

