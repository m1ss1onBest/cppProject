//l7q3
#include <iostream>
constexpr float epsilon = 0.01;

//1
long long factorial(const long long  n)
{
    if(n > 0) return n * factorial(n -1);
    return 1;
}

//2
float myRoot(const float n)
{
    float x = n, y = 1;
    if (n == 0) return 0;

    while (abs(x - y) > epsilon)
    {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

//3
float myAbs(float n)
{
    if(n < 0) n *= -1;
    return n;
}

//4
float diapSum(const float a, const float b)
{
    float res = 0;
    for (float i = a; i <= b; i++) {
        res += i;
    }
    return res;
}


//5
float sum(const float a, const float b)
{
    return a + b;
}

//6
float doo(float (*operation)(float, float), const float a, const float b)
{
    return operation(a, b);
}

//region main
void L7Q3()
{
    std::cout << "factorial " << factorial(6) << std::endl;
    std::cout << "math.h root " << sqrt(10) << std::endl;
    std::cout << "my root " << myRoot(10) << std::endl;

    std::cout << "math.h abs " << abs(-46) << std::endl;
    std::cout << "my abs " << myAbs(-46) << std::endl;

    std::cout << "sum [4, 8] " << doo(diapSum, 4, 8) << std::endl;
    
}