#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Student {
    string name, admission; double balance = 0;
public:
    void inputStudentData() {
        cout << "Student name: "; getline(cin, name);
        cout << "Admission number: "; getline(cin, admission);
        cout << "Fee balance: "; cin >> balance;
    }
    void makePayment() {
        double payment; cout << "Payment amount: "; cin >> payment;
        if (payment > 0 && payment <= balance) balance -= payment;
        else cout << "Invalid payment amount.\n";
    }
    void displayStatus() const {
        cout << fixed << setprecision(2) << name << " (" << admission << ") balance: " << balance << '\n';
    }
};
int main() { Student student; student.inputStudentData(); student.makePayment(); student.displayStatus(); }
