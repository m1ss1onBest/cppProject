#include <iostream>
using namespace std;

void L3Q2()
{
    //region start
    char switcher; float a, b, c, p, sp, s, ma, ha, bisector;
    cout << "enter the triangle sides length: ";
    cin >> a >> b >> c;
    cout << "\nchoose the variant:\n\t"
            "a) calculating the area of the triangle using the \"s = sqrt(p*(p-a)*(p-b)*(p-c));\"\n\t"
            "b) the trigngle's perimeter;\n\t"
            "v) the height of the triangle (h(a) = 2S/a);\n\t"
            "g) the median of the a side;\n\t"
            "d) the bisector of the alpha = 2/b+c * sqrt(bcp(p - a))\n";
    //region calculatingParameters
    p = a + b + c;
    sp = p/2;
    s = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    ha = ((2 * s) / a);
    ma = 0.5 * (sqrt(2 *(pow(b, 2) + pow(c, 2) - pow(a, 2))));
    bisector = (2 / (b + c) * sqrt(b * c * p * (p - a)));
    cout << "enter your variant: "; cin >> switcher; cout << endl;
    //region answer
    switch(switcher)
    {
    default:
        cout << "input error";
        break;
    case 'b':
        cout << "var \"a\"\tperimeter: " << p;
        break;
    case 'a':
        cout << "var \"b\"\tarea: " << s;
    case 'v':
        cout << "var \"v\"\theight: " << ha;
        break;
    case 'g':
        cout << "var \"g\"\tmedian: " << ma;
        break;
    case 'd':
        cout << "var \"d\"\tbisector" << bisector;
        break;
    }
}