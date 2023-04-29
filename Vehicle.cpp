#include <iostream>
#include "Vehicle.h"

Vehicle::Vehicle(std::string m, int y) {
    manufacturer = m;
    yearBuilt = y;
}

std::string Vehicle::getManufacturer() {
    return manufacturer;
}

void Vehicle::setManufacturer(std::string m) {
    manufacturer = m;
}

int Vehicle::getYearBuilt() {
    return yearBuilt;
}

void Vehicle::setYearBuilt(int y) {
    yearBuilt = y;
}

void Vehicle::displayInfo() {
    std::cout << "Manufacturer: " << manufacturer << std::endl;
    std::cout << "Year built: " << yearBuilt << std::endl;
}
