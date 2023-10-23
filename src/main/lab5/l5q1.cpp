//l5q1.cpp
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
//заполнить массив 10 целыми случайными числами и вывести на экран
//найти среднее значение полож. и отриц. элементов
//все элементы меньше 5, уменьшить минимальный элемент массива

//region main
void L5Q1()
{
    int
    randNum[10],
    sumPositive = 0,
    countNegative = 0,
    zeros = 0,
    arrayMin = 10;
    float
    countPositive = 0;
    
    //generating an array with random numbers
    srand(time(0));
    for(int i = 0; i < 10; i++)
    {
        //[-5; 5]
        randNum[i] = (rand()%21) - 10;
        
        cout << randNum[i] << " ";

        //calculating
        if(randNum[i] > 0)
        {
            countPositive++;
            sumPositive += randNum[i];
        }
        if(randNum[i] == 0)
        {
            zeros++;
        }
        if(randNum[i] < 0)
        {
            countNegative++;
        }
        if(arrayMin > randNum[i])
        {
            arrayMin = randNum[i];
        }
    }
    //out info
    cout << "\n" <<     
        "positive average: " << sumPositive / countPositive << "\n" <<
        "count negative: " << countNegative << "\n" <<
        "zeros: " << zeros << "\n" <<
        "array min: " << arrayMin << "\n" <<
        "out array: ";

    for(short n : randNum)
    {
        if(n < 5)
        {
            n -= arrayMin;
        }
        //шанс того, что минимальное минимальный элемент массива будет больше 0 = 0.00034%
        cout << n << " ";
    }
}