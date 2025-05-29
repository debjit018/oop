#include <iostream>
using namespace std;

class Imaginary {
    float img;
public:
    Imaginary(float i = 0) : img(i) {}
    float getImg() { return img; }
};

class Complex {
    float real;
    Imaginary img;
public:
    Complex(float r = 0, float i = 0) : real(r), img(i) {}
    
    Complex mult(Complex c) {
        float r = real * c.real - img.getImg() * c.img.getImg();
        float i = real * c.img.getImg() + img.getImg() * c.real;
        return Complex(r, i);
    }

    void display() {
        cout << real << " + i" << img.getImg() << endl;
    }
};

int main() {
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1.mult(c2);
    c3.display();  // Output: -7 + i22
    return 0;
}