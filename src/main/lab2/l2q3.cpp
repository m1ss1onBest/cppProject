#include <iostream>
using namespace std;

void L2Q3()
{
    //coords
    float isInside = false;
    float
    //dot coords
    x, y,
    //circle coords
    xCirCen = 7, yCirCen = 2.5, cirRad = 2.5,
    //triangle a
    x1 = 0, y1 = -5,
    //triangle b
    x2 = -10, y2 = 5,
    //triangle c
    x3 = 16, y3 = 5,
    a, b, c;
    cout << "enter the coords x, y: "; cin >> x >> y;

    //isInCircle
    float radiusToCircle = sqrt(pow((x - xCirCen), 2) + pow((y - yCirCen), 2));
    if (radiusToCircle <= cirRad)
    {
        goto InCircle;
    }
    
    //isTriangle
    c = (x - x3)*(y1 - y3) - (y - y3)*(x1 - x3);
    b = (x - x2)*(y3 - y2) - (y - y2)*(x3 - x2);
    a = (x - x1)*(y2 - y1) - (y - y1)*(x2 - x1);
    isInside = (a >= 0 && b >= 0 && c >= 0 || a <= 0 && b <= 0 && c <= 0)? 1:0;

    //region end
    InCircle:
    cout << isInside;
}