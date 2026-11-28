/* NAME :  WANGILA IAN WAKOLI
   rEG No. : CT101/G/26668/24
   COURSE  : COMPUTER SCIENCE
   YEAR    : 2.1
    */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ofstream file("borrowed_books.txt", ios::app);
    if (!file) { cerr << "Could not open borrowed_books.txt\n"; return 1; }
    string title; cout << "Book title: "; getline(cin, title);
    file << title << '\n';
    if (!file) { cerr << "Could not save the title\n"; return 1; }
    file.close(); cout << "Book title stored successfully.\n";
}
