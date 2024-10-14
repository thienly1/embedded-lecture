#include <iostream>
#include "vehicle.cpp"
#include "car.cpp"
#include "motocycle.cpp"
#include "boat.cpp"
#include "polisCar.cpp"

using namespace std;

int main(){
    Vehicle * vehicle_list[4];
    

    vehicle_list[0] = new Car(0, 50);
    vehicle_list[1] = new Motocycle(0, 18);
    vehicle_list[2] = new Boat(0, 90);
    vehicle_list[3] = new PolisCar(0, 100);
    
    for (int i = 0; i < 4; i++) {
        vehicle_list[i]->accelerate(5);
        vehicle_list[i]->decelerate(5);
        vehicle_list[i]->refuel(5);
        vehicle_list[i]->sound();
    }

    for (int i = 0; i < 4; i++) {
        delete vehicle_list[i];
    }

    return 0;
}