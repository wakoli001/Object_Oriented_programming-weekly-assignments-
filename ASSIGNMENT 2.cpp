/* NAME    : WANGILA IAN WAKOLI
   REG No. : CT101/G/26668/25
   COURSE  : COMPUTER SCIENCE
   YEAR    : 2.1

     ROCKY DRIVING SCHIIL WANTS TO CREATE AN AUTOMATED SYSTEM THAT SHOWS IF A STUDENT
     HAS PASESED THE DRIVING TEST
     USER IS REQUIRED TO INPUT THEORY AND PRACTICAL MARKS
     THE PROGRAM IS SUPPOSE TO CALCULTE THE  AVERAGE MARK
     IF TYHE AVERAGE IS ABOVE FIFTY THEN THE STUDENT HAS PASSED ELSE THE STUDENT HAS FAILED
     */
     #include <iostream>>
     using namespace std;

     int main(){
      int Theory_Marks;
      float Practical_Marks, average;
      string Score;

      cout << " ==  ROCKY DRIVING SCHOOL  ==";
      cout << "\n Enter Theory Marks : "<<endl;
      cin >> Theory_Marks;

      cout << "Enter Practical Marks : "<<endl;
      cin >> Practical_Marks;

      average = (Theory_Marks + Practical_Marks)/2;

      cout << "\n-o-o-o DRIVING RESULTS  -o-o-o-o\n";
      cout << " _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n";
      cout << "     Theory Marks : "<<Theory_Marks;
      cout << "\n   Practical Marks : "<<Practical_Marks;
      cout << "\n   Average Score : "<<average;

  if(average < 50){
    Score = "Failed";
  }
  else{
    Score = "Passed";

  }

   cout << "\n ===============================\n";


    cout << "     Credit status : "<<Score;

     cout << "\n ===============================\n";

     cout << "\n\v Designed by Kasmall DevOps\n";
    cout << " _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n";
     }
