#pragma once

#include "car.h"

class PolisCar: public Car{
    public:
        PolisCar(int speed, int fuel);
        void sound() override;
};

