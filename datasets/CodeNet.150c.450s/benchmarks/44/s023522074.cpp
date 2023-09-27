#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    int a[4],b[4];
    int d[10];
    int n,m;
    while(scanf("%d",&a[0])!=EOF)
    {
        n=m=0;
        memset(d,0,sizeof(d));
        d[a[0]]++;
        for(int i=1; i<4; i++)
        {
            scanf("%d",&a[i]);
            d[a[i]]++;
        }
        for(int i=0; i<4; i++)
        {
            scanf("%d",&b[i]);
            if(a[i]==b[i])
                n++;
            else
            {
                d[b[i]]++;
                if(d[b[i]]==2)
                    m++;
            }
        }
        printf("%d %d\n",n,m);
    }
    return 0;
}