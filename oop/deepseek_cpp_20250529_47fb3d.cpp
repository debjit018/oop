#include <iostream>
using namespace std;

class BankAccount {
    double _balance;
public:
    BankAccount(double initial = 0) : _balance(initial) {}
    
    void deposit(double amount) {
        if(amount > 0) _balance += amount;
    }
    
    void withdraw(double amount) {
        if(amount > 0 && amount <= _balance) _balance -= amount;
        else cout << "Invalid withdrawal!" << endl;
    }
    
    double get_balance() const {
        return _balance;
    }
};

int main() {
    BankAccount acc(1000);
    acc.deposit(500);
    acc.withdraw(200);
    cout << "Balance: $" << acc.get_balance() << endl;
    return 0;
}