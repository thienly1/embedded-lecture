#include "driver.h"


Driver::Driver(Person p, Car c){
    this ->person = p;
    this ->car = c;
}
string Driver::getDriver(){
    return person.getPerson() + " drives " + car.getVehicle();
}