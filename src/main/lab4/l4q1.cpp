#include <iomanip>
#include <iostream>

using namespace std;
//var 27 = 11/16

void L4Q1()
{
   double
   //range
   x0, x1, sx,
   //consts
   a, b, c,
   //results
   F,
   //epsilon
   eps = 0.1;

   cout << "enter the xStart, xEnd, a, b, c, Step:\n";
   cin >> x0 >> x1 >> a >> b >> c >> sx;

   //x demonstrative to not change the main x
   double xDem = x0;

   //print x values
   cout << fixed << setw(6) << "x: ";
   for(x0; x0 <= x1; x0 += sx)
   {
      cout << setprecision(2) << fixed << setw(7) << x0;
   }
   cout << "\n";

   //print f(x) values
   cout << fixed << setw(6) << "f(x): ";
   for(xDem;xDem <= x1; xDem+=sx)
   {
      //safe way to equate float nums to zero using an accuracy
      if(xDem < 0 && fabs(a) > DBL_EPSILON) // > 0
      {
         F = a * pow(xDem, 3) - b;
      }

      //safe way to equate float nums to zero using an accuracy
      else if(xDem >= 0 && fabs(a) < DBL_EPSILON) // < 0
      {
         F = (xDem-a)/(xDem-c);
      }

      else
      {
         F = (c/xDem)-(xDem/c);
      }

      cout << setprecision(2) << fixed << setw(7) << F;
   }
   cout << "\n\"inf\" MEANS DIVIDING BY 0";
}