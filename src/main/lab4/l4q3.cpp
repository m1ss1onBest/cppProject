#include <iomanip>
#include <iostream>
using namespace std;
//var 27 = 11/16

void L4Q3()
{
    float
    a = 0.75, b = 1.19, c = -2.5,
    x= 0, x1 = 2, hx = 0.1,
    F;
    
    cout <<
        "ax + bcosx + c, if x <= 5\n"
        "bx2 + csin2x, for all other cases\n"
        "a: " << a << "; b: " << b << "; c: " << c << "x[0; 2], step : " << hx <<
        "\n\n\n";
    double dob = 1;
    for (; x <= x1; x += hx)
    {
        if(x <= 0.5)
        {
            F = (a * x) + (b * cos(x)) + c;
        }
            
        else
        {
            F = (b * pow(x, 2) + (c * sin(2 * x)));
        }

        if(F > 0) dob *= F;
        cout << fixed << setw(7) << setprecision(2) << F;
        cout << "\n\ndobutok dodatnich: " << dob;
    }
}