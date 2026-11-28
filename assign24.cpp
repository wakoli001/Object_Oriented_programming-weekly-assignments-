#include <iostream>
#include <string>
using namespace std;
class MedicalStaff {
protected: string name, id; double basicSalary;
public:
    void inputDetails() {
        cout << "Staff name: "; getline(cin, name);
        cout << "Staff ID: "; getline(cin, id);
        cout << "Basic salary: "; cin >> basicSalary;
    }
    virtual double calculateSalary() const = 0;
    void displayDetails() const { cout << name << " (" << id << ") salary: " << calculateSalary() << '\n'; }
    virtual ~MedicalStaff() = default;
};
class Doctor : public MedicalStaff {
    double allowance;
public: void inputExtra() { cout << "Allowance: "; cin >> allowance; }
    double calculateSalary() const override { return basicSalary + allowance; }
};
class Nurse : public MedicalStaff {
    double overtime;
public: void inputExtra() { cout << "Overtime pay: "; cin >> overtime; }
    double calculateSalary() const override { return basicSalary + overtime; }
};
int main() {
    Doctor doctor; Nurse nurse;
    cout << "Doctor details\n"; doctor.inputDetails(); doctor.inputExtra();
    cout << "Nurse details\n"; cin.ignore(); nurse.inputDetails(); nurse.inputExtra();
    MedicalStaff* staff[] = {&doctor, &nurse};
    for (MedicalStaff* person : staff) person->displayDetails();
}
