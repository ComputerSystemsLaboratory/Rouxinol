#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if (pow(a,2) == pow(b,2) + pow(c,2) || pow(b,2) == pow(a,2) + pow(c,2) || pow(c,2) == pow(a,2) + pow(b,2))
            printf("YES\n");
        else
            printf("NO\n");
    }
}