#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
const int N = 100;
int merg(int x,int y);
int Find(int x);
int a[N][N];
const int inf = 0x3f3f3f3f;

int main()
{
    int n;
    while(scanf("%d", &n),n!=0)
    {
        for(int i=0;i<=15;i++)
        {
            for(int j=0;j<15;j++)
            {
                if(i==j)
                {
                    a[i][j]=0;
                }
                else
                {
                    a[i][j]=inf;
                }

            }
        }
        for(int i=0;i<n;i++)
        {
            int x, y, z;
            scanf("%d %d %d", &x, &y, &z);
            a[x][y]=min(a[x][y],z);
            a[y][x]=a[x][y];
        }
        for(int i=0;i<=15;i++)
        {
            for(int j=0;j<=15;j++)
            {
                for(int k=0;k<=15;k++)
                {
                    if(a[j][k]>a[j][i]+a[i][k]&&a[i][k]!=inf&&a[j][i]!=inf)
                    {
                        a[j][k]=a[j][i]+a[i][k];
                    }
                }
            }
        }
        int sum=inf, u;
        for(int i=0;i<=15;i++)
        {
            int tmp=0;
            for(int j=0;j<=15;j++)
            {
                if(a[i][j]!=inf)
                {
                    tmp+=a[i][j];
                }
            }
            if(tmp==0)
            {
                continue;
            }
            if(tmp<sum)
            {
                sum=tmp;
                u=i;
            }
        }
        printf("%d %d\n", u, sum);
    }
    return 0;
}