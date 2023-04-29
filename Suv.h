#ifndef SUV_H
#define SUV_H

#include "Car.h"

class SUV : public Car {
private:
    int gasTankCapacity;

public:
    SUV(std::string m, int y, int nd, int gtc);
    int getGasTankCapacity();
    void setGasTankCapacity(int gtc);
    void displayInfo();
};

#endif
