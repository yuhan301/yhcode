#ifndef MYDATA_H
#define MYDATA_H

#include <QString>

#include "DataStruct.h"

class MyData
{
public:
    static QString m_strUserName;

    static QList<OrderInfo> m_lstOrderInfo;
};

#endif // MYDATA_H
