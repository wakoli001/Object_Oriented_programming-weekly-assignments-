#include <iostream>

using namespace std;

class Book{
	public:
		int pages;
		string Name;
		
		Book(int a, string b){
			pages = a;
			Name = b;
		}
};

int main(){
	Book Book1(250, "Rise of the minions");
	
	cout << Book1.pages<<endl;
	
	cout << Book1.Name<<endl;
}