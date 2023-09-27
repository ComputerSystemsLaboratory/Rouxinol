#include<iostream>
#include<algorithm>
#include<cstring>
#include <math.h>
#include<cstdio>
using namespace std;
int a[47][47],inf=999999;
void init()
{
    for(int i=0; i<=47; i++)
        for(int j=0; j<=47; j++)
        {
            if(i==j)
                a[i][j]=0;
            else
                a[i][j]=inf;
        }
}
void floyd(int x)
{
    for(int k=0; k<=x; k++)
        for(int i=0; i<=x; i++)
            for(int j=0; j<=x; j++)
                if(a[i][j]>a[i][k]+a[k][j])
                    a[i][j]=a[i][k]+a[k][j];
}
int main()
{
    int n;
    while(scanf("%d",&n)&&n)
    {
        init();
        int max1=0,x,y,z;
        for(int i=0; i<n; i++)
        {
            scanf("%d%d%d",&x,&y,&z);
            if(x>max1)
                max1=x;
            if(y>max1)
                max1=y;
            if(a[x][y]>z)
                a[x][y]=a[y][x]=z;
        }
        floyd(max1);
        int max2=inf,u,sum;
        for(int i=0; i<=max1; i++)
        {
            sum=0;
            for(int j=0; j<=max1; j++)
            {
                 sum+=a[i][j];
            }
            if(sum<max2)
            {
                max2=sum;
                u=i;
            }
        }
        printf("%d %d\n",u,max2);
    }
    return 0;
}