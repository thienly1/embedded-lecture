#pragma once

#include "vehicle.h"

class Car : public Vehicle{
    public:
        Car(int speed, int fuel);
        void sound() override;
};