#ifndef TEMPERATURSENSOR_H
#define TEMPERATURSENSOR_H

#include <idatagate.h>

class TemperaturSensor
{
public:
    TemperaturSensor();
    std::string getSensorType();
    void fetchData(double Values[]);
    int dataSize();
};

#endif // TEMPERATURSENSOR_H
