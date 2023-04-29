#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
private:
    std::string manufacturer;
    int yearBuilt;

public:
    Vehicle(std::string m, int y);
    std::string getManufacturer();
    void setManufacturer(std::string m);
    int getYearBuilt();
    void setYearBuilt(int y);
    virtual void displayInfo();
};

#endif
