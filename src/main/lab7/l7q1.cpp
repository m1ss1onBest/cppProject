#include <iostream>
#include "l7.h"

const double calcError = 0.01;
const double pi = 3.14;

bool divisionBy0 = false;
double calcX(const double z)
{
    //[0.99; 1.01]
    if(z <= 1 + calcError && z >= 1 - calcError)
    {
        std::cout << "division by 0 ";
        divisionBy0 = true;
        return 1;
    }
    else
    {
        divisionBy0 = false;
    }
    
    if(z <= 0)
    {
        return pow(z, 2) + 5;
    }
    return 1 / sqrt(z - 1);
}

double calcY(const double x)
{
    return pow(sin(pow(x, 2) - 1), 3) + log(fabs(x) + exp(x));
}

void L7Q1()
{
    while (true)
    {
        double z;
        // std::cout << "enter> ";
        std::cin >> z;

        const double x = calcX(z);
        if(divisionBy0)
        {
            std::cout << "division by 0" << std::endl;
            continue;
        }

        const double y = calcY(x);
        std::cout << 'z' << z << "\tx" << x << "\ty" << y << std::endl;
    }
}