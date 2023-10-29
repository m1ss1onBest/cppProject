//l5q4.cpp
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

void L5Q4()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    double A[4][5], result[] {0, 0, 0, 0, 0};

    //region add array
    std::cout << std::setw(15) << "array:\n";
    for(auto& i : A)
    {
        for(double& j : i)
        {
            j = rand()% 21 - 10;
            std::cout << std::fixed << std::setprecision(2) << std::setw(6) << j;
        }
        std::cout << "\n";
    }

    //region calculating columns average
    std::cout << std::setw(15) << "average:\n";
    for(int j {0}; j < 5; j++)
    {
        for(int i {0}; i < 4; i++)
        {
            result[j] += A[i][j];
        }
        result[j] /= 4;
        std::cout << std::fixed << std::setprecision(2) << std::setw(6) << result[j];
    }
}