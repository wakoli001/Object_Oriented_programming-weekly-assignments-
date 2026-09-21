/* NAME :  WANGILA IAN WAKOLI
   rEG No. : CT101/G/26668/24
   COURSE  : COMPUTER SCIENCE
   YEAR    : 2.1

   A PROGRAM IN C++ TO CREATE A SALES RECEIPT IN AN ELECTRONIC SALES SHOP
   THE PROGRAM PROMPTS THE USER TO INPUT  CUSTOMER'S NAME,PHONE'S MODEL,
   PRICE OF THE PHONE AND QUANTITY
   IT THEN CALCULATES THE AVERAGE
    DISPLAY ALL THE CREDENTIALS INPUT ON A WELL FORMATED AND AUTOMATED RECEEIPT
    */
    #include <iostream>
    using namespace std;
    int main(){
        int Quantity;
        string Model, Customer_Name;
        float Price, Total_Sales;

        cout << "===  BIDII TRADERS RECEIPT SYSTEM   ===\n";

        cout << "Enter customeer's name : "<<endl;
        cin >> Customer_Name;

        cout << "Enter Phone Model Purchased :  "<<endl;
        cin >> Model;

        cout << "Enter The Cost of the purchased phone : "<<endl;
        cin >> Price;

        cout << "Enter The Quantity purchased : "<<endl;
        cin >> Quantity;

        Total_Sales = Quantity * Price;

        cout << "\n = = BIDII TRADERS ELECTRONICS = =\n";

        cout << "= = = = = = = = = = = = = = = = = = = = =\n";

        cout << " Customer Name : "<<Customer_Name;

        cout << "\n Phone Model : "<<Model;

        cout  << "\n Unit Price : "<<Price;

        cout << "\n Quantity Purchased : "<<Quantity;

        cout << "\n _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n";

        cout << "\n\t Total Sales : "<<Total_Sales;

        cout << "\n \v Designed by Small developers \n";

    }
