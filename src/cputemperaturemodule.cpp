#include "include/cputemperaturemodule.h"

#include <QFile>
#include <QDataStream>
#include <QDebug>

CpuTemperatureModule::CpuTemperatureModule(QObject *parent, QString moduleName)
    : InstrumentModule(parent, moduleName)
{

}

float CpuTemperatureModule::GetTemperature(){

    AnalyseTemperature();
    return this->_temperature;
}

void CpuTemperatureModule::AnalyseTemperature()
{
    //
    QFile f("/sys/class/thermal/thermal_zone0/temp");
    if(f.exists()){
        f.open(QIODevice::ReadOnly);
        QDataStream s(&f);
        int value;
        s >> value;
        this->_temperature = value / 1000;
        qDebug() << "Temperature : " << this->_temperature;
    }else{
        return;
    }
}
