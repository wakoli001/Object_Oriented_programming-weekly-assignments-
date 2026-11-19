#include <iostream>
#include <string.h>
#include <time.h>
#include <windows.h>

using namespace std;

class Employee{
	private:
		double balance;
		string AccountName;
		
		public:
			void setAccountName(string name){
				AccountName = name;
			}
			
			void setBalance(double bal){
				balance = bal;
			}
			
			string getAccountName(){
				return AccountName;
			}
			
			double getBalance(){
				return balance;
			}
			
			
};

int main(){
	
	time_t Timee;
	time(&Timee);
	
	Employee Kasmall;
	
	Kasmall.setAccountName("Wakoli Wangila Ian");
	Kasmall.setBalance(45000);
	for(char a= 0;a<=3;a++){
	Sleep(1000);
	cout<<"\n-o---o-o-o---   NAWIRI BANK   --oo--oo--oo--o--oo--oo";
	cout<<"\nAccount Name : "<<Kasmall.getAccountName();
	cout<<"\nAccount Balance : "<< Kasmall.getBalance();
	cout<<"\n------------------------------------------------------";
	cout<<"\n"<<ctime(&Timee)<<endl;
    cout<<"\n------------------------------------------------------";
	}
}