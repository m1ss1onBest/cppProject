#include <iostream>
const double pi = 3.14;
const double epsilon = 0.01;

//1
long factorial(int n)
{
    if (n > 0) return n * factorial(n-1);
    return 1;
}

//2
double myRoot(const double n)
{
    constexpr double epsilon = 0.00001;

    double x = n, y = 1;
    if (n <= epsilon) return 0;

    while (abs(x - y) > epsilon)
    {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

//3
double myAbs(const double n)
{
    if(n < 0) return n * -1;
    return n;
}

//4
double myPow(const double x, const double n)
{
    double multiplication = 1;

    int i = 0;
    while(i < n)
    {
        multiplication *= x;
        i++;
    }
    return multiplication;
}

//5
double mySin(const double x, const double t = 0.01)
{
    double res = 0;
    double calc = x;
    int n = 1;

    while (fabs(calc) > t)
    {
        n+=1;
        calc = pow(-1, n) * pow(x, 2*n+1) / factorial(2*n+1);
        res += calc;
    }   
    return res;
}

//region main
void L7Q3()
{
    double n = 30, t;
    n = n * 3.14 / 180;

    double res = mySin(n);
    std::cout << n;
}