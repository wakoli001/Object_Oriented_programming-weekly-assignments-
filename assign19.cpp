#include <iostream>
#include <string>
using namespace std;
class Vehicle {
protected: string brand; int year;
public:
    void inputVehicle() { cout << "Brand: "; getline(cin, brand); cout << "Year of manufacture: "; cin >> year; }
    void displayVehicle() const { cout << "Brand: " << brand << "\nYear: " << year << '\n'; }
};
class Car : public Vehicle {
    int doors; double engineCapacity;
public:
    void inputCar() {
        inputVehicle(); cout << "Number of doors: "; cin >> doors;
        cout << "Engine capacity (litres): "; cin >> engineCapacity;
    }
    void displayCar() const {
        displayVehicle(); cout << "Doors: " << doors << "\nEngine capacity: " << engineCapacity << " L\n";
    }
};
int main() { Car car; car.inputCar(); car.displayCar(); }
