#include<cstdio>
#include<iostream>
#include<cstring>
#define white 0
#define gray 1
#define black 2
using namespace std;
const int MAXN = 100+10 ;

int a[MAXN][MAXN],flag[MAXN],d[MAXN],f[MAXN],cnt;
int n,u,v,t;

void fun(int x)
{
    flag[x] = gray;
    d[x] = ++cnt;
    for(int i = 1; i <= n; ++i)
    {
        if(a[x][i] && flag[i]==white)
            fun(i);
    }
    flag[x] = black;
    f[x] = ++cnt;
    return;
}

void dfs()
{
    memset(flag,0,sizeof flag);
    for(int i = 1; i <= n; ++i)
    {
        if(flag[i] == white)
            fun(i);
    }
    for(int i = 1; i <= n; ++i)
        cout<<i<<' '<<d[i]<<' '<<f[i]<<'\n';
}
int main(void)
{

    cin>>n;
    for(int i = 1; i <= n; ++i)
    {
        cin>>u>>t;
        for(int j = 1; j <= t; ++j)
        {
            cin>>v;
            a[u][v] = 1;
        }
    }
    dfs();
}

