/* NAME :  WANGILA IAN WAKOLI
   rEG No. : CT101/G/26668/24
   COURSE  : COMPUTER SCIENCE
   YEAR    : 2.1
    */

#include <iostream>
#include <string>
using namespace std;
class Book {
    string title, author; int copies;
public:
    void inputDetails() {
        cout << "Book title: "; getline(cin, title);
        cout << "Author: "; getline(cin, author);
        cout << "Available copies: "; cin >> copies;
    }
    void borrowBook() { if (copies > 0) --copies; else cout << "No copies available.\n"; }
    void displayDetails() const {
        cout << "Title: " << title << "\nAuthor: " << author << "\nCopies available: " << copies << '\n';
    }
};
int main() { Book book; book.inputDetails(); book.borrowBook(); book.displayDetails(); }
