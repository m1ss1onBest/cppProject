//l6q3.cpp

#include <iostream>
#include <sstream>
#include <string>

void L6Q3()
{
    std::cout << "which letter in physics is used to name:\n";
    const std::string question[10]
    {
        "weight: ",
        "capacity of the capacitor: ",
        "resistance: ",
        "voltage: ",
        "frequency: ",
        "velocity: ",
        "acceleration: ",
        "time: ",
        "temperature: ",
        "current strength(electricity): "
    };
    float correctness {0};
    const std::string correct_answer[10]
    {
        "kg", "uF", "Om", "V", "Hz", "m/s", "m/s2", "sec", "C", "A"
    };
    
    for(int i = 0; i < 10; i++)
    {
        std::string your_answer[10];
        std::cout << question[i];
        std::getline(std::cin, your_answer[i]);

        if(your_answer[i] == correct_answer[i])
        {
            std::cout << "you're right\n";
            correctness++;
        }
    }
    const float mark = correctness / 10 * 100;
    std::cout << "\nrightness: " << mark << "%";
}