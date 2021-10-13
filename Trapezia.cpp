#include "Trapezia.hpp"
#include <iostream>
using namespace std;
float Trapezia::getSquare() {
    return  h * (a + b) / 2;
}
float Trapezia::getPerimetr() {
    return a + b + c + d;
}
Trapezia::Trapezia() {}
void Trapezia::enter() {
    cout << "введите cтороны:" << endl;
    cin >> a >> b >> c >> d;
    cout << "введите высоту" << endl;
    cin >> h;
}
Trapezia::Trapezia(float A, float B, float C, float D, float H) :Square(H), a(A), b(B), c(C), d(D)
{}
void Trapezia::print() {
    cout << "Стороны: " << a << "," << b << "," << c << "," << d << "; высота " << h << endl;
    cout << "Периметр: " << getPerimetr() << endl;
    cout << "Площадь: " << getSquare() << endl;
}
