#include "BatteryManagementSystem.h"
#include <cassert>

using namespace std;

bool batteryIsOk(float temp, float soc, float cr)
{
    bool stat;
    CBatteryManagementSystem bms(temp, soc, cr);

    stat = bms.validateBatteryParam();
    cout << stat << endl;
    return stat;
}

int main()
{
    assert(batteryIsOk(25, 70, 0.7));
    assert(batteryIsOk(50, 85, 0));
    
    return 0;
}


