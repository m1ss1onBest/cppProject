#include <iostream>
using namespace std;

void L1Q1()
{
    //region equation a
    float z1, a, b;

    cout << "Solving an equation like:\n\t"
    "     sin(a) + cos(2b-a)\n\t"
    "z1 = ------------------\n\t"
    "     cos(a) - sin(2b-a)\n"

    //region solving
    "Enter the a, b:\n\t";
    cin >> a >> b;
    z1 = (sin(a) + cos(2 * b - a)) / (cos(a) - sin(2 * b - a));

    //checking if the denominator is equal to 0
    if (cos(a) - sin(2 * b - a) != 0) {
        cout << "\tz1 = " << z1;
    }
    else { cout << "The denominator is 0, cannot be divided by 0."; }

    //region equation b
    z1 = a = b = NULL;
    cout << "\n\nSolving another equation like\n\t"
    "      /  a + 2           a              2      \\     sqrt(a) - sqrt(2)  \n\t"
    "z1 =  |  -------- - ------------ - ------------|  *  -----------------  \n\t"
    "      \\ sqrt(2a)   sqrt(2a) + 2   a - sqrt(2a) /         a + 2         \n\t";

    //region solving
    "Enter the a, b:\n\t";
    cin >> a >> b;
    z1 = ( (a + 2) / sqrt(2 * a)- (a/(sqrt(2 * a) + 2)) - (2/(a - sqrt(2 * a))) ) * ( (sqrt(a) - sqrt(2) / (a + 2)) ) ;

    //checking if the denominator is equal to 0
    if (sqrt(2 * a) != 0 && sqrt(2 * a) + a != 0 && a - sqrt(a * 2) != 0 && a + 2 != 0) {
        cout << "\tz1 = " << z1;
    }
    else
    { cout << "The denominator is 0, cannot be divided by 0."; }
}