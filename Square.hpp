/**
 * данный файл объявляет класс с описанием квадрата
 * квадрат имеет один параметр - длину стороны
 *  при вычислении периметра длина умножается на 4, при вычсилении площади-возводится в квадрат
 */

#ifndef Square_hpp
#define Square_hpp
#include "Figure.hpp"
#include <stdio.h>

class Square :
    public Figure {
public:
    float h;
        Square(float H);
        Square();
        float getSquare();
        float getPerimetr();
        void print();
        void enter();
};
#endif
