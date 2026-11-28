/* NAME :  WANGILA IAN WAKOLI
   rEG No. : CT101/G/26668/24
   COURSE  : COMPUTER SCIENCE
   YEAR    : 2.1
    */

#include <iostream>
using namespace std;
class Shape { public: virtual void draw() const = 0; virtual ~Shape() = default; };
class Circle : public Shape { public: void draw() const override { cout << "Drawing Circle\n"; } };
class Rectangle : public Shape { public: void draw() const override { cout << "Drawing Rectangle\n"; } };
class Triangle : public Shape { public: void draw() const override { cout << "Drawing Triangle\n"; } };
int main() {
    Circle circle; Rectangle rectangle; Triangle triangle;
    Shape* shapes[] = {&circle, &rectangle, &triangle};
    for (Shape* shape : shapes) shape->draw();
}
