/**
 * данный файл объявляет класс с описанием квадрата
 * квадрат имеет один параметр - длину стороны
 *  при вычислении периметра длина умножается на 4, при вычсилении площади-возводится в квадрат
 */

#pragma once
#include "Figure.hpp"
#include <stdio.h>

class Square : Figure {
public:
    float h;
        Square(float height);
        ~Square();
        float getSquare();
        float getPerimetr();
     
};
