#include <iostream>
using namespace std;

class Shape {
    double width;
    double height;
    public:
        Shape() {}
        Shape(double width, double height) {
            this->width = width;
            this->height = height;
        }
        double getWidth() { return width; }
        double getHeight() { return height; }
        void setWidth(double width) { this->width = width; }
        void setHeight(double height) { this->height = height; }
};

class Area {
    public:
        virtual double getArea() = 0;
};

class Triangle : public Shape, public Area {
    public:
        Triangle() {}
        Triangle(double width, double height) {
            setWidth(width);
            setHeight(height);
        }
        double getArea() { return (getWidth() * getHeight()) / 2; }
};

class Rectangle : public Shape, public Area {
    public:
        Rectangle() {}
        Rectangle(double width, double height) : Shape(width, height) {}
        double getArea() { return getWidth() * getHeight(); }
};

int main() {
    Triangle t1;
    t1.setWidth(3);
    t1.setHeight(5);
    Triangle t2(5, 10);
    Rectangle r1;
    r1.setWidth(2);
    r1.setHeight(7);
    Rectangle r2(3, 6);

    cout << "t1 " << t1.getArea() << endl;
    cout << "t2 " << t2.getArea() << endl;
    cout << "r1 " << r1.getArea() << endl;
    cout << "r2 " << r2.getArea() << endl;

    return 0;
}
