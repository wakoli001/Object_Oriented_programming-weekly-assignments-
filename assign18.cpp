#include <iostream>
#include <string>
using namespace std;
class Person {
protected: string name; int age;
public:
    void inputPerson() { cout << "Name: "; getline(cin, name); cout << "Age: "; cin >> age; }
    void displayPerson() const { cout << "Name: " << name << "\nAge: " << age << '\n'; }
};
class Student : public Person {
    string admission, schoolClass;
public:
    void inputStudent() {
        inputPerson(); cin.ignore();
        cout << "Admission number: "; getline(cin, admission);
        cout << "Class: "; getline(cin, schoolClass);
    }
    void displayStudent() const {
        displayPerson(); cout << "Admission number: " << admission << "\nClass: " << schoolClass << '\n';
    }
};
int main() { Student student; student.inputStudent(); student.displayStudent(); }
