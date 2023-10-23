#include <iostream>
using namespace std;

void L2Q1()
{
    cout << "solving an equatuion like:\n\t"
   "F = (1 / a * x) - b        if |x + 5| < 0 -AND- c = 0\n\t"
   "F = (x - a) / x            if x > 20 -AND- c != 0\n\t"
   "F = (10 * x) / (c - 4)     in all other cases\n";
    float a, b, c, x, F;
    cout << "enter the a, b, c and x: "; cin >> a >> b >> c >> x;

    //solving
    //первое условие никогда не будет выполненым из-за особенностей условия задачи, было принято ничего не менять.
    if( abs(x + 5) < 0 && c == 0)
    {
        cout << "\nexecuting: F = ((1 / a * x) - b) if (|x + 5| < 0 -AND- c = 0)\n";
        F = (1 / a * x) - b; cout << "F = " << F;
    }
    else if(x > 20 && c != 0)
    {
        cout << "\nexecuting: (F = (x - a) / x) if (x > 20 -AND- c != 0)\n";
        F = (x - a) / x; cout << "F = " << F;
    }
    else
    {
        cout << "\nexecuting: (10 * x) / (c - 4) in all other cases\n";
        if (c - 4 != 0)
        {
            F = (10 * x) / (c - 4); cout << "F = " << F;
        }
        else { cout << "cannot be divided by 0 (4 - 4 = 0)";}
    }
}