#include <iostream>
#include <string>
using namespace std;

class Car {
    string brand;
    string model;
    int year;
public:
    Car(string b, string m, int y) : brand(b), model(m), year(y) {}
    
    void get_car_info() {
        cout << "Brand: " << brand << "\nModel: " << model << "\nYear: " << year << endl;
    }
};

int main() {
    Car c1("Toyota", "Corolla", 2020);
    Car c2("Honda", "Civic", 2021);
    
    c1.get_car_info();
    c2.get_car_info();
    return 0;
}