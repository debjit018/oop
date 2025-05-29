#include <iostream>
using namespace std;

class Distance {
    int meters;
public:
    Distance(int m = 0) : meters(m) {}
    
    Distance operator+(const Distance& d) {
        return Distance(meters + d.meters);
    }
    
    void display() const {
        cout << meters << " meters" << endl;
    }
};

int main() {
    Distance d1(100), d2(200);
    Distance d3 = d1 + d2;
    cout << "Total distance: ";
    d3.display();
    return 0;
}