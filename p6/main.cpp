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

class Triangle : public Shape {
    public:
        Triangle() {}
        Triangle(double width, double height) : Shape(width, height) {}
        double getArea() {
            return (getWidth() *getHeight()) / 2;
        }
};

int main() {
    Triangle t1;
    t1.setWidth(3);
    t1.setHeight(5);
    Triangle t2(5, 10);
    cout << "t1 area: " << t1.getArea() << endl;
    cout << "t2 area: " << t2.getArea() << endl;
    return 0;
}
