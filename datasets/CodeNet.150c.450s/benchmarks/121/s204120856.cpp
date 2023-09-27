#include<cstdio>
#include<vector>
#include<queue>
#include<string.h>
#include<iostream>
#include<algorithm>
#include<string>
#define MAXN 10000
#define INF 1000000005

using namespace std;
int a[105][105]={0};
bool vis[105][105]={0};
int sum=0;
int step[4][2]={-1,0,1,0,0,-1,0,1};
int fl;
void dfs(int x,int y)
{
    vis[x][y]=1;
    for(int i=0;i<4;i++)
    {
        int xx=x+step[i][0],yy=y+step[i][1];
        if(a[xx][yy]==fl&&!vis[xx][yy]){
            dfs(xx,yy);
        }
    }
}
int main()
{
    int m,n;
    while(1)
    {
        scanf("%d%d",&n,&m);
        if(m==0&&n==0)break;
        memset(a,0,sizeof(a));
        memset(vis,0,sizeof(vis));
        sum=0;
        for(int i=1;i<=n;i++)
        {
            string x;cin>>x;
            for(int j=1;j<=m;j++)
            {
                if(x[j-1]=='#')a[i][j]=1;
                if(x[j-1]=='@')a[i][j]=2;
                if(x[j-1]=='*')a[i][j]=3;
            }
        }
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
        {
            if(!vis[i][j]){fl=a[i][j];dfs(i,j);sum++;}
        }
        printf("%d\n",sum);
    }

}

