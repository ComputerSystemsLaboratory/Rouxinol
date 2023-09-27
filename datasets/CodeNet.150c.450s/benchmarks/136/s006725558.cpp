#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}

LL lcm(LL a, LL b, LL g)
{
    return (a / g) * b;
}

int main()
{
    int a, b;
    while(~scanf("%d%d",&a,&b))
    {
        int g = gcd(a,b);
        LL l = lcm(a,b,g);
        printf("%d %lld\n",g,l);
    }
    return 0;
}