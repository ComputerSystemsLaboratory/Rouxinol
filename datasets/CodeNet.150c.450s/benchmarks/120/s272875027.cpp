#include<algorithm>
#include<iostream>
#include<cstring>
#include<climits>
#include<cstdio>
using namespace std;
int f[15][10005];
int r,c,ans=0;
void dfs(int row)
{
    if(row==r+1)
    {
        int cont1=0;  
        for(int i=1;i<=c;i++)
        {  
            int cont2=0;
            for(int j=1;j<=r;j++)if(f[j][i]==1)cont2++;  
            cont1+=max(cont2,r-cont2);  
        }  
        ans=max(ans,cont1);  
        return ;
    }
    dfs(row+1);
    for(int i=1;i<=c;i++)
    if(f[row][i])f[row][i]=0;
    else f[row][i]=1;
    dfs(row+1);
}
int main()
{   
    while(1)
    {
        ans=0;
        scanf("%d%d",&r,&c);
        if(r==0&&c==0)break;
        for(int i=1;i<=r;i++)
            for(int j=1;j<=c;j++)
                scanf("%d",&f[i][j]);
        dfs(1);
        printf("%d\n",ans);
    }
}