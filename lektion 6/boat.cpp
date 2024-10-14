
#include "boat.h"

Boat::Boat(int speed, int fuel): Vehicle(speed, fuel){}
void Boat::sound(){
    std::cout << "Båten låter: dunk dunk dunk!!!!" << std::endl;
}