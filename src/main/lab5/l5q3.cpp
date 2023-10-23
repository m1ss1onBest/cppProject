//l5q3.cpp

#include <iomanip>
#include <iostream>

using namespace std;

void L5Q3()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    
    int array[10];
    int countPositive = 0;
    float sum = 0, multiplication = 1;
    int max = -100;
    int positionCounter = 0, maxOddPos = -100;
    
    for(int& i : array)
    {
        i = rand()% 21 -10;
        cout << setw(4) << i;
        if(i > 0) countPositive++;
        sum += i;
    }

    const float average = sum/10;

    for(const int i : array)
    {
        positionCounter++;
        if(i % 2 == 1 && i > max)
        {
            max = i;
            maxOddPos = positionCounter;
        }
        
        if(i < average)
        {
            multiplication *= i;
        }
    }
    
        cout
    << "\nrequired info: "
    << "\ncount positive: " << countPositive
    << "\nmultiplication: " << multiplication
    << "\nmax odd position: " << maxOddPos
    
    << "\n\noptional info: "
    << "\nsum: " << sum
    << "\naverage: " << average;
}
