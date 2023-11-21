//l8q1.cpp
#include "l8.h"

#include <iomanip>
#include <iostream>

//declaration
int amount = 1;
const int n = 10;
machine maxPrice;

//region imput properties
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

//region print database
void printDatabase(const machine *eom)
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
    printObject(&eom[i], "");
  }
}

//region max by price
void findMaxByPrice(const machine* eom)
{
  maxPrice = eom[0];
  for(int i = 1; i < amount; i++)
  {
    if(eom[i].price >  maxPrice.price)
    {
      maxPrice = eom[i];
    }
  }

  printObject(&maxPrice, "with the max price");
}

//region print object
void printObject(const machine* eomOutput, const std::string& message = "max price: \n")
{
  std::cout << '\n' << message << '\n'
  << std::setw(n) << eomOutput->name
  << std::setw(n) << eomOutput->type
  << std::setw(n) << eomOutput->ram
  << std::setw(n) << eomOutput->hdd
  << std::setw(n) << eomOutput->frequency
  << std::setw(n) << eomOutput->price
  << std::setw(n) << eomOutput->year << std::endl;
}

//region l8q1main
void L8Q1()
{
  machine eom[n];
  inputProperties(eom);
  printDatabase(eom);
  findMaxByPrice(eom);
}