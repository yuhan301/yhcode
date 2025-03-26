#ifndef DATABASE_H
#define DATABASE_H


#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMutex>
#include <QHash>
#include "DataStruct.h"
#include <algorithm>
#include <random>
#include "MyData.h"

#pragma execution_character_set("utf-8")


class DataBase : public QObject
{
    Q_OBJECT
public:
    explicit DataBase(QObject *parent = nullptr);
    ~DataBase();

    QString generateSalt();
    QString hashPassword(const QString &password, const QString &salt);
    // 打开数据库
    bool openDb(const QString &dataName);

    // 登录查询
    bool logIn(const QString& usrName, const QString& password);

    // 查询邮箱
    bool QueryEmail(const QString& usrName, QString &strEMail);
    bool QueryPassword(const QString&usrName,QString &strPassword);

    // 查找用户
    bool FindUser(const QString& usrName);

    // 修改密码
    bool ModifyPassword(const QString& usrName,const QString& password);

    // 修改邮箱
    bool ModifyEMail(const QString &usrName, const QString &Email);

    // 注册
    bool signIn(const QString& usrName, const QString& password,const QString &Email);

    // 搜索单程票
    QList<AirlineInfo> SearchSingleTicket(const QString& departCity, const QString& arriveCity, const QString &departDate);

    // 搜索推荐片
    QList<AirlineInfo> SearchRecommendTicket(const QString& arriveCity);
    QList<AirlineInfo> GetTop10RecommendTickets(const QString &usrName);


    // 统计到达点的次数
    QList<QString> GetArrivePostCount(const QString& usrName);





    // 加入订单信息
    bool InsertOrderInfo(OrderInfo info);
    bool updateOrderStatus(const OrderInfo &orderInfo);
    // 查询订单信息
    QList<OrderInfo> queryALLOrderInfo(const QString &usrName);
    // 单实例运行
    static DataBase *Instance()
    {
        static QMutex mutex;
        if (self == nullptr) {
            QMutexLocker locker(&mutex);

            if (!self) {
                self = new DataBase();
            }
        }
        return self;
    }



signals:

public slots:

private:
    static DataBase *self;
    // 数据库管理
    QSqlDatabase userdb;
};


#endif // DATABASE_H
