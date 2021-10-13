
#include "Ellipse.hpp"
#include <iostream>
using namespace std;
float Ellipse::getSquare() {
    return PI * a * b;
}
float Ellipse::getPerimetr() {
    return 4 * (PI * a * b + (a - b)) / (a + b);
}
Ellipse::Ellipse(float A, float B) :a(A), b(B)
{}
Ellipse::Ellipse() {}
void Ellipse::print() {
    cout << "Полуоси: " << a << ";" << b << endl;
    cout << "Периметр: " << getPerimetr() << endl;
    cout << "Площадь: " << getSquare() << endl;
}
void Ellipse::enter() {
    cout << "введите полуоси:" << endl;
    cin >> a >> b;
}
