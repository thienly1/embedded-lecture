// head of class driver
#pragma once
#include <iostream>
# include "person.h"
#include "car.h"

using namespace std;

class Driver {
    private:
        Person person;
        Car car;
    
    public:
        Driver(Person person, Car car);
        string getDriver();
};