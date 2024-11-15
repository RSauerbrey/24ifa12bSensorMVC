#include <iostream>
#include "datagate.h"
#include "feuchtesensor.h"
#include "temperatursensor.h"

using namespace std;

int main()
{
    DataGate *sensoren[10] = {nullptr};
    double temp[100];
    DataGate *dG;
    FeuchteSensor *f = new FeuchteSensor;
    TemperaturSensor *t = new TemperaturSensor;
    sensoren[0] = f;
    sensoren[1] = t;
    for(int i = 0 ; i < 10 ; i++ )
    {
        if(sensoren[i] != nullptr)
            cout << sensoren[i]->getSensorType() << endl;
    }

    t->fetchData(temp);
    for(int i = 0 ; i < t->dataSize() ; i++ )
        cout << temp[i] << endl;
    return 0;
}
