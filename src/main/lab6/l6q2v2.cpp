//l6q2.cpp
#include <iostream>
#include <string>

void L6Q2V2()
{
    std::string inputLine;
    short total_a = 0, lastname_a = 0;
    std::cout << "FIO> ";

    std::getline(std::cin, inputLine);

    for(const char c : inputLine)
    {
        if(tolower(c) == 'a') total_a++;
    }
    
    for (const char c : inputLine)
    {
        if(tolower(c) == 'a') lastname_a++;
        if(c == ' ') break;
    }

    std::cout
    
    << "\ntotal amount of \"a\": " << total_a
    << "\namount of \"a\" in the lastname: " << lastname_a;
}
