#include "feuchtesensor.h"

FeuchteSensor::FeuchteSensor()
{

}

std::string FeuchteSensor::getSensorType(){
    return "FeuchteSensor";
}

void FeuchteSensor::fetchData(double Values[]){
    for(int i = 0; i < sizeof(Values) / sizeof(Values[0]); i++){
        Values[i] = rand() % 100;
    }
}

int FeuchteSensor::dataSize(){
    return 5;
}
