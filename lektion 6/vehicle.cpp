#include "vehicle.h"

using namespace std;

Vehicle::Vehicle(int speed, int fuel){
    this -> speed = speed;
    this -> fuel = fuel;
}

void Vehicle::accelerate(int dV){
    speed += dV;
    fuel -= 2;
    cout<< "Nu gasar vi. Hastighet: " << speed << " km/h. Bränsle: " << fuel <<endl;
}

void Vehicle::decelerate(int dV){
    speed -= dV;
    if (speed<0)
        speed= 0;
    cout << "Nu bromsar vi. Hastighet: " << speed << "km/h." <<endl;
}

void Vehicle::refuel(int liters){
    fuel += liters;
    if(fuel >100){
        fuel=100;
        cout<< "PANIIIIIIIK, STOPPARN RINNER ÖVER!" <<endl;
    }
    cout << "Du har tankat och har nu: "<< fuel << "liter i bilen." <<endl;
}
