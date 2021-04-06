#ifndef BATTERY_MANAGEMENT_SYSTEM_H
#define BATTERY_MANAGEMENT_SYSTEM_H

#include <iostream>

#define  MIN_TEMPERATURE  0
#define  MAX_TEMPERATURE  45

#define  MIN_SOC          20
#define  MAX_SOC          80

#define  MIN_CHARGE_RATE  0.0
#define  MAX_CHARGE_RATE  0.8

class CBatteryManagementSystem
{
private:

    float m_fBatteryTemp;
    float m_fBatterySoc;
    float m_fBatteryChargeRate;
public:

    CBatteryManagementSystem(float = 0.0, float = 0.0, float = 0.0);
    bool validateBatteryParamTemp();
    bool validateBatteryParamSoc();
    bool validateBatteryParamChargeRate();
    void updateBatteryParam(float, float, float);
    bool validateBatteryParam();
    ~CBatteryManagementSystem();
};

#endif
