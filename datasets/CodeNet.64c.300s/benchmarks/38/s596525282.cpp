#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std ;
int a[50] ,flag , l , r  ;
void dfs(int x , int l , int r)
{
    if(x==11) return ;
    if(a[x]>l) dfs(x+1,a[x],r);
    else if(a[x]>r) dfs(x+1,l,a[x]);
    else
    {
        flag = 1 ;
        return;
    }
}
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        flag = 0 ;
        for(int i = 1 ; i<=10;i++)
        {
            cin>>a[i];
        }
        dfs(1,0,0);
        if(flag) printf("NO\n");
        else printf("YES\n");
    }
    return 0 ;
}