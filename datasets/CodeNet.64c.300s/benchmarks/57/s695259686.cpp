#include<iostream>  
#include<cstring>  
#include<cstdio>  
#include<cmath>  
#include<algorithm>  
  
using namespace std;  
  
bool s[15][10005]= {0};  
  
int n, m;  

void reverse(int row){
    for(int i=1; i<=m; i++){
        if(s[row][i]==0) s[row][i]=1;
        else s[row][i]=0;
    }
}

int dfs(int x)  
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
        return sum;  
    }  
    int a=dfs(x+1);  
    reverse(x);
    //for(int i=1;i<=m;i++)  
      //  s[x][i]=!s[x][i];  
    int b=dfs(x+1);  
    return a>b?a:b;
}  
  
int main()  
{  
    //freopen("in.in","r",stdin);  
    while(scanf("%d%d",&n,&m)!=EOF)  
    {  
        if(n==0&&m==0)break;   
        for(int i=1; i<=n; i++)  
            for(int j=1; j<=m; j++)  
                scanf("%d",&s[i][j]);  
        cout<<dfs(1)<<endl;  
    }  
    return 0;  
} 
