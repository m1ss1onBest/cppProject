#include <iostream>
void L6Q3V2()
{
    std::cout << "which letter in physics is used to name:\n";
    constexpr char question[10][30] =
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
        "current strength: "
    };
    float correctness = 0;
    constexpr char correct_answer[10][5] =
    {
        "kg", "uF", "Om", "V", "Hz", "m/s", "m/s2", "sec", "C", "A"
    };

    for (int i = 0; i < 10; i++)
    {
        char your_answer[10][10];
        std::cout << question[i];
        std::cin.getline(your_answer[i], 10);

        if (strcmp(your_answer[i], correct_answer[i]) == 0)
        {
            std::cout << "you're right\n";
            correctness++;
        }
    }
    const float mark = correctness / 10 * 100;
    std::cout << "\nrightness: " << mark << "%";
}