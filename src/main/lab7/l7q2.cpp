//l7Q2
#include <cmath>
#include <iostream>
#include <string>

// double tablesAmount(float, float);
// double amountOfRolls(int, int, int);

double tablesAmount(float peoplePerTable, float peopleAmount)
{
    return ceil(peopleAmount / peoplePerTable);
}
double amountOfRolls(int tablesAmount, int rollLength, int stripePerTabe)
{
    const float totalStripeRequired = tablesAmount * stripePerTabe;
    return ceil(totalStripeRequired/rollLength);
}


void prt(const std::string& message, double result)
{
    std::cout << message << ' ' << result << std::endl;
}

void L7Q2()
{
    constexpr int peopleCount = 8;
    constexpr int totalAmount = 150;

    constexpr double rollLength = 30;
    constexpr double extraRoll = 65;
    
    constexpr double diameter = 1.7;

    const int minTablesRequired = tablesAmount(peopleCount, totalAmount);
    prt("tables required", minTablesRequired);
    
    const int totalRollsRequired = amountOfRolls(minTablesRequired, rollLength, extraRoll);
    prt("rolls required", totalRollsRequired);
}
