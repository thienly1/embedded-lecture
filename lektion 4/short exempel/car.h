// head for class Car
#pragma once
#include <iostream>

using namespace std;

class Car{
    private:
        string registrationNumber;
        string manufacturer;
        string model;
    public:
        Car();
        Car(string reg, string ma, string model);
        void setRegistrationNumber(string reg);
        void setManufactorer(string manufactorer);
        void setModel(string model);
        string getVehicle();
};