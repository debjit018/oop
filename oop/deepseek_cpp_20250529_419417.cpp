#include <iostream>
#include <initializer_list>
using namespace std;

class Calculator {
public:
    int add(initializer_list<int> nums) {
        int sum = 0;
        for(int n : nums) sum += n;
        return sum;
    }
};

int main() {
    Calculator calc;
    cout << "1+2+3 = " << calc.add({1,2,3}) << endl;
    cout << "10+20+30+40 = " << calc.add({10,20,30,40}) << endl;
    return 0;
}