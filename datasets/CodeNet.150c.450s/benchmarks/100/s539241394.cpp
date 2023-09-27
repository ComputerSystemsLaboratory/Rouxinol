#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    long long int n,f=1,i;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
        f=f*i;
    if(n==0)
           printf("0\n");
    else
           printf("%lld\n",f);
    return 0;
}