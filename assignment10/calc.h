#ifndef CALC_H
#define CALC_H

#include <QObject>

class calc : public QObject
{
    Q_OBJECT
public:
    explicit calc(QObject *parent = nullptr, int age=0);
    int age = age;
    int dogYears();
    int catYears();
    ~calc();

signals:

public slots:
};

#endif // CALC_H
