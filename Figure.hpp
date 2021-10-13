/**
 * данный файл объявляет базовый класс с описанием фигуры и методами, которые будут переопределять дочерние фигуры
 * каждая фигура должна обладать периметром и площадью, функцией ввода и вывода данных
 *  при создании производного класса мы должны переопределить данные методы
 */
#ifndef Figure_hpp
#define Figure_hpp
#define PI 3.1415926
#include <stdio.h>
class Figure {
public:
    float getSquare();
    float getPerimetr();
    void print();
    void enter();
};

#endif 
