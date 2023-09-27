#include<iostream>
#include<cstdio>
#include<stack>
#include<algorithm>
#include<cstring>
#define white 0
#define balck -1
#define grey 1
using namespace std;

int a[110][110],n;
int color[110];
int t=0;
int ts[105],te[105];

void dfsinit()
{
    for(int i=1;i<=100;i++)
        color[i]=white;
}

void dfsvisit(int u)
{
    color[u]=grey;
    ts[u]=++t;  //搜索
    for(int j=1;j<=n;j++)  //搜索?点
    {
        if(color[j]==white && a[u][j]==1)
        {
           dfsvisit(j);  //深搜
        }
    }
    te[u]=++t;
    color[u]=balck;
}

void dfs()
{
    dfsinit();
    for(int i=1;i<=n;i++)
    {
        if(color[i]==white)
            dfsvisit(i);
    }
}

int main()
{
   int key,d,x;
   t=0;
   memset(a,0,sizeof(a));
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       scanf("%d%d",&key,&d);
       for(int j=1;j<=d;j++)
       {
        scanf("%d",&x);
        a[key][x]=1;
       }
   }

   dfs();
   for(int i=1;i<=n;i++)
   {
       printf("%d %d %d\n",i,ts[i],te[i]);
   }
   return 0;
}