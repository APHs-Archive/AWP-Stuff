#ifndef MODEL_H
#define MODEL_H

#include <feuchtesensor.h>
#include <temperaturrsensor.h>
#include <idatagate.h>

#include <vector>

class Model
{
public:
    Model();
    void addSensor(IDataGate* sensor);

private:
    IDataGate *Sensoren[];
};

#endif // MODEL_H
