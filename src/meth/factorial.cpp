//factorial.cpp
unsigned long long getFactorial(const unsigned long long n)
{
    if(n == 0)
        return 1;
    return n * getFactorial(n - 1);
}
