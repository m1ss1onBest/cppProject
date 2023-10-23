#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void Strings()
{
    //a string but made as a char array
    //we can use it as string
    char charWord[40] {'a','b','c','d', '\0'};

    //a string but not cursed
    string stringWord {"THIS IS A STRING"};

    
    cout << charWord << "\n";

    //YOU DON'T FUCKING NEED TO MAKE A FUCKING while(str[i])
    for(char c: stringWord)
    {
        cout << c;
    }
    
    //YOU DON'T FUCKING NEED TO USE FUNCTIONS
    cout << "\n" << size(stringWord);

    //write all the string functions
    
    //who the fuck are you and why the fuck should i need to use you?
    //cin.getline(charWord, 4);
}