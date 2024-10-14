# include "motocycle.h"

Motocycle::Motocycle(int speed, int fuel): Vehicle(speed, fuel){}
void Motocycle::sound(){
    std::cout << "Motorcykeln låter: BRAaaa!!!" << std::endl;
}