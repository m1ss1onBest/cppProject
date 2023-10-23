#include <iostream>
using namespace std;

void L2Q2()
{
    float n, x, ans22;
    cout << "Solving an equation like:\n\t"
    "logn(x) if n!=0, x>=0\n\t"
    "|pow (x, n+2)| else\n";
    cout << "Enter the n and the x: "; cin >> n >> x;
    if (n != 0 && x >= 0)
    {
        cout << "executing: logn(x) if n!=0, x>=0\n";
        ans22 = log(x) / log(n);
        cout << "Answer =  " << ans22;
    }
    else
    {
        cout << "executing: |pow (x, n+2)| else\n";
        ans22 = abs(pow(x, n + 2)); cout << "Answer = " << ans22;
    }
}