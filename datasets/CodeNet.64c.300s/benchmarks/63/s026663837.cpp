#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

#define sf scanf
#define pf printf

using namespace std;

int GCD(int a,int b)
{
    if(b == 0) return a;
    return GCD(b,a%b);
}
int main()
{
    int a,b;
    while(~sf("%d%d",&a,&b))
    {
        int gcd = GCD(a,b);
        int lcm = a / gcd * b;
        pf("%d %d\n",gcd,lcm);
    }
    return 0;
}