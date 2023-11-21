//l8.h
#pragma once
#include <string>


//region q1
struct machine
{
    std::string name {"no-name-found"};
    std::string type {"no-type"};
    int ram;
    int hdd;
    double frequency;
    int price;
    int year;
};

void inputProperties(machine *eom);
void printDatabase(const machine *eom);
void finding(machine *eom);
void printObject(const machine* eomOutput, const std::string& message);

void L8Q1();

//region q2
struct birth
{
    short day;
    short month;
    mutable short year;
};

struct student
{
    std::string lName;
    std::string initials;
    std::string bPlace;
    birth b;
};

void enterStudents(student *studList);
void studMatrix(const student *studList);
void printByYear(const student *studList);
void printStudent (const student *studList);
void printByMonth(const student *studList, const int &targetMonth);

void L8Q2();

//region additional
struct znak
{
    char name[2][30];
    char zodiac[15];
    int bday[3];
};

void l8add();
