//l7q1.cpp
#include <iostream>

double equation1(const double n, const double m)
{
    return (n + m) / 2;
}

void L7Q1()
{
    double n, m;
    std::cout << "input> ";
    std::cin >> n >> m;
    
    const double y = equation1(pow(n ,3), 2*m) + equation1(4*pow(n, 2), -1*sin(m));
    std::cout << "result: " << y;
}