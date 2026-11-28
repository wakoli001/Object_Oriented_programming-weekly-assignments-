/* NAME :  WANGILA IAN WAKOLI
   rEG No. : CT101/G/26668/24
   COURSE  : COMPUTER SCIENCE
   YEAR    : 2.1
    */

#include <iostream>
using namespace std;
class Shape { public: virtual double calculateArea() const = 0; virtual ~Shape() = default; };
class Circle : public Shape {
    double radius;
public: Circle(double r) : radius(r) {}
    double calculateArea() const override { return 3.14159 * radius * radius; }
};
class Rectangle : public Shape {
    double length, width;
public: Rectangle(double l, double w) : length(l), width(w) {}
    double calculateArea() const override { return length * width; }
};
int main() {
    double r, l, w; cout << "Circle radius: "; cin >> r;
    cout << "Rectangle length and width: "; cin >> l >> w;
    Circle circle(r); Rectangle rectangle(l, w);
    Shape* shapes[] = {&circle, &rectangle};
    for (Shape* shape : shapes) cout << "Area: " << shape->calculateArea() << '\n';
}
