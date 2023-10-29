//l6q1.cpp
#include <iostream>
#include <sstream>
#include <string>

void L6Q1()
{
    const std::string input_string = "this is so suspicious gghg tot you know ggg a aa";
    std::string words;
    
    std::cout << "WordList:\n";
    
    std::stringstream everySingleWord(input_string);
    while(everySingleWord >> words)
    {
        if(words[0] == words[words.size() -1] && 1 < words.size())
        {
            //exactly that word
            std::cout << "ETW: " << words << "\n";
        }
    }   
}