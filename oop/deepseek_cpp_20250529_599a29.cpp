#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    vector<Shape*> shapes;
    shapes.push_back(new Rectangle(4, 5));
    shapes.push_back(new Circle(3));
    
    for(auto shape : shapes) {
        cout << "Area: " << shape->area() << endl;
        delete shape;
    }
    return 0;
}