/**
 * данный файл объявляет класс с описанием трапеции
 * трапеция имеет четыре стороны и высоту
 *  при вычислении периметра стороны складываются,  при вычислении площади сумма оснований разделенная пополам умножается на высоту
 */
#pragma once
#include "Square.hpp"
#include <stdio.h>
class Trapezia:Figure {
public:
    float a, b, c, d,h;
        Trapezia(float l1, float l2, float l3, float l4, float height);
        ~Trapezia();
        float getSquare();
        float getPerimetr();
      
};
