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
    assert(batteryIsOk(25, 70, 0.7) == true);
    assert(batteryIsOk(50, 85, 0.0) == false);
    assert(batteryIsOk(25, 70, 0.9) == false);
	assert(batteryIsOk(10, 90, 0.9) == false);
    
    return 0;
}


