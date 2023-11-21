#include <iomanip>
#include <iostream>

#include "l8.h"

const int n = 8;
znak book[n];

void addInput()
{
    for(int i = 0; i < n; i++)
    {
        std::cout << "enter name: ";
        std::cin >> book[i].name[0];

        std::cout << "enter lastname: ";
        std::cin >> book[i].name[1];

        std::cout << "enter zodiac" ;
        std::cin >> book[i].zodiac;

        std::cout << "enter birth date";
        std::cin >> book[i].bday[0] >> book[i].bday[1] >> book[i].bday[2];
    }
}

void addPrint()
{
    std::cout << "MATRIX" << std::endl;

    std::cout << std::setw(15) << "name" << std::setw(15) << "lname" << std::setw(15) << "zodiac" << std::setw(15) << "birth date" << std::endl;

    for(int i = 0; i < n; i ++)
    {
        std::cout
        << std::setw(15) << book[i].name[0]
        << std::setw(15) << book[i].name[1]

        << std::setw(15) << book[i].zodiac

        << std::setw(15) << book[i].bday[0]
        << std::setw(15) << book[i].bday[1] << std::endl;
    }
}

void l8add()
{
    addInput();
    addPrint();
}