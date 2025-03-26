#include "database.h"
#include <QDebug>
#include <QDateTime>
#include <QMessageBox>
#include <QFile>
#include <QSqlError>
#include <QMessageBox>
#include <QCryptographicHash>
#include <QRandomGenerator>

#define DATE_TME_FORMAT     QDateTime::currentDateTime().toString("yyyy/MM/dd hh:mm:ss")

DataBase *DataBase::self = nullptr;

DataBase::DataBase(QObject *parent) : QObject(parent)
{

}

DataBase::~DataBase()
{
    if (userdb.isOpen()) {
        userdb.close();
    }
}

bool DataBase::openDb(const QString &dataName)
{
    qDebug()<<"available drivers:";
    QStringList drivers = QSqlDatabase::drivers();
    foreach(QString driver, drivers)
        qDebug()<<driver;

    userdb = QSqlDatabase::addDatabase("QODBC");
    userdb.setHostName("127.0.0.1");
    userdb.setPort(3306);
    userdb.setDatabaseName(dataName);
    userdb.setUserName("hang");
    userdb.setPassword("8892297");

    if (!userdb.open()){
        QMessageBox::information(0, "infor", "open failed");
        qDebug()<<"error open database because"<<userdb.lastError().text();

        return false;
    }
}

// 生成随机的盐值
QString DataBase::generateSalt() {
    const int saltLength = 16;
    const QString possibleCharacters("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");
    QString salt;
    for (int i = 0; i < saltLength; ++i) {
        int index = QRandomGenerator::global()->bounded(possibleCharacters.length());
        salt.append(possibleCharacters.at(index));
    }
    return salt;
}

//使用SHA-256加密密码
QString DataBase::hashPassword(const QString &password, const QString &salt) {
    QString saltedPassword = password + salt;
    QByteArray hash = QCryptographicHash::hash(saltedPassword.toUtf8(), QCryptographicHash::Sha256);
    return QString(hash.toHex());
}

bool DataBase::logIn(const QString &usrName, const QString &password) {
    bool bRet = false;
    QString salt;
    QString hashedPassword;
    QString querySalt = QString("SELECT salt FROM user_table WHERE name='%1'").arg(usrName);
    QSqlQuery query;
    if (query.exec(querySalt) && query.next()) {
        salt = query.value(0).toString();
    } else {
        qDebug() << "查询盐值失败:" << query.lastError().text();
        return false;
    }
    hashedPassword = hashPassword(password, salt);
    QString queryPassword = QString("SELECT password FROM user_table WHERE name='%1' AND password='%2'").arg(usrName).arg(hashedPassword);
    if (query.exec(queryPassword) && query.next()) {
        bRet = true;
    }
    return bRet;
}

bool DataBase::QueryPassword(const QString &usrName, QString &strPassword)
{
    bool bRet = false;
    QString S = QString("select Password from user_table where name= '%1'").arg(usrName);
    QSqlQuery query(S);
    if (query.next())
    {
        strPassword = query.value(0).toString();
        bRet = true;
    }
    qDebug() << "QueryPassword lastError:" << query.lastError().text();
    return bRet;
}
bool DataBase::QueryEmail(const QString &usrName, QString& strEMail)
{
    bool bRet = false;
    QString S = QString("select EMail from user_table where name= '%1'").arg(usrName);
    QSqlQuery query(S);
    if (query.next())
    {
        strEMail = query.value(0).toString();
        bRet = true;
    }
            qDebug() << "add history lastError:" << query.lastError().text();
    return bRet;
}

bool DataBase::FindUser(const QString &usrName)
{
    bool bRet = false;
    QString s =QString("select * from user_table where name = '%1'").arg(usrName);
    QSqlQuery query;
    query.exec(s);
    if(query.first()){
        bRet = true;
    }
        qDebug() << "add history lastError:" << query.lastError().text();
    return bRet;
}


bool DataBase::ModifyEMail(const QString &usrName, const QString &Email)
{
    bool bRet = false;
    QString i =QString("UPDATE user_table SET EMail = '%1' WHERE name = '%2';").arg(Email).arg(usrName);//插入一条信息到数据库的user_table表中
    QSqlQuery query;
    if (query.exec(i)) {
        bRet = true;
    }
            qDebug() << "add history lastError:" << query.lastError().text();
    return bRet;
}

bool DataBase::ModifyPassword(const QString &usrName, const QString &password) {
    bool bRet = false;
    QString salt = generateSalt();
    QString hashedPassword = hashPassword(password, salt);
    QString updatePassword = QString("UPDATE user_table SET password='%1', salt='%2' WHERE name='%3';").arg(hashedPassword).arg(salt).arg(usrName);
    QSqlQuery query;

    if (query.exec(updatePassword)) {
        bRet = true;
    }
    qDebug() << "ModifyPassword lastError:" << query.lastError().text();
    return bRet;
}


bool DataBase::signIn(const QString &usrName, const QString &password, const QString &Email) {
    bool bRet = false;
    QString salt = generateSalt();
    QString hashedPassword = hashPassword(password, salt);
    QString insertUser = QString("INSERT INTO user_table (name, password, salt, EMail) VALUES ('%1', '%2', '%3', '%4');").arg(usrName).arg(hashedPassword).arg(salt).arg(Email);
    QSqlQuery query;

    if (query.exec(insertUser)) {
        bRet = true;
    }
    qDebug() << "signIn lastError:" << query.lastError().text();
    return bRet;
}


//单程票查询
QList<AirlineInfo> DataBase::SearchSingleTicket(const QString &departCity, const QString &arriveCity, const QString &departDate)
{
    QList<AirlineInfo> lst;
    QString strQuery = QString("SELECT * FROM airdata WHERE airdata.departCity = '%1' "
                               "AND airdata.arriveCity = '%2' "
                               "AND airdata.departDate = '%3'").arg(departCity).arg(arriveCity).arg(departDate);

    QSqlQuery query(strQuery);
    while (query.next()) {
        AirlineInfo info;
        int index = 0;
        info.flightNo =  query.value(index++).toString();
        info.aircraftType =    query.value(index++).toString();
        info.departTime =  query.value(index++).toString();
        info.arriveTime = query.value(index++).toString();
        info.departCityCode =     query.value(index++).toString();
        info.departPortName =         query.value(index++).toString();
        info.departPortCode =     query.value(index++).toString();
        info.departTerminal =       query.value(index++).toString();
        info.arriveCityCode =       query.value(index++).toString();
        info.arrivePortName =     query.value(index++).toString();
        info.arrivePortCode =         query.value(index++).toString();
        info.arriveTerminal =     query.value(index++).toString();
        info.departDate =  query.value(index++).toString();
        info.onTimeRate = query.value(index++).toString();
        info.price =     query.value(index++).toString();
        info.airlineCompanyName =  query.value(index++).toString();
        info.airlineCode =    query.value(index++).toString();
        info.stopCityName =  query.value(index++).toString();
        info.str1 = query.value(index++).toString();
        info.str2 =     query.value(index++).toString();
        info.str3 = query.value(index++).toString();
        info.str4 =     query.value(index++).toString();
        info.str5 = query.value(index++).toString();
        info.str6 =     query.value(index++).toString();
        info.str7 =     query.value(index++).toString();
        info.departCity = query.value(index++).toString();
        info.arriveCity =     query.value(index++).toString();

        lst.append(info);
    }
            qDebug() << "add history lastError:" << query.lastError().text();
    return lst;
}

QList<AirlineInfo> DataBase::GetTop10RecommendTickets(const QString &userName)
{
    QList<AirlineInfo> lstRecommendTickets;
    QStringList userTopDepartCities;
    QString queryStr = "SELECT departCity, COUNT(*) AS count FROM orderinfo WHERE usrName = :userName GROUP BY departCity ORDER BY count DESC LIMIT 2";
    QSqlQuery userQuery;
    userQuery.prepare(queryStr);
    userQuery.bindValue(":userName", userName);

    if (!userQuery.exec()) {
        qDebug() << "Error executing user query:" << userQuery.lastError();
    }

    while (userQuery.next()) {
        userTopDepartCities.append(userQuery.value(0).toString());
    }

    if (userTopDepartCities.isEmpty()) {
        QList<QString> defaultCities = {
            "北京", "上海", "广州", "深圳",
            "成都", "杭州", "重庆", "南京",
            "武汉", "西安"
        };

        std::random_device rd;
        std::mt19937 g(rd());
        QList<QString> shuffledCities = defaultCities;
        std::shuffle(shuffledCities.begin(), shuffledCities.end(), g);
        userTopDepartCities.append(shuffledCities.takeFirst());
        userTopDepartCities.append(shuffledCities.takeFirst());

    }


    // 查询热门城市(统计所有用户的历史订单并中选择前十大目的地）
    QSqlQuery query("SELECT arriveCity, COUNT(*) AS count FROM orderinfo GROUP BY arriveCity ORDER BY count DESC LIMIT 10");
    QList<QString> popularCities;
    while (query.next()) {
        popularCities.append(query.value(0).toString());
    }

    // 如果热门城市数据不足 10 个，则选择国内大城市
    QList<QString> defaultCities = {
        "北京", "上海", "广州", "深圳", "成都", "杭州", "重庆", "南京", "武汉", "西安"
    };

    for (const QString& city : defaultCities) {
        if (!popularCities.contains(city) && popularCities.size() < 10) {
            popularCities.append(city);
        }
    }


    for (const QString &departCity : userTopDepartCities) {
        for (const QString &arriveCity : popularCities) {
            if (departCity == arriveCity) continue;

            QString strQuery = QString("SELECT * FROM airdata WHERE departCity = '%1' AND arriveCity = '%2' ORDER BY price ASC LIMIT 10")
                                   .arg(departCity)
                                   .arg(arriveCity);
            QSqlQuery flightQuery(strQuery);

            while (flightQuery.next()) {
                AirlineInfo info;
                int index = 0;
                info.flightNo = flightQuery.value(index++).toString();
                info.aircraftType = flightQuery.value(index++).toString();
                info.departTime = flightQuery.value(index++).toString();
                info.arriveTime = flightQuery.value(index++).toString();
                info.departCityCode = flightQuery.value(index++).toString();
                info.departPortName = flightQuery.value(index++).toString();
                info.departPortCode = flightQuery.value(index++).toString();
                info.departTerminal = flightQuery.value(index++).toString();
                info.arriveCityCode = flightQuery.value(index++).toString();
                info.arrivePortName = flightQuery.value(index++).toString();
                info.arrivePortCode = flightQuery.value(index++).toString();
                info.arriveTerminal = flightQuery.value(index++).toString();
                info.departDate = flightQuery.value(index++).toString();
                info.onTimeRate = flightQuery.value(index++).toString();
                info.price = flightQuery.value(index++).toString();
                info.airlineCompanyName = flightQuery.value(index++).toString();
                info.airlineCode = flightQuery.value(index++).toString();
                info.stopCityName = flightQuery.value(index++).toString();
                info.str1 = flightQuery.value(index++).toString();
                info.str2 = flightQuery.value(index++).toString();
                info.str3 = flightQuery.value(index++).toString();
                info.str4 = flightQuery.value(index++).toString();
                info.str5 = flightQuery.value(index++).toString();
                info.str6 = flightQuery.value(index++).toString();
                info.str7 = flightQuery.value(index++).toString();
                info.departCity = flightQuery.value(index++).toString();
                info.arriveCity = flightQuery.value(index++).toString();

                lstRecommendTickets.append(info);
            }
        }
    }

    return lstRecommendTickets;
}


QList<AirlineInfo> DataBase::SearchRecommendTicket(const QString &arriveCity)
{
    QList<AirlineInfo> lst;
    QString strQuery = QString("SELECT * FROM airdata WHERE arriveCity = '%1' ").arg(arriveCity);
    QSqlQuery query(strQuery);
    while (query.next()) {
        AirlineInfo info;
        int index = 0;
        info.flightNo =  query.value(index++).toString();
        info.aircraftType =    query.value(index++).toString();
        info.departTime =  query.value(index++).toString();
        info.arriveTime = query.value(index++).toString();
        info.departCityCode =     query.value(index++).toString();
        info.departPortName =         query.value(index++).toString();
        info.departPortCode =     query.value(index++).toString();
        info.departTerminal =       query.value(index++).toString();
        info.arriveCityCode =       query.value(index++).toString();
        info.arrivePortName =     query.value(index++).toString();
        info.arrivePortCode =         query.value(index++).toString();
        info.arriveTerminal =     query.value(index++).toString();
        info.departDate =  query.value(index++).toString();
        info.onTimeRate = query.value(index++).toString();
        info.price =     query.value(index++).toString();
        info.airlineCompanyName =  query.value(index++).toString();
        info.airlineCode =    query.value(index++).toString();
        info.stopCityName =  query.value(index++).toString();
        info.str1 = query.value(index++).toString();
        info.str2 =     query.value(index++).toString();
        info.str3 = query.value(index++).toString();
        info.str4 =     query.value(index++).toString();
        info.str5 = query.value(index++).toString();
        info.str6 =     query.value(index++).toString();
        info.str7 =     query.value(index++).toString();
        info.departCity = query.value(index++).toString();
        info.arriveCity =     query.value(index++).toString();

        lst.append(info);
    }
        qDebug() << "add history lastError:" << query.lastError().text();
    return lst;
}

bool DataBase::InsertOrderInfo(OrderInfo info)
{
    QSqlQuery query;

    QString strQuery;
    strQuery = "INSERT INTO orderinfo (usrName, orderStatus, flightNo, aircraftType, departTime, arriveTime,"
               "departCityCode, departPortName, departPortCode, departTerminal, arriveCityCode, arrivePortName,"
               "arrivePortCode, arriveTerminal, departDate, onTimeRate, price,airlineCompanyName, airlineCode, stopCityName,"
               "departCity, arriveCity) "
               "VALUES (?, ?,?, ?, ?,?, ?, ?,?, ?, ?,?, ?, ?,?, ?, ?,?, ?, ?,?, ?)";
    query.prepare(strQuery);
    int index =0;
    query.bindValue(index++, info.sName);
    query.bindValue(index++, info.Status);
    query.bindValue(index++, info.info.flightNo);
    query.bindValue(index++, info.info.aircraftType);
    query.bindValue(index++, info.info.departTime);
    query.bindValue(index++, info.info.arriveTime);
    query.bindValue(index++, info.info.departCityCode);
    query.bindValue(index++, info.info.departPortName);
    query.bindValue(index++, info.info.departPortCode);
    query.bindValue(index++, info.info.departTerminal);
    query.bindValue(index++, info.info.arriveCityCode);
    query.bindValue(index++, info.info.arrivePortName);
    query.bindValue(index++, info.info.arrivePortCode);
    query.bindValue(index++, info.info.arriveTerminal);
    query.bindValue(index++, info.info.departDate);
    query.bindValue(index++, info.info.onTimeRate);
    query.bindValue(index++, info.info.price);
    query.bindValue(index++, info.info.airlineCompanyName);
    query.bindValue(index++, info.info.airlineCode);
    query.bindValue(index++, info.info.stopCityName);
    query.bindValue(index++, info.info.departCity);
    query.bindValue(index++, info.info.arriveCity);
    query.exec();
    qDebug() << "add history lastError:" << query.lastError().text();
    return true;
}

QList<OrderInfo> DataBase::queryALLOrderInfo(const QString &usrName)
{
    QList<OrderInfo> lstInfo;
    QString strQuery = QString("SELECT * FROM orderinfo WHERE usrName = '%1'").arg(usrName);

    QSqlQuery query(strQuery);
    while (query.next()) {
        OrderInfo info;
        int index = 0;
        info.sName = query.value(index++).toString();
        info.Status = query.value(index++).toInt();
        info.info.flightNo =  query.value(index++).toString();
        info.info.aircraftType =    query.value(index++).toString();
        info.info.departTime =  query.value(index++).toString();
        info.info.arriveTime = query.value(index++).toString();
        info.info.departCityCode =     query.value(index++).toString();
        info.info.departPortName =         query.value(index++).toString();
        info.info.departPortCode =     query.value(index++).toString();
        info.info.departTerminal =       query.value(index++).toString();
        info.info.arriveCityCode =       query.value(index++).toString();
        info.info.arrivePortName =     query.value(index++).toString();
        info.info.arrivePortCode =         query.value(index++).toString();
        info.info.arriveTerminal =     query.value(index++).toString();
        info.info.departDate =  query.value(index++).toString();
        info.info.onTimeRate = query.value(index++).toString();
        info.info.price =     query.value(index++).toString();
        info.info.airlineCompanyName =  query.value(index++).toString();
        info.info.airlineCode =    query.value(index++).toString();
        info.info.stopCityName =  query.value(index++).toString();
        info.info.str1 = query.value(index++).toString();
        info.info.str2 =     query.value(index++).toString();
        info.info.str3 = query.value(index++).toString();
        info.info.str4 =     query.value(index++).toString();
        info.info.str5 = query.value(index++).toString();
        info.info.str6 =     query.value(index++).toString();
        info.info.str7 =     query.value(index++).toString();
        info.info.departCity = query.value(index++).toString();
        info.info.arriveCity =     query.value(index++).toString();

        lstInfo.append(info);
    }
            qDebug() << "add history lastError:" << query.lastError().text();
    return lstInfo;
}

bool DataBase::updateOrderStatus(const OrderInfo &orderInfo)
{
    QSqlQuery query;
    query.prepare("UPDATE orderinfo SET orderStatus = :status WHERE usrName = :userName AND flightNo = :flightNo");//WHERE usrName = :userName AND flightNo = :flightNo
    query.bindValue(":status",orderInfo.Status);
    query.bindValue(":userName",MyData::m_strUserName);
    query.bindValue(":flightNo", orderInfo.info.flightNo);
    if (!query.exec()) {
        qDebug() << "Failed to update order status:" << query.lastError().databaseText();
        return false;
    }
    return true;
}



