#include <iomanip>
#include <iostream>
using namespace std;
//var 27 = 11/16


void L4Q2()
{
   long double 
   //
   sigma = 0, piMath = 1, sigIV, piIV, //IV - iterration value
   //
   i, k = 2, factI,
   //
   x;
   int n;
   
   cout << "enter x, and n(iteration max): ";
   cin >> x >> n;
   //region loop
   for(i = 1; (n>0)?i<=n:i>=n; (n>0)?i++:i--)
   {
      if(i == 0)
      {
         continue;
      }
      sigIV = (x + cos(i * x)/pow(2, i));
      sigma += sigIV;
   }
   //для фактортиала не надо ни функций ни чего другого, если мы работаем внутри цикла надо всего умножить наше число на номер итерации и для каждого раза 
   factI = 1;
   while(k <= 12)
   {
      factI *= k;
      piMath *= (factI)/(k + 2);
      k++;
   }
   cout << "\nSigma: " << sigma;
   cout << "\nPi: " << piMath;
}