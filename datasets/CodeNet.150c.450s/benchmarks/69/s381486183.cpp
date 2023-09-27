#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;
int a[10];
bool dfs(int k,int B,int C)
{
    if(k==10)
        return true;
    if(a[k]>B)
    {
        if(dfs(k+1,a[k],C))
            return true;
    }
    if(a[k]>C)
    {
        if(dfs(k+1,B,a[k]))
            return true;
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<10;i++)
            cin>>a[i];
        if(dfs(0,0,0))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}