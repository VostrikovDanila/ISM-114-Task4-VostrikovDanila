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
     float a,b,c,d,h;
     cout << "введите полуоси эллипса:" << endl;
     cin >> a >> b;
     Ellipse el(a,b);
     cout<<"Эллипс: "<<endl;
     cout << "Полуоси: " << el.a << ";" << el.b << endl;
     cout << "Периметр: " << el.getPerimetr() << endl;
     cout << "Площадь: " << el.getSquare() << endl;
     cout << "введите сторону квадрата:" << endl;
     cin >> h;
     Square sq(h);
     cout<<"Квадрат: "<<endl;
     cout << "Сторона: " << sq.h << endl;
     cout << "Периметр: " << sq.getPerimetr() << endl;
     cout << "Площадь: " << sq.getSquare() << endl;
     cout << "введите cтороны трапеции:" << endl;
     cin >> a >> b >> c >> d;
     cout << "введите высоту трапеции" << endl;
     cin >> h;
     Trapezia tr(a,b,c,d,h);
     cout<<"Трапеция: "<<endl;
     cout << "Стороны: " << tr.a << "," << tr.b << "," << tr.c << "," << tr.d << "; высота " << tr.h << endl;
     cout << "Периметр: " << tr.getPerimetr() << endl;
     cout << "Площадь: " << tr.getSquare() << endl;
     return 0;
 }
