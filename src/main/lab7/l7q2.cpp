#include <cmath>
#include <iostream>

constexpr double pi = 3.14;

int tablesAmount(double peopleAmount, double peoplePerTable)
{
    return ceil(peopleAmount / peoplePerTable);
}

int rollsRequired(double tableDiameter, double rowLength, int rollLength, int tablesAmount)
{
    const double stripeRequired = 2 * (tableDiameter/2 * pi) * tablesAmount;
    return ceil(stripeRequired / tablesAmount);
}

void L7Q2()
{
    double
    peopleAmount, peoplePerTable,
    tableDiameter, rowLength, rollLength;
    
    std::cout << "how many people: ";
    std::cin >> peopleAmount;

    std::cout << "people per table: ";
    std::cin >> peoplePerTable;

    std::cout << "table diameter: ";
    std::cin >> tableDiameter;

    std::cout << "row length: ";
    std::cin >> rowLength;

    std::cout << "roll length: ";
    std::cin >> rollLength;

    const double minTables = tablesAmount(peopleAmount, peoplePerTable);
    const double rollsNeeded = rollsRequired(tableDiameter, rowLength, rollLength, minTables);

    std::cout << "tables required: " << minTables << std::endl;
    std::cout << "stripe rolls needed: " << rollsNeeded << std::endl;
}