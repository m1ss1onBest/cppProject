#include <iomanip>
#include <iostream>

#include "l8.h"

const int amount_n = 8;
znak book[amount_n];
int n;

char zod[15];

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
        std::cin >> book[i].b.day >> book[i].b.month >> book[i].b.month;
        std::cout << '\n';
    }
}

void addPrint()
{
    std::cout << "MATRIX" << std::endl;

    std::cout << std::setw(15) << "name" << std::setw(15) << "lname" << std::setw(15) << "zodiac" << std::setw(15) << "birth date" << std::endl;

    for(int i = 0; i < n; i ++)
    {
        addPrintObj(&book[i]);
    }
    std::cout << '\n';
}

void addPrintObj(const znak *book)
{
    std::cout
<< std::setw(15) << book->name.first
<< std::setw(15) << book->name.last

<< std::setw(15) << book->zodiac

<< std::setw(15) << book->b.day
<< std::setw(15) << book->b.month << std::endl;
}

void findByZodiac()
{
    std::cout << "enter zodiac: ";
    std::cin.ignore();
    std::cin.get(zod, 15);

    for(int i = 0; i < n; i++)
    {
        if(strcmp(zod, book[i].zodiac) == 0)
        {
            addPrintObj(&book[i]);
        }
    }
}

void l8add()
{
    addInput();
    addPrint();

    findByZodiac();
}
