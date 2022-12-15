#include "model.h"

Model::Model()
{

}

void Model::addSensor(IDataGate *Sensor){
    std::cout << Sensor->dataSize();
    // print amount of objects in Sensoren
    std::cout << sizeof(&Sensoren) / sizeof(Sensoren[0]);
}
