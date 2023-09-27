#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
int main()
{
    long long a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        cout << floor(log10(a+b))+1 << endl;
    }
    return 0;
}