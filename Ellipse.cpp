
#include "Ellipse.hpp"
#include <iostream>
using namespace std;
float Ellipse::getSquare() {
    return PI * a * b;
}
float Ellipse::getPerimetr() {
    return 4 * (PI * a * b + (a - b)) / (a + b);
}
Ellipse::Ellipse(float f1, float f2) :a(f1), b(f2)
{}
Ellipse::~Ellipse() {}
