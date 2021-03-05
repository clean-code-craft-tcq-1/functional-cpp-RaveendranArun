#include "BatteryManagementSystem.h"

using namespace std;

int main()
{
    CBatteryManagementSystem bms;
   
    bool stat = bms.batteryIsOk(TEMPERATURE, 25);
    assert(stat == true); //Temperature in range
    //assert(bms.batteryIsOk(TEMPERATURE, 52) == true); //
    //assert(bms.batteryIsOk(TEMPERATURE, -23) == true);

    return 0;
}


