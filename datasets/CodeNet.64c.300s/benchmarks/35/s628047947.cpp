#include<cstdio>
#include<iostream>
using namespace std;
const int MAXN = 100+10 ;

int a[MAXN][MAXN];

int main(void)
{
    int n,u,v,t;
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
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j < n; ++j)
        {
            cout<<a[i][j]<<' ';
        }
        cout<<a[i][n]<<'\n';
    }
}

