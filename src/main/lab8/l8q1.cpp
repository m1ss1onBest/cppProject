//l8q1.cpp
#include "l8.h"

#include <iomanip>
#include <iostream>

int amount = 1;
const int n = 10;

void inputProperties(machine *eom)
{
  std::cout << "enter the amount of processors: ";
  std::cin >> amount;

  for(int i = 0; i < amount; i++)
  {
    std::cout << i + 1 << "-th processor" << std::endl;
    
    std::cout << "name: ";
    std::cin >> eom[i].name;
    std::cin.get();

    std::cout << "type: ";
    std::cin >> eom[i].type;
    std::cin.get();

    std::cout << "ram: ";
    std::cin >> eom[i].ram;

    std::cout << "hdd: ";
    std::cin >> eom[i].hdd;

    std::cout << "frequency: ";
    std::cin >> eom[i].frequency;

    std::cout << "price: ";
    std::cin >> eom[i].price;

    std::cout << "year: ";
    std::cin >> eom[i].year;

    std::cout << "\n";
  }
}

void generateMatrix(const machine *eom)
{
  std::cout << "EOM" << std::endl;
  
  std::cout
  << std::setw(n) << "name"
  << std::setw(n) << "type"
  << std::setw(n) << "ram "
  << std::setw(n) << "sdd"
  << std::setw(n) << "freq"
  << std::setw(n) << "price"
  << std::setw(n) << "year" << std::endl;

  for(int i = 0; i < amount; i++)
  {
    std::cout
    << std::setw(n) << eom[i].name
    << std::setw(n) << eom[i].type
    << std::setw(n) << eom[i].ram
    << std::setw(n) << eom[i].hdd
    << std::setw(n) << eom[i].frequency
    << std::setw(n) << eom[i].price
    << std::setw(n) << eom[i].year << std::endl;
  }
}

void L8Q1()
{
  machine eom[n];
  inputProperties(eom);
  generateMatrix(eom);
}