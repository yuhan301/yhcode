#ifndef DATASTRUCT_H
#define DATASTRUCT_H

#include <QString>
#include <QList>
#include <QMetaType>
#define MAX_COUNT (10)

typedef struct
{
    QString flightNo;
    QString aircraftType;
    QString departTime;
    QString arriveTime;
    QString departCityCode;
    QString departPortName;
    QString departPortCode;
    QString departTerminal;
    QString arriveCityCode;
    QString arrivePortName;
    QString arrivePortCode;
    QString arriveTerminal;
    QString departDate;
    QString onTimeRate;
    QString price;
    QString airlineCompanyName;
    QString airlineCode;
    QString stopCityName;
    QString str1;
    QString str2;
    QString str3;
    QString str4;
    QString str5;
    QString str6;
    QString str7;
    QString departCity;
    QString arriveCity;
}AirlineInfo;


typedef struct
{

    QString sName;          // 订票人姓名
    int Status;             // 0:已完成 1：预订 -1；退票
    AirlineInfo info;       // 订票信息
}OrderInfo;//订单结构体

Q_DECLARE_METATYPE(OrderInfo)

typedef struct
{
    long long id;      // id
    QString sName;     // 姓名
    long long IBSN;               // ISBN
    long long time;               // time
}PreBookInfo;

#endif // DATASTRUCT_H
