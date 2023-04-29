#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numDoors;

public:
    Car(std::string m, int y, int nd);
    int getNumDoors();
    void setNumDoors(int nd);
    void displayInfo();
};

#endif
