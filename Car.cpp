#include <iostream>
#include "Car.h"

Car::Car(std::string m, int y, int nd) : Vehicle(m, y) {
    numDoors = nd;
}

int Car::getNumDoors() {
    return numDoors;
}

void Car::setNumDoors(int nd) {
    numDoors = nd;
}

void Car::displayInfo() {
    Vehicle::displayInfo();
    std::cout << "Number of doors: " << numDoors << std::endl;
}
