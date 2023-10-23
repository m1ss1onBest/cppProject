#include <iostream>
using namespace std;

[[noreturn]] void L4DZ1()
{
   float productPrice, totalCost = 0;
   cout << "Calculating the value of products. enter the their price:\n";

   while(true)
   {
      cout << "\nprice: "; cin >> productPrice;
      
      if(cin.fail())
      {
         //сбрасывает ошибку
         cin.clear();
         //очищение буфера ввода
         cin.ignore(numeric_limits<streamsize>::max(), '\n');
         cout << "Input error. Please try again\n";
         continue;
      }
      //region loop
      totalCost += productPrice;
      cout << "total: " << totalCost;
   }
}