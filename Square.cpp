
#include "Square.hpp"
#include <iostream>
using namespace std;
float Square::getSquare() {
    return h * h;
}
float Square::getPerimetr() {
    return 4 * h;
}
Square::Square(float H) :h(H)
{}
Square::Square() {}
void Square::enter() {
    cout << "введите сторону:" << endl;
    cin >> h;
}
void Square::print() {
    cout << "Сторона: " << h << endl;
    cout << "Периметр: " << getPerimetr() << endl;
    cout << "Площадь: " << getSquare() << endl;
}
