#ifndef INSTRUMENTMODULE_H
#define INSTRUMENTMODULE_H

#include <QObject>
#include <QString>

class InstrumentModule : public QObject
{
    Q_OBJECT
public:
    explicit InstrumentModule(QObject *parent = nullptr, QString moduleName = "NoName");

signals:

public slots:

protected:
    QString _moduleName;
};

#endif // INSTRUMENTMODULE_H
