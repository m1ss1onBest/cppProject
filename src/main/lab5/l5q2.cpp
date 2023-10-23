//l5q2.cpp
#include <iostream>
#include <iomanip>

using namespace std;

void L5Q2()
{
    
    srand(static_cast<unsigned int>(time(nullptr)));

    int
    array[4][5], arrayMin = 10,
    sumEven = 0,
    countOdd = 0;
    
    float
    averEven, countEven = 0;
    
    //main array[-10;10]
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            array[i][j] = rand() % 21 - 10;
            cout << fixed << setw(4) << array[i][j];
            
           //negative in odd columns
           if(j % 2 == 0 && array[i][j] < 0)
           {
               countOdd++;
           }
            //average in even columns
           if(j % 2 != 0)
           {
               sumEven += array[i][j];
               countEven++;
           } 
        }
        cout << "\n";
    }

    //arrayMin
    for(int i = 0; i < 4; i++)
    {
        array[i][0] += arrayMin;
    }
    cout << "array min: " << arrayMin << "\n";
    
    //output fixed array
    cout << "a(i1) + array min]:\n";
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << fixed << setw(4) << array[i][j];
        }
        cout << "\n";
    }
    //calc
    averEven = sumEven/countEven;
    cout <<
        "count odd negative: " << countOdd << "\n" <<
            
        "sumEven: " << sumEven << "\n" <<
        "countEven: " << countEven << "\n" <<
        "averEven: " << averEven << "\n";
}