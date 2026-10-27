#include <iostream>
#include <time.h>

using namespace std;

class Ball{
    private:
        float area;

        public:
            void setArea(float radius){
                area = 3.142 * radius * radius;
            }

            float getArea(){
                return area;
            }
};

int main(){
    time_t Timer;
    time(&Timer);


    Ball obj;

    cout<<"-------------  ENCAPSULATING THA AREA   ----------\n";

   obj.setArea(2.8);

    cout << "Area Of The Object : "<<obj.getArea();

    cout << "\n___________________________________________________________\n";

    cout <<ctime(&Timer);

    cout << "\n___________________________________________________________\n";
}