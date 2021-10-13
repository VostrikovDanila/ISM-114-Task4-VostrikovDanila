/**
 * данный файл объявляет класс с описанием трапеции
 * трапеция имеет четыре стороны и высоту
 *  при вычислении периметра стороны складываются,  при вычислении площади сумма оснований разделенная пополам умножается на высоту
 */
#ifndef Trapezia_hpp
#define Trapezia_hpp
#include "Square.hpp"
#include <stdio.h>
class Trapezia :
    public Square {
public:
    float a, b, c, d;
        Trapezia(float A, float B, float C, float D, float H);
        Trapezia();
        float getSquare();
        float getPerimetr();
        void print();
        void enter();
};
#endif
