constexpr float epsilon = 0.00001;

unsigned long long factorial(unsigned long long);

float myRoot(float);
float myAbs(float);
float doo(int (*operation)(float), float);

float diapSum(float, float);
float sum(float, float);
float doo2(int (*operation) (float, float), float, float);

//1
unsigned long long factorial(const unsigned long long  n)
{
    if(n > 1) return n * factorial(n - 1);
    return 1;
}

//2
float myRoot(const float n)
{
    float x = n, y = 1;
    if(n == 0) return 0;

    while(n - 1 > epsilon)
    {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

//3
float myAbs(float n)
{
    if(n < 0) n *= -1;
    return n;
}

//4
//can use abs, sqrt.
float doo(int (*operation)(float), const float a)
{
    return operation(a);
}

//5
float diapSum(const float a, const float b)
{
    int res = 0;
    for(int i = a; i < b; res += i++) {}
    return res;
}

//6
float sum(const float a, const float b)
{
    return a + b;
}

//7
float doo2(int (*operation)(float, float), const float a, const float b)
{
    return operation(a, b);
}

//region main
void L7Q3()
{
    
}