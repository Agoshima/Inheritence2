#include <iostream>
#include "SUV.h"

SUV::SUV(std::string m, int y, int nd, int gtc) : Car(m, y, nd) {
    gasTankCapacity = gtc;
}

int SUV::getGasTankCapacity() {
    return gasTankCapacity;
}

void SUV::setGasTankCapacity(int gtc) {
    gasTankCapacity = gtc;
}

void SUV::displayInfo() {
    std::cout << "Manufacturer: " << getManufacturer() << std::endl;
    std::cout << "Year built: " << getYearBuilt() << std::endl;
    std::cout << "Number of doors: " << getNumDoors() << std::endl;
    std::cout << "Gas tank capacity: " << gasTankCapacity << std::endl;
}
