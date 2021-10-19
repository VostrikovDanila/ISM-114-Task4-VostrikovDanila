#include "Trapezia.hpp"
#include <iostream>
using namespace std;
float Trapezia::getSquare() {
    return  h * (a + b) / 2;
}
float Trapezia::getPerimetr() {
    return a + b + c + d;
}
Trapezia::~Trapezia() {}
Trapezia::Trapezia(float l1, float l2, float l3, float l4, float height) :h(height), a(l1), b(l2), c(l3), d(l4)
{}
