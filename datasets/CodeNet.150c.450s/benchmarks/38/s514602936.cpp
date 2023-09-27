#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>
int main()
{
    int a,b,c,n,i;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if ((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
            printf("%s","YES\n");
        else
            printf("%s","NO\n");
    }
    return 0;
}