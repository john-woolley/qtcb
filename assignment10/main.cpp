#include <QCoreApplication>
#include <QDebug>
#include "calc.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int age = 0;
    qInfo() << "Enter your age: ";
    cin >> age;
    calc* myCalc = new calc(&a,age);
    qInfo() << "Your age in dog years: " << myCalc->dogYears();
    qInfo() << "Your age in cat years: " << myCalc->catYears();
    delete myCalc;
    return a.exec();
}
