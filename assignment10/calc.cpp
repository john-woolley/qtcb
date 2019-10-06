#include "calc.h"
#include <QDebug>

calc::calc(QObject *parent, int age) : QObject(parent)
{
    this->age = age;
    qInfo() << this << " constructed";
}

calc::~calc()
{
    qInfo() << this << " deconstructed";
}

int calc::dogYears()
{
    return this->age * 9;
}

int calc::catYears()
{
    return this->age * 7;
}
