
#include "Square.hpp"
#include <iostream>
using namespace std;
float Square::getSquare() {
    return h * h;
}
float Square::getPerimetr() {
    return 4 * h;
}
Square::Square(float height) :h(height)
{}
Square::~Square() {}
