#include <cmath>
 #include <ctime>
 #include <iostream>
#include "Figure.hpp"
#include "Trapezia.hpp"
#include "Ellipse.hpp"
#include "Square.hpp"

 using namespace std;

 int main() {
     setlocale(LC_ALL, "Russian");
     Ellipse el;
     Square sq;
     Trapezia tr;
     el.enter();
     el.print();
     sq.enter();
     sq.print();
     tr.enter();
     tr.print();
     return 0;
 }
