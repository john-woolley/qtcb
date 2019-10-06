#include <QCoreApplication>
#include <QDebug>
#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    test obj;
    obj.connect(&obj,&test::close,&a,&QCoreApplication::quit, Qt::QueuedConnection);
    qInfo() << "Closing the application!";
    obj.kill();
    return a.exec();
}
