#include <iostream>
#include "datagate.h"
#include "feuchtesensor.h"
#include "temperatursensor.h"

using namespace std;

int main()
{
    DataGate *dG;
    FeuchteSensor *f = new FeuchteSensor;
    TemperaturSensor *t = new TemperaturSensor;
    dG = f;
    cout << dG->getSensorType() << endl;
    dG = t;
    cout << dG->getSensorType() << endl;


    return 0;
}
