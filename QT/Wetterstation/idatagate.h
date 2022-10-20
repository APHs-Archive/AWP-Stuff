#ifndef IDATAGATE_H
#define IDATAGATE_H

#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>

class IDataGate {
public:
    IDataGate();
    virtual std::string getSensorType() = 0;
    virtual void fetchData(double Values[]) = 0;
    virtual int dataSize() = 0;
};

#endif // IDATAGATE_H
