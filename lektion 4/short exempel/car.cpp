// Implementation of class Car

#include "car.h"


Car::Car(){
    registrationNumber = "";
    manufacturer = "";
    model = "";
}
Car::Car(string reg, string man, string mod){
    this -> registrationNumber = reg;
    this -> manufacturer = man;
    this -> model = mod;
}

void Car::setRegistrationNumber(string reg){
    this -> registrationNumber= reg;
}
void Car::setManufactorer(string man){
    this -> manufacturer = man;
}
void Car::setModel(string mod){
    this -> model = mod;
}
string Car::getVehicle(){
    return registrationNumber + ": " + manufacturer + " " + model;
}

