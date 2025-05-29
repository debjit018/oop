#include <iostream>
#include <string>
using namespace std;

class Employee {
    static string company_name;
    string name;
    double salary;
public:
    Employee(string n, double s) : name(n), salary(s) {}
    
    void display() const {
        cout << "Company: " << company_name
             << "\nName: " << name
             << "\nSalary: $" << salary << endl;
    }
    
    static void setCompany(string name) {
        company_name = name;
    }
};

string Employee::company_name = "TechCorp";

int main() {
    Employee e1("John", 50000);
    Employee e2("Sarah", 60000);
    
    e1.display();
    cout << endl;
    e2.display();
    
    Employee::setCompany("NewTech");
    cout << "\nAfter company change:\n";
    e1.display();
    return 0;
}