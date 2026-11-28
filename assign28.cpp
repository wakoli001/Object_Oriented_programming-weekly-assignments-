/* NAME :  WANGILA IAN WAKOLI
   rEG No. : CT101/G/26668/24
   COURSE  : COMPUTER SCIENCE
   YEAR    : 2.1
    */

#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file("sales.txt");
    if (!file) { cerr << "Could not open sales.txt\n"; return 1; }
    double amount, total = 0;
    while (file >> amount) total += amount;
    if (!file.eof()) { cerr << "Invalid transaction in sales.txt\n"; file.close(); return 1; }
    file.close();
    cout << "Total sales for the day: " << total << '\n';
}
