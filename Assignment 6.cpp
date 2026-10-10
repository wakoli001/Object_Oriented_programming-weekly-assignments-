#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;

class Book{
    public:
    string title,author;
    int available, borrow;

    Book(string Atitle, string Aauthor, int Anumber){
        title = Atitle;
        author =Aauthor;
        available = Anumber;
    }
    void inputDetails(){

        // prompt the user to enter the deails of the book in hand

        cout <<"--------------------------------------------\n";
        cout <<"== SMALL LIBRARY SERVICES ==\n";

        cout << "Enter The Title Of The Book :";
        getline(cin, title);

        cout <<"Enter The Author Of The Book : ";
        getline(cin, author);

        cout <<"Enter The Physically Available Copies : ";
        cin>>available;

    }

    void borrowBook(){
        cout <<"Enter Copes Of Books Borrowed :";
        cin >>borrow;
    cout<<"Books borrowed successfully.\n";

     }

     void displayBooks(){
        cout<<"===================================================\n";
        cout <<"-o-o-  Book Info.  -o-o-\n";

         cout <<"--------------------------------------------\n";

        cout<<"\nTitle  :  "<<title;
        cout <<"\nAuthor  :  "<<author;
        cout <<"\nInitial Copies Available : "<<available;
        cout <<"\nBooks Borrowed  :  "<<borrow;
        int copies = available-borrow;
        cout <<"\nAvailable  copies  :  "<<copies;
        cout<<"\n===================================================\n";

     }
};

int main(){
	Book book1("abc","def" ,1);
    book1.inputDetails();
    book1.borrowBook();
    cout <<"\nEnter details for the second book\n";
    Book book2("ab", "cd",23);
     book2.inputDetails();
     book2.borrowBook();
     book1.displayBooks();
     book2.displayBooks();

     time_t Timer;
    time(&Timer);
	 cout<<ctime(&Timer);
        cout<<"\n";

           cout <<"Developed by Kasmall Designers...\n";
         cout <<"--------------------------------------------\n";

         return 0;
}
