//l8.h
#pragma once
#include <string>

struct machine
{
    std::string name {"no-name-found"};
    std::string type;
    int ram;
    int hdd;
    double frequency;
    int price;
    int year;
};

struct znak
{
    char name[2][30];
    char zodiac[15];
    int bday[3];
};

void inputProperties(machine *eom);
void generateMatrix(const machine *eom);
void finding(machine *eom);

void L8Q1();
void l8add();
void L8Q2();