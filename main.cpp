#include <iostream>
#include "datagate.h"
#include "feuchtesensor.h"

using namespace std;

int main()
{
    DataGate *dg = new FeuchteSensor;

    return 0;
}
