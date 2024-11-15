#include "feuchtesensor.h"

FeuchteSensor::FeuchteSensor() {}

string FeuchteSensor::getSensorType()
{
    return "Feuchte";
}

void FeuchteSensor::fetchData(double d[])
{
    for(int i = 0; i < 10 ; i++ )
        d[i] = data[i];
}

int FeuchteSensor::dataSize()
{
    return 10;
}
