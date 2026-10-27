#include <iostream>
#include <time.h>

using namespace std;

class Company{
    private:
        int salary;

        public:
            void setSalary(int fulltime, int overtime){
                salary = fulltime + overtime;
            }

            int getSalary(){
                return salary;
            }
};

int main(){
    time_t Timer;
    time(&Timer);

    Company Manager;
    Manager.setSalary(30000, 6000);
        cout << "\n ----------------------------------------------------------------------\n";
   
        cout << "Total Salary : ";
   
        cout << Manager.getSalary();
   
        cout << "\n ----------------------------------------------------------------------\n";
   
        cout<<ctime(&Timer);
   
        cout << "\n=======================================================================\nKasmall Developers";
   
        cout << "\n ----------------------------------------------------------------------\n";
}