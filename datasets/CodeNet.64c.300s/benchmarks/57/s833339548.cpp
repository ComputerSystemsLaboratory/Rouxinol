#include<iostream>  
#include<cstring>  
#include<cstdio>  
#include<cmath>  
#include<algorithm>  
  
using namespace std;  
  
bool s[15][10005]= {0};  
  
int ans=0;  
int n, m;  
  
void dfs(int x)  
{  
    if(x==n+1)  
    {  
        int sum=0;  
        int term=0;  
        for(int j=1;j<=m;j++)  
        {  
            for(int i=1;i<=n;i++)  
                if(s[i][j]==1)term++;  
            sum += term > n-term ? term : n-term;  
            term=0;  
        }  
        ans=max(ans,sum);  
        return ;  
    }  
    dfs(x+1);  
    for(int i=1;i<=m;i++)  
        s[x][i]=!s[x][i];  
    dfs(x+1);  
}  
  
int main()  
{  
    //freopen("in.in","r",stdin);  
    while(scanf("%d%d",&n,&m)!=EOF)  
    {  
        if(n==0&&m==0)break;  
        ans=0;  
        for(int i=1; i<=n; i++)  
            for(int j=1; j<=m; j++)  
                scanf("%d",&s[i][j]);  
        dfs(1);  
        printf("%d\n",ans);  
    }  
    return 0;  
}  
