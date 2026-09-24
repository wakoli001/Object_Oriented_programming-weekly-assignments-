
/*IAN WANGILA
CT101/G/26668/25
COMPUTER SCIENCE 2.1

A program to display the grading system for Prime group of schools using
nested if...else loops*/

#include <iostream>
using namespace std;

int main(){
    cout << "==  PRIME GRROUP OF SCHOOLS  ==\n";

    int marks;
    char Grade;
    string Name;

    cout << "Enter Your Name : "<< endl;
    cin >> Name;

    cout << " Enter Your Marks : "<<endl;
    cin >> marks;

    if(marks >= 70 && marks <=100){
        Grade = 'A';
    }
    else if(marks >= 60 && marks <=69){
        Grade ='B';
    }
    else if(marks >= 50 && marks <=59){
        Grade = 'C';
    }
    else if(marks >= 40 && marks <=49){
        Grade = 'D';
    }
    else{
        Grade = 'E';
    }

    cout << "\n-_-_  PRIME GRADING SYSTEM _-_-\n";
    cout << "__________________________________\n";

    cout << "\nStudent Name : "<<Name;
    cout << "\nMarks Scored : "<< marks;
    cout << "\nGrade  : "<< Grade;
     cout << "\n__________________________________\n";
}
