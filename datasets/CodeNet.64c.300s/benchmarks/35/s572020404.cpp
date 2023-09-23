#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
#include<stack>
#include<stdlib.h>
#include<queue>
#include<vector>
#include<list>
using namespace std;
int mp[111][111];
int main ()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<111;i++)
        for(int j=0;j<111;j++)
            mp[i][j]=0;
    for(int i=1;i<=n;i++)
    {
        int u,v;
        scanf("%d %d",&u,&v);
        for(int j=1;j<=v;j++)
        {
            int w;
            scanf("%d",&w);
            mp[u][w]=1;
        }
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
    {
        if(j==n)
            printf("%d\n",mp[i][j]);
        else
            printf("%d ",mp[i][j]);
    }
    return 0;
}


