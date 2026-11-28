#include <iostream>
using namespace std;
class Payment {
public:
    void processPayment(double amount) { cout << "Cash payment: " << amount << '\n'; }
    void processPayment(double amount, double fee) { cout << "Card payment: " << amount + fee << '\n'; }
    void processPayment(double amount, double fee, double discount) {
        cout << "Mobile payment: " << amount + fee - discount << '\n';
    }
};
int main() {
    Payment p; p.processPayment(1000); p.processPayment(1000, 25); p.processPayment(1000, 10, 50);
}
