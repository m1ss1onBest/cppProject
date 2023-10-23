#include <iostream>
using namespace std;
//вывести буквы алфавита в строку через 2 пробела, большие в обратном порядке по 3 в рядок
void L4DZ2()
{
   short r; char c = 'a';
   while(c <= 'z')
   {
      cout << c << "  ";
      c++;
   }
   
   cout << "\n";
   c = 'z';
   
   while(c >= 'a') {
      for(r = 0; r < 3 && c >= 'a'; r ++, c--)
      {
         cout << char(toupper(c)) << " ";
      }
       cout << "\n";
      }
   cout << "finished";
}