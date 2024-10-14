#pragma once
#include "vehicle.h"

class Boat: public Vehicle{
    public:
        Boat(int speed, int fuel);
        void sound() override;

};