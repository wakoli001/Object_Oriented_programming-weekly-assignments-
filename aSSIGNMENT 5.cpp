/*NAME : WANGILA IAN WAKOLI
  COURSE :COMPUTER SCIENCE
  YEAR  : 2.1
  REG No. : CT101/G/26668/25

  A small electronics shop in Ruiru wants to build a simple calculator system for sales assistants
  WE ARE WRITING A SIMPLE C++ PROGRAM TO ASSIST IN THE COMPUTATIONS
  */
#include <iostream>
#include <time.h>

using namespace std;

int main(){
	int a, b;
	float Result;
	char Operator;
	
	//a line of code for displaying Real time on console
	
	time_t Ttimer;
	time(&Ttimer);
	
	//prompt the user to enter the numbers and the operand
	
		cout << "----------------------------------------------------\n";
	cout << "===   SMART ELECTRONICS SHOP   ===\n";
		cout << "----------------------------------------\n";
	
	cout<< "Enter The first numbers for the operation : ";
	cin >>a;
	
	cout << "Enter The second Number For the operation : ";
	cin>>b;
	
	cout << "Enter The Operand You Want to use : ";
	cin >> Operator;
	
	//create a switch loop for your operands
	
	switch(Operator){
		case '+' :
			Result = a+b;
			break;
		
			case '-' :
			Result = a-b;
			break;
		
			case '*' :
			Result = a*b;
			break;
		
			case '/' :
			Result = a/b;
			break;
		
			default :
				cout << "Invalid Operand Entered\nPlease Try Again\n";
				break;
			
	}

	//Now Write the display prototype for the system
	
	
	cout << "-----------------------------------------\n";
	     	cout << "First Number : "<<a;
			cout << "\n Second Number : "<<b;
			cout << "\nOperand  : "<<Operator;
			cout << "\nResult : "<<Result;
			cout << "\n========================================\n";
			
			cout <<"TIME :"<<ctime(&Ttimer);
			cout<< "Developed By Kasmall DevOps\n";
			cout << "-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o--o-o-o-o-o--oo\n"; 
			
}		
			
			
			
			