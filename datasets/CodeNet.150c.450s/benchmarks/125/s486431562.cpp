#include<iostream>
#include<cstdio>
#include<cstring>
#include<stack>
#define white 0
#define grey 1
#define black -1
using namespace std;

int a[110][110],n;
int color[110];
int t;
int ts[110],te[110];
int nt[110];

void dfsinit()
{
    for(int i=1;i<=n;i++)
        {
            color[i]=white;
            nt[i]=1;
        }
}

int next(int i)
{
    for(int j=nt[i];j<=n;j++)
    {
        nt[i]=j+1;
        if(a[i][j]) return j;
    }
    return -1;
}

void dfsvisit(int u)
{
    for(int i=1;i<=n;i++)
        nt[i]=1;
    stack<int>s;
    s.push(u);
    ts[u]=++t;
    color[u]=grey;
    while(!s.empty())
    {
       int r=s.top();
       int v=next(r);
       if(v!=-1)
       {
          if(color[v]==white)
          {
              color[v]=grey;
              ts[v]=++t;
              s.push(v);
          }
       }
       else
       {
           color[r]=black;
           te[r]=++t;
           s.pop();
       }
    }
}

void dfs()
{
    dfsinit();

    for(int i=1;i<=n;i++)
    {
        if(color[i]==white)
        {
            dfsvisit(i);
        }
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