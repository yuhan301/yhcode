#include <QApplication>

#include "FrmMain.h"
#include <QFile>
#include "database.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QString sDateName = "users";
    DataBase::Instance()->openDb(sDateName);

    FrmMain w;
    qRegisterMetaType<OrderInfo>("OrderInfo");
    QFile qss_file(":/qss/Resource/qss/style.qss");
    if (qss_file.open(QFile::ReadOnly)) {
        QString qss_text = QLatin1String(qss_file.readAll());
        w.setStyleSheet(qss_text);
        qss_file.close();
    }
    w.show();
    return a.exec();
}
