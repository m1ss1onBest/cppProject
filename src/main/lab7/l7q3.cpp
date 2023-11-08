#include <iostream>
constexpr double pi = 3.14;
constexpr double epsilon = 0.01;

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
double mySin(const double x, const double t)
{
    double a = 1, sum = 0;
    int maxI = 10;

    int i = 0;
    while (abs(a) > t && i < maxI)
    {
        a = pow(-1, i) * ((pow(x, (2 * i + 1))) / (factorial(2 * i + 1)));
        sum += a;
        i++;
    }
    return sum;
}


//region main
void L7Q3()
{
    double n, t;
    
    std::cout << "factorial of: ";
    std::cin >> n;
    std::cout << factorial(n) << std::endl;

    std::cout << "root of: ";
    std::cin >> n;
    std::cout << myRoot(n) << std::endl;

    std::cout << "abs of: ";
    std::cin >> n;
    std::cout << myAbs(n) << std::endl;

    std::cout << "power of: ";
    std::cin >> n >> t;
    std::cout << myPow(n, t) << std::endl;

    std::cout << "sin of : ";
    std::cin >> n >> t;
    std::cout << mySin(n, t) << std::endl;
}