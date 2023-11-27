//l8q2.cpp
#include "l8.h"

#include <iomanip>
#include <iostream>
#include <string>

int stamount = 1;
const int n = 15;

student list[30], sortedList[30];

//region students input
void enterStudents(student *studList)
{

    for(int i = 0; i < stamount; i++)
    {
        std::cout << "enter " << i+1 << "'th student data\n";
        std::cout << "lastname: "; std::cin >> studList[i].lName;
        std::cout << "initials: "; std::cin >> studList[i].initials;

        std::cout << "birth place: "; std::cin >> studList[i].bPlace;
        std::cout << "birth date(day, month, year): ";
        std::cin >> studList[i].b.day >> studList[i].b.month >> studList[i].b.year;

        std::cout << '\n';
    }
}

//region print students list
void studMatrix(const student *studList)
{
    std::cout
    << std::setw(n) << "lastname"
    << std::setw(n) << "initials"
    << std::setw(n + 5) << "birth place"
    << std::setw(n) << "date" << std::endl;

    for(int i = 0; i < stamount; i ++)
    {
        printStudent(&studList[i]);
    }
}

//region print sorted by years
void printByYear(const student *studList) { //actually it's sorting
    for (int i = 0; i < stamount; ++i) {
        sortedList[i] = studList[i];
    }

    for (int i = 0; i < stamount - 1; ++i)
    {
        for (int j = 0; j < stamount - i - 1; ++j) {
            if (sortedList[j].b.year > sortedList[j + 1].b.year) {

                const student temp = sortedList[j];
                sortedList[j] = sortedList[j + 1];
                sortedList[j + 1] = temp;
            }
        }
    }
    studMatrix(sortedList);
}

//region print an object from students
void printStudent (const student *studList)
{
    std::cout
<< std::setw(n) << studList->lName
<< std::setw(n) << studList->initials
<< std::setw(n + 5) << studList->bPlace
<< std::setw(n) << studList->b.day << ' ' << studList->b.month << ' ' << studList->b.year << std::endl;
}

//region print by month
void printByMonth(const student *studList, const int &targetMonth)
{
    std::cout << "student's that were born " << targetMonth << "'th month\n";
    for(int i = 0; i < stamount; i++)
    {
        if( studList[i].b.month == targetMonth)
        {
            std::cout << studList[i].lName << ' ' << studList[i].initials << std::endl; 
        }
    }
}
short choice;

//region l8q2main
void L8Q2()
{
    std::cout << "enter students amount: ";
    std::cin >> stamount;

    do
    {
        std::cout
        << "1. input students info\n"
        << "2. output all students\n"
        << "3. print students by m\n"
        << "4. print students by y\n"
        << "0. end program\n"

        << "command> ";
        std::cin >> choice;
        std::cout << '\n';

        switch (choice)
        {
        case 1:
            enterStudents(list);
            break;
        case 2:
            studMatrix(list);
            break;
        case 3:
            int targMonth;
            std::cout << "finding by month.\nenter_month> ";
            std::cin >> targMonth;
            printByMonth(list, targMonth);
            break;
        case 4:
            printByYear(list);
            break;

        default:
            std::cout << "testing_command\n";
            break;
        }
    }    while(choice != 0);
    
    std::cout << "end of program";
}
