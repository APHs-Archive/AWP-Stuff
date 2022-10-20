#include "temperatursensor.h"

TemperaturSensor::TemperaturSensor()
{

}

std::string TemperaturSensor::getSensorType(){
    return "TemperaturSensor";
}

void TemperaturSensor::fetchData(double Values[]){
    for(int i = 0; i < sizeof(Values) / sizeof(Values[0]); i++){
        Values[i] = rand() % 100;
    }
}

int TemperaturSensor::dataSize(){
    return 5;
}
