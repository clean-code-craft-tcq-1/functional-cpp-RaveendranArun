#include "BatteryManagementSystem.h"

CBatteryManagementSystem::CBatteryManagementSystem():m_bBatteryStatusTemp(false), m_bBatteryStatusSoc(false), m_bBatteryStatusChargeRate(false)
{

}

CBatteryManagementSystem::~CBatteryManagementSystem()
{

}

bool CBatteryManagementSystem::validateMin(float val, float min)
{
    if (val < min)
        return false;

    return true;
}

bool CBatteryManagementSystem::validateMax(float val, float max)
{
    if (val > max)
        return false;

    return true;
}

bool CBatteryManagementSystem::validateBatteryParamTemp(float val)
{
    m_bBatteryStatusTemp = validateMin(val, MIN_TEMPERATURE) && validateMax(val, MAX_TEMPERATURE);
    return m_bBatteryStatusTemp;
}

bool CBatteryManagementSystem::validateBatteryParamSoc(float val)
{
    m_bBatteryStatusSoc = validateMin(val, MIN_SOC) && validateMax(val, MAX_SOC);
    return m_bBatteryStatusSoc;
}

bool CBatteryManagementSystem::validateBatteryParamChargeRate(float val)
{
    m_bBatteryStatusChargeRate = validateMin(val, MIN_CHARGE_RATE) && validateMax(val, MAX_CHARGE_RATE);
    return m_bBatteryStatusChargeRate;
}

bool CBatteryManagementSystem::batteryIsOk(eBmsParams bmsParam, float paramVal)
{
    bool status;

    switch (bmsParam)
    {
        case TEMPERATURE:
            status = validateBatteryParamTemp(paramVal);
            break;
        case SOC:
            status = validateBatteryParamSoc(paramVal);
            break;
        case CHARGERATE:
            status = validateBatteryParamChargeRate(paramVal);
            break;
    }

    return status;
}

