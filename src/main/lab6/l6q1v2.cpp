#include <iostream>
#include <sstream>
#include <string>

void L6Q1V2()
{
    constexpr char input_string[] = "this is so suspicious you know";
    char words[100];

    std::cout << "WordList:\n";

    std::stringstream everySingleWord(input_string);
    while(everySingleWord >> words)
    {

        if(words[0] == words[strlen(words) - 1] && strlen(words) > 1)
        {
            std::cout << "ETW: " << words << "\n";
        }
    }
}