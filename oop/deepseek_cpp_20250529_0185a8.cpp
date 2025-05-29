#include <iostream>
#include <cmath>
using namespace std;

class Point {
    float x, y;
public:
    Point(float a = 0, float b = 0) : x(a), y(b) {}
    float distance(Point p) {
        return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
    }
};

class Circle {
    Point center;
    float radius;
public:
    Circle(Point p, float r) : center(p), radius(r) {}
    float area() { return 3.14159 * radius * radius; }
    void display() {
        cout << "Area: " << area() << endl;
    }
};

int main() {
    Point p(3, 4);
    Circle c(p, 5);
    c.display();  // Output: Area: 78.5397
    return 0;
}