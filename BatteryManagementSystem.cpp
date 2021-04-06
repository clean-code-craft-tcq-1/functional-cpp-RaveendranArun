#include "BatteryManagementSystem.h"

CBatteryManagementSystem::CBatteryManagementSystem(float temp, float soc, float cr):m_fBatteryTemp(temp), m_fBatterySoc(soc), m_fBatteryChargeRate(cr)
{

}

CBatteryManagementSystem::~CBatteryManagementSystem()
{

}

void CBatteryManagementSystem::updateBatteryParam(float temp, float soc, float cr)
{
    m_fBatteryTemp = temp;
    m_fBatterySoc = soc;
    m_fBatteryChargeRate = cr;
}

bool CBatteryManagementSystem::validateBatteryParamTemp()
{
    if ((m_fBatteryTemp < MIN_TEMPERATURE) || (m_fBatteryTemp > MAX_TEMPERATURE) )
        return false;

    return true;
}

bool CBatteryManagementSystem::validateBatteryParamSoc()
{
    if ( (m_fBatterySoc < MIN_SOC) || (m_fBatterySoc > MAX_SOC) )
        return false;

    return true;
}

bool CBatteryManagementSystem::validateBatteryParamChargeRate()
{
    if ((m_fBatteryChargeRate < MIN_CHARGE_RATE) || (m_fBatteryChargeRate > MAX_CHARGE_RATE))
        return false;

    return true;
}

bool CBatteryManagementSystem::validateBatteryParam()
{
    return (validateBatteryParamTemp() && validateBatteryParamSoc() && validateBatteryParamChargeRate());
}

