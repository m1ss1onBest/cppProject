//l6q1.cpp
#include <iostream>
#include <sstream>
#include <string>

void L6Q1()
{
    //making a string
    const std::string input_string = "this is so suspicious you know";
    std::string words;
    
    std::cout << "WordList:\n";

    //analysing every single word as a word from input_string
    std::stringstream everySingleWord(input_string);
    
    //writing every word from words to word as a variable
    while(everySingleWord >> words)
    {
        if(words[0] == words[words.size() -1] && 1 < words.size())
        {
            //exactly that word
            std::cout << "ETW: " << words << "\n";
        }
    }
}