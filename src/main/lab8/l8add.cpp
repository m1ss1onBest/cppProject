#include <algorithm>
#include <iomanip>
#include <iostream>

#include "l8.h"

//declaration
const int amount_n = 8;
znak book[amount_n];
int n;

bool isAvaible = false;

int month;
//region enter
void addInput()
{
    std::cout << "amount: ";
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cout << i+1 << "-th student\n";
        
        std::cout << "enter name: ";
        std::cin >> book[i].name.first;

        std::cout << "enter lastname: ";
        std::cin >> book[i].name.last;

        std::cout << "enter zodiac: " ;
        std::cin >> book[i].zodiac;

        std::cout << "enter birth date: ";
        std::cin >> book[i].b.day >> book[i].b.month >> book[i].b.year;
        std::cout << '\n';
    }
}

//region print all
void addPrint()
{
    std::cout << "MATRIX" << std::endl;
    
    std::cout
    << std::setw(15) << "name"
    << std::setw(15) << "lname"
    << std::setw(15) << "zodiac"
    << std::setw(15) << "birth date" << std::endl;

    for(int i = 0; i < n; i ++)
    {
        addPrintObj(&book[i]);
    }
    std::cout << '\n';
}

//region print object
void addPrintObj(const znak *book)
{
    std::cout
    << std::setw(15) << book->name.first
    << std::setw(15) << book->name.last

    << std::setw(15) << book->zodiac

    << std::setw(6) << book->b.day
    << std::setw(6) << book->b.month
    << std::setw(6) << book->b.year
    << std::endl;
}

void findByZodiac()
{
    std::cout << "enter month: ";
    std::cin >> month;

    for(int i = 0; i < n; i++)
    {
        if(month == book[i].b.month)
        {
            isAvaible = true;
            addPrintObj(&book[i]);
        }
    }
    if (isAvaible)
    {
        std::cout << "no students found`";
    }
}

//region sorting
bool compareByZodiac(const znak &a, const znak &b) {
    return strcmp(a.zodiac, b.zodiac) < 0;
}

//region main
void l8add()
{
    addInput();

    std::sort(book, book + n, compareByZodiac);

    addPrint();
    findByZodiac();
}
