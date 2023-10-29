//l6q2.cpp

#include <iostream>

void L6Q2()
{
    bool isAviable = false;
    char inputLine[100];
    short total_a {0}, lastname_a {0};
    std::cout << "FIO> ";

    std::cin.getline(inputLine, 100);

    for(int i {0}; inputLine[i]; i++)
    {
        if(tolower(inputLine[i]) == 'a') total_a++;
    }
    
    for(int i {0}; inputLine[i]; i++)
    {
        if(inputLine[i] != ' ')
        {
            isAviable = true;
        }
        if(tolower(inputLine[i]) == 'a')
        {
            lastname_a++;
        }
        if(isAviable) if(inputLine[i] == ' ') break;
    }

    for(int i = 0; i < strlen(inputLine); i++)
    {
        std::cout << inputLine[i];
        if(inputLine[i] == 'i' || inputLine[i] == 'I') std::cout << inputLine[i];
    }
    std::cout
    <<"\ntotal amount of \"a\": " << total_a
    <<"\namount of \"a\" in the lastname: " << lastname_a;
}
