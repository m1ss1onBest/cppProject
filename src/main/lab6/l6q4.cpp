#include <fstream>
#include <iostream>
#include <string>

void L6Q4()
{
    
    char command;
    constexpr int key = 3;
    
    std::string input_string;
    std::string encrypted_string;
    std::string decrypted_string;
    
    std::cout << "text> ";
    std::getline(std::cin, input_string);

    std::cout << "command> ";
    std::cin >> command;

    for(const char i : input_string)
        {
            encrypted_string += i + key;
        }
    
    for(const char i : input_string)
        {
            decrypted_string += i - key;
        }
    
    //output.txt
    std::ofstream file(R"(D:\TRUE MWP\c++\cppProject\src\main\lab6\output.txt)");
    switch (command)
    {
    case 'e':
        file << "encrypted> " << encrypted_string << "\n";
        std::cout << "encrypted> " << encrypted_string; break;
    
    case 'd':
        file << "decrypted> " << decrypted_string << "\n";
        std::cout << "decrypted> " << decrypted_string; break;
        
    default: std::cout << "error"; break;
    }
    
}