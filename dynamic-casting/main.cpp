#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "racecar.h"
#include "feline.h"

void testDrive(car* obj){
    obj->drive();
    obj->stop();
}

void race(racecar* obj){
    obj->goFast();
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    racecar* player1 = new racecar(); //its converted automatically
    testDrive(player1);

    //This is the correct way to cast
    car* obj = dynamic_cast<car*>(player1);
    if(obj) testDrive(obj);

    //Will not work
    //feline* cat = dynamic_cast<racecar*>(player1);

    return a.exec();
}
