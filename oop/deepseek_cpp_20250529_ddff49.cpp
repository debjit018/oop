#include <iostream>
using namespace std;

class Appliance {
public:
    virtual void turn_on() = 0;
    virtual ~Appliance() {}
};

class Fan : public Appliance {
public:
    void turn_on() override {
        cout << "Fan is spinning" << endl;
    }
};

class Light : public Appliance {
public:
    void turn_on() override {
        cout << "Light is shining" << endl;
    }
};

int main() {
    Appliance* a1 = new Fan();
    Appliance* a2 = new Light();
    
    a1->turn_on();
    a2->turn_on();
    
    delete a1;
    delete a2;
    return 0;
}