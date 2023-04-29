#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "SUV.h"
#include "Main.h"

int main()
{
    // Create a Vehicle object
    std::string manufacturer;
    int yearBuilt;
    std::cout << "Enter vehicle manufacturer: ";
    std::cin >> manufacturer;
    std::cout << "Enter year built: ";
    std::cin >> yearBuilt;
    Vehicle v(manufacturer, yearBuilt);
    v.displayInfo();

    // Create a Car object
    int numDoors;
    std::cout << "Enter car manufacturer: ";
    std::cin >> manufacturer;
    std::cout << "Enter year built: ";
    std::cin >> yearBuilt;
    std::cout << "Enter number of doors: ";
    std::cin >> numDoors;
    Car c(numDoors, manufacturer, yearBuilt);
    c.displayInfo();

    // Create an SUV object
    double gasTankCapacity;
    std::cout << "Enter SUV manufacturer: ";
    std::cin >> manufacturer;
    std::cout << "Enter year built: ";
    std::cin >> yearBuilt;
    std::cout << "Enter number of doors: ";
    std::cin >> numDoors;
    std::cout << "Enter gas tank capacity: ";
    std::cin >> gasTankCapacity;
    SUV Suv(gasTankCapacity, numDoors, manufacturer, yearBuilt);
    Suv.displayInfo();

    return 0;
}
