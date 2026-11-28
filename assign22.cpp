/* NAME :  WANGILA IAN WAKOLI
   rEG No. : CT101/G/26668/24
   COURSE  : COMPUTER SCIENCE
   YEAR    : 2.1
    */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Employee {
    string name, id; double basicSalary = 0;
public:
    void setEmployeeDetails() {
        cout << "Employee name: "; getline(cin, name);
        cout << "Employee ID: "; getline(cin, id);
        cout << "Basic salary: "; cin >> basicSalary;
    }
    double calculateSalary() const { return basicSalary * 1.10; }
    void displayEmployeeDetails() const {
        cout << fixed << setprecision(2) << "Name: " << name << "\nID: " << id
             << "\nNet salary: " << calculateSalary() << '\n';
    }
};
int main() { Employee employee; employee.setEmployeeDetails(); employee.displayEmployeeDetails(); }
