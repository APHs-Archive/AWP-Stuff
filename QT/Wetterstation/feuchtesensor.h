#ifndef FEUCHTESENSOR_H
#define FEUCHTESENSOR_H

#include <idatagate.h>

class FeuchteSensor : public IDataGate {
public:
    FeuchteSensor();
    std::string getSensorType();
    void fetchData(double Values[]);
    int dataSize();
};

#endif // FEUCHTESENSOR_H
