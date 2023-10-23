//l5q5
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

void L5Q5()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    int arr[4][5],
    countPositive {0}, countNegative {0};
    char command {};
    bool isPositive = false;

    for(auto& i : arr)
    {
        for(int& j : i)
        {
            j = rand() % 21 - 10;
            if(j > 0) countPositive++;
            if(j < 0) countNegative++;
            std::cout << std::fixed << std::setw(4) << j << " ";
        }
        std::cout << "\n";
    }

    //region check
    std::cout
    << "p - make an array from positive elements\n"
    << "n - make an array from negative elements\n"
    << "command> ";
    std::cin >> command;

    int size = 0;
    
    if(command == 'p') {
        size = countPositive;
        isPositive = true;
        }
    
    else if(command == 'n')
    {
        isPositive = false;
        size = countNegative;
    }
    
    else std::cout << "input error";

    //region reversed array
    const auto output_array = new int[size];
    int index = size - 1;

    for(auto& i : arr)
    {
        for(const int& j : i)
        {
            if( (isPositive) ? j > 0 : j < 0)
            {
                output_array[index] = j;
                index--;
            }
        }
    }

    //region output
    for(int i = 0; i < size; i++)
    {
        std::cout << output_array[i] << " ";
    }
}
