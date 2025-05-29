#include <iostream>
using namespace std;

class DB; // Forward declaration

class DM {
    int metre, cm;
public:
    void getData() {
        cout << "Enter metres and centimetres: ";
        cin >> metre >> cm;
    }
    friend void add(DM, DB);
};

class DB {
    int feet, inches;
public:
    void getData() {
        cout << "Enter feet and inches: ";
        cin >> feet >> inches;
    }
    friend void add(DM, DB);
};

void add(DM d1, DB d2) {
    int choice;
    cout << "1. Display in metres & cm\n2. Display in feet & inches\n";
    cin >> choice;

    // Convert all to centimetres first
    float totalCm = d1.metre * 100 + d1.cm + d2.feet * 30.48 + d2.inches * 2.54;

    if (choice == 1) {
        int m = totalCm / 100;
        int c = (int)totalCm % 100;
        cout << "Sum: " << m << "m " << c << "cm\n";
    } else {
        float totalInches = totalCm / 2.54;
        int ft = totalInches / 12;
        int in = (int)totalInches % 12;
        cout << "Sum: " << ft << "ft " << in << "in\n";
    }
}

int main() {
    DM d1;
    DB d2;
    d1.getData();
    d2.getData();
    add(d1, d2);
    return 0;
}