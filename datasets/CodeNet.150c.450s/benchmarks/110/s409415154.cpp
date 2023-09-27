#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
#include<iostream>
#include<algorithm>
#define INF 1000000000
#define MAXN 100005
using namespace std;
int mmin=11;
int step[4][2]={0,1,0,-1,-1,0,1,0};
int a[1005][1005];int m,n,k,sx,sy;
struct node{
    int x,y,cost;
};
int bfs(int x,int y,int s)
{
    queue<node>q;
    bool vis[1005][1005]={0};
    node now={x,y,0};
    q.push(now);
    while(!q.empty())
    {
        now=q.front();q.pop();
        if(a[now.x][now.y]==s)break;
        for(int i=0;i<4;i++)
        {
            int xx=now.x+step[i][0],yy=now.y+step[i][1];
            if(!vis[xx][yy]&&a[xx][yy]!=-1){
                vis[xx][yy]=1;
                node temp={xx,yy,now.cost+1};
                q.push(temp);

            }
        }
    }
    //cout<<now.cost<<endl;
    sx=now.x;sy=now.y;
    return now.cost;
}
int main()
{
    scanf("%d%d%d",&n,&m,&k);
    memset(a,-1,sizeof(a));
    for(int i=1;i<=n;i++){
        string x;cin>>x;
        for(int j=1;j<=m;j++)
        {
            char c=x[j-1];
            if(c=='S'){a[i][j]=0;sx=i;sy=j;}
            else if(c=='X')a[i][j]=-1;
            else if(c=='.')a[i][j]=0;
            else a[i][j]=c-'0';
        }
    }
    int sum=0;
    for(int i=1;i<=k;i++)
    {
        sum+=bfs(sx,sy,i);
    }
    printf("%d\n",sum);
}

