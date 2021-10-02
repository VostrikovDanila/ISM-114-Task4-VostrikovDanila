#include <cmath>
#include <ctime>
#include <iostream>
#define PI 3.1415926
using namespace std;
class Figure {
public:
    float getSquare();
    float getPerimetr();
    void print();
};
class Ellipse :
    public Figure {
public:
    float a, b;
    float getSquare() {
        return PI * a * b;
    }
    float getPerimetr() {
        return 4 * (PI * a * b + (a - b)) / (a + b);
    }
    Ellipse(float A, float B) :a(A), b(B)
    {}
    Ellipse() {}
    void print() {
        cout << "Полуоси: " << a << ";" << b << endl;
        cout << "Периметр: " << getPerimetr() << endl;
        cout << "Площадь: " << getSquare() << endl;
    }
    void enter() {
        cout << "введите полуоси:" << endl;
        cin >> a >> b;
    }
};
class Square :
    public Figure {
public:
    float h;
    float getSquare() {
        return h * h;
    }
    float getPerimetr() {
        return 4 * h;
    }
    Square(float H) :h(H)
    {}
    Square() {}
    void enter() {
        cout << "введите сторону:" << endl;
        cin >> h;
    }
    void print() {
        cout << "Сторона: " << h << endl;
        cout << "Периметр: " << getPerimetr() << endl;
        cout << "Площадь: " << getSquare() << endl;
    }
};
class Trapezia :
    public Square {
public:
    float a, b, c, d;
    float getSquare() {
        return  h * (a + b) / 2;
    }
    float getPerimetr() {
        return a + b + c + d;
    }
    Trapezia() {}
    void enter() {
        cout << "введите cтороны:" << endl;
        cin >> a >> b >> c >> d;
        cout << "введите высоту" << endl;
        cin >> h;
    }
    Trapezia(float A, float B, float C, float D, float H) :Square(H), a(A), b(B), c(C), d(D)
    {}
    void print() {
        cout << "Стороны: " << a << "," << b << "," << c << "," << d << "; высота " << h << endl;
        cout << "Периметр: " << getPerimetr() << endl;
        cout << "Площадь: " << getSquare() << endl;
    }
};
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
