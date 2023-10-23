#include <fstream>
#include <iostream>
#include <string>

void L6Q4()
{
    std::string input_string;
    std::getline(std::cin, input_string);
    std::string encrypted_string;
    std::string decrypted_string;
    
    //encoder
    for(const char i : input_string)
    {
        encrypted_string += i + 1;
    }
        //test commentk
        //decoder
    for(const char i : encrypted_string)
    {
        decrypted_string += i - 1;
    }

    //output.txt
    std::ofstream file(R"(D:\TRUE MWP\c++\cStuff\cStuff\src\cpp\main\lab6\output.txt)");
    file << "encrypted: " << encrypted_string << "\n";
    file << "decrypted: " << decrypted_string;
    file.close();

    //test output
    std::cout
    << encrypted_string << "\n"
    << decrypted_string;
}