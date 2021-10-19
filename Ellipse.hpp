/**
 * данный файл объявляет класс с описанием Эллипса
 * Эллипс имеет большую ось и малую - а и б
 *  при вычислении периметра и площади класс использует эти параметры и подставляет их в формулы
 */
#ifndef Ellipse_hpp
#define Ellipse_hpp
#include "Figure.hpp"
#include <stdio.h>
class Ellipse :private Figure {
public:
    float a, b;
        Ellipse(float f1, float f2);
        ~Ellipse();
        float getSquare();
        float getPerimetr();
};
#endif 
