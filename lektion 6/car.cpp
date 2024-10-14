#include "car.h"

Car::Car(int speed, int fuel): Vehicle(speed, fuel){}
void Car::sound(){
    std::cout << "Bilen låter: VROOM!!!" << std::endl;
}