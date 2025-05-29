#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int age;
    string grade;
public:
    Student(string n, int a, string g) : name(n), age(a), grade(g) {}
    
    void display_info() {
        cout << "Name: " << name << "\nAge: " << age << "\nGrade: " << grade << endl;
    }
};

int main() {
    Student s1("Alice", 18, "A");
    Student s2("Bob", 17, "B+");
    
    s1.display_info();
    s2.display_info();
    return 0;
}