//l7q3
#include <iostream>
#include <cmath>

void prtOurEquation(float z, float x, float y, short num = 1)
{
    std::cout << num << ": z: " << z << ", x: " << x << ", y: " << y << std::endl;
}

float calcX(const float z)
{
    float x;
    if(z <= 0) x = static_cast<float>(pow(z, 2) + 5);
    else x = 1 / sqrt(z - 1);
    return x;
}

float equationResult(const float x)
{
    const auto result = static_cast<float>(pow(sin(pow(x, 2) - 1), 3) + log(fabs(x)) + exp(x));
    return result;
}

void L7Q1()
{
    constexpr float
    z1 = 10, z2 = 0, z3 = -5;
    const float
    x1 = calcX(z1),
    x2 = calcX(z2),
    x3 = calcX(z3),

    y1 = equationResult(x1),
    y2 = equationResult(x2),
    y3 = equationResult(x3);

    prtOurEquation(z1, x1, y1);
    prtOurEquation(z2, x2, y2, 2);
    prtOurEquation(z3, x3, y3, 3);
}