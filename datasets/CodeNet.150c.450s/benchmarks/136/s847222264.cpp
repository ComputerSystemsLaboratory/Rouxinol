#include<iostream>
#include<utility>

long GCD(long, long);
long LCM(long, long);

int main()
{
    long a,b;
    while(std::cin >> a >> b)
    {
        if(a < b)
        {
            std::swap(a,b);
        }
        
        std::cout << GCD(a,b) << " ";
        std::cout << LCM(a,b) << std::endl;
    }
    return 0;
}

long GCD(long a, long b)
{
    if(a == 0 || b == 0) return 0;
    long r = a % b;
    if(r == 0) return b;
    return GCD(b,r);
}

long LCM(long a, long b)
{
    if(a == 0 || b == 0) return 0;
    return (a * b / GCD(a,b));
}