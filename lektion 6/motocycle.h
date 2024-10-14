#pragma once
#include "vehicle.h"
class Motocycle: public Vehicle{
    public:
        Motocycle(int speed, int fuel);
        void sound() override;
};