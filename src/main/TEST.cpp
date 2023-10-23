#include <iostream>
#include <iomanip>
#include <valarray>
using namespace std;

void TEST()
{
    float
    //dot
    xMain, yMain,
    //coords
    x1 = 0, y1 = 3,     
    x2 = 3, y2 = 0,
    //circle
    radius = 3,
    xc = 0, yc = 0;
    
    cin >> xMain >> yMain;
    xMain = fabs(xMain); yMain = abs(yMain);
    if(x1 == x2)
    {
        cout << "The coords are wrong!\n";
        exit(0);
    }
    //line
    //intercept = y - x * slope
    const float slope = (y2 - y1)/(x2 - x1);
    const float intercept = y1 - x1 * slope;
    const float coefficient = slope * xMain + intercept;
    
    cout << "y = " << slope << "x + " << intercept << "\n";
    //circle
    float radiusToCircle = sqrt(pow(xMain - xc, 2) + (pow(yMain - yc, 2)));
    //end
    if(yMain >= coefficient && radiusToCircle <= radius)
    {
        cout << "is Inside";
    }
    else cout << "not Inside";

    cout << "\nkoef:" << coefficient << " yMain: " << yMain << " RTC: " << radiusToCircle << "radius: " << radius;
}