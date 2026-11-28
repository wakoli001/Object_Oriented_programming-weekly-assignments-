#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct StudentRecord { char name[50]; int registrationNumber; double totalMarks; };
int main() {
    ifstream file("results.dat", ios::binary);
    if (!file) { cerr << "Could not open results.dat\n"; return 1; }
    StudentRecord student;
    while (file.read(reinterpret_cast<char*>(&student), sizeof(student)))
        cout << "Name: " << student.name << " | Registration: " << student.registrationNumber
             << " | Marks: " << student.totalMarks << '\n';
    if (!file.eof()) { cerr << "Error reading the file\n"; return 1; }
    file.close();
}
