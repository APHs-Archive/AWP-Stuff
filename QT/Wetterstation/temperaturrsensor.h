#ifndef TEMPERATURRSENSOR_H
#define TEMPERATURRSENSOR_H

#include "idatagate.h"

class Temperaturrsensor : public IDataGate
{
private:
 double Values[5];
public:
    Temperaturrsensor();
    std::string getSensorType();
    void fetchData(double Values[]);
    int dataSize();
    double Value[];
};

#endif // TEMPERATURRSENSOR_H
