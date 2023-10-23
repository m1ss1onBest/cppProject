#include <iostream>
using namespace std;

void L3Q1()
{
    //variant 27 = 12/15
    cout << "Enter any word: ";
    string word;
    int glasnaya = 0, neglasnaya = 0;
    cin >> word;

    for (char c : word) //foreach цикл, пример: int number : allnumbers;
        //string переменная является массивом из букв
        {
        switch(tolower(c)) //tolower преобразовывает прописные буквы в строчные
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            glasnaya++;
            break;
            //вместо того чтобы прописывать остальные негласные буквы был применён default
            default:
                neglasnaya++;
            break;
        }
        }
    cout << "glasnych = " << glasnaya << endl;
    cout << "neglasnych = " << neglasnaya << endl;
}