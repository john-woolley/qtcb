#include "racecar.h"

racecar::racecar(QObject *parent) : car(parent)
{
    this->color = "red";
}

void racecar::goFast()
{
    qInfo() << "Zoooooooooooooooooom!";
}
