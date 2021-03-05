#ifndef BATTERY_MANAGEMENT_SYSTEM_H
#define BATTERY_MANAGEMENT_SYSTEM_H

#include <iostream>
#include <assert.h>

#define  MIN_TEMPERATURE  0
#define  MAX_TEMPERATURE  45

#define  MIN_SOC          20
#define  MAX_SOC          80

#define  MIN_CHARGE_RATE  0.0
#define  MAX_CHARGE_RATE  0.8

typedef enum _eBmsParams 
{
    TEMPERATURE,
    SOC,
    CHARGERATE
} eBmsParams;

class CBatteryManagementSystem
{
private:

    bool m_bBatteryStatusTemp;
    bool m_bBatteryStatusSoc;
    bool m_bBatteryStatusChargeRate;
public:

    CBatteryManagementSystem();
    bool validateBatteryParamTemp(float );
    bool validateBatteryParamSoc(float );
    bool validateBatteryParamChargeRate(float );
    bool validateMin(float, float);
    bool validateMax(float, float);
    bool batteryIsOk(eBmsParams, float);
    ~CBatteryManagementSystem();
};

#endif
