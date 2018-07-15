#ifndef CPUTEMPERATUREMODULE_H
#define CPUTEMPERATUREMODULE_H

#include <QObject>
#include "instrumentmodule.h"

class CpuTemperatureModule : public InstrumentModule
{
public:
    CpuTemperatureModule(QObject *parent = nullptr, QString moduleName = "Cpu Temperature Module");
    float GetTemperature();

public slots:


private:
    float _temperature;

    void AnalyseTemperature();

};

#endif // CPUTEMPERATUREMODULE_H
