#include "include/instrumentmodule.h"

InstrumentModule::InstrumentModule(QObject *parent, QString moduleName) : QObject(parent)
{
    _moduleName = moduleName;
}
