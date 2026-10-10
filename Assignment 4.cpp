/*NAME : Wakoli Ian Wangila
  REG No. :CT101/G/26668/25
  COURSE :Computer Science
  YEAR :2.1
  
  A college in Ruiru is processing student applications 
  for admission. A student is admitted 
  only if they meet both academic and age requirements.
  */

#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;

//declare variables to store student details

int main(){
int Age, Exam_score;
string Student_name;

//declare a Time  variable

time_t curTime;
time(&curTime);

//prompt the user to enter the details of admission

cout<< "Enter Student Name : "<<endl;
cin>>Student_name;

cout << "Enter student Age : ";
cin>> Age;

cout << "Enter Student's Exam mark : ";
cin >>Exam_score;

//now format the admission report ready for display

cout << "\n -o-o-o--o-o-o-o-o-o-o--o-o-o-o-o-o-o-o-- \n";
cout << "---  RUIRU NATIONAL COLLEGE OF ARTS --- \n";
cout <<"______________________________________________\n";
cout << "Student Name : "<<Student_name;
cout << "\nStudent Age : "<<Age;
cout << "\nStudent Score : "<<Exam_score; 
cout << "\n====================================== \n";

if(Age >= 18){
	if(Exam_score >= 50){
		cout << "\n   -O-O- Student Admitted Successfully \n";
		cout << "   O-O- All Qualifications met\n";
	}else{
		cout<< "   Student Not Admitted!! \n";
		cout << "   Reason : Low Score\n";
	}
}
else{
	cout << "   Student Not Admmitted \n";
	cout << "   Reason : Underage\n";
}

cout<<"\n ----------------------------------------------   \n";
cout << "\n Designed by Kasmall DevOps\n\n";
cout <<"______________________________________________\n";
cout <<ctime(&curTime);
cout <<"______________________________________________\n";
}