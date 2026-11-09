#include <iostream>
#include <string.h>

using namespace std;

class AccountHolder{
	private:
		string Name;
	public:
		AccountHolder(string n){
			Name = n;
		}
void setName(string n){
	Name = n;
}
	public:
		string getName(){
			return Name;
		}
};

class BankAccount_Holder: public AccountHolder{
	private :
		int AccountNUmber;
		double balance;
		
		public:
		BankAccount_Holder(string n,int b, double c):AccountHolder(n){
			
			AccountNUmber = b;
			balance= c;
		}
		
		int getAccountNumber(){
			return AccountNUmber;
		}
		double getBalance(){
			return balance;
		}
};

class savingsAccount: public BankAccount_Holder{
	 private:
	   	double InterestRate;
	   	
	  	   	public:
		   savingsAccount(string n,int b, double c, double d):BankAccount_Holder( n, b, c){
			   InterestRate = d;
		   }	
		   
		   public:
		   	double getInterestRate(){
				   return InterestRate;
			   }
			  
 };

int main(){
	savingsAccount acc1( "John",1234,4500.50,0.12);
	cout<<"Acount Name : "<<acc1.getName()<<endl;
cout<<	"Account Number :"<<acc1.getAccountNumber()<<endl;
cout<<"AccountBalance :"<<	acc1.getBalance()<<endl;
cout<<"Interest Earned : "<<acc1.getInterestRate()<<endl;
}