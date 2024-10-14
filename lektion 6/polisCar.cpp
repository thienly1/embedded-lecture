# include "polisCar.h"

PolisCar::PolisCar(int speed, int fuel): Car(speed, fuel){}
void PolisCar::sound(){
    Car::sound();
	std::cout << "WEEEUUUU WWEEEEUUUU!!!" << std::endl;
}