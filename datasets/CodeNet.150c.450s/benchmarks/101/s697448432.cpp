#include<iostream>
#include<cstdio>
#include<stack>
#include<cstring>
#include<vector>
#include<queue>
#include<stack>
#define white 0
#define grey 1
#define nil -1
#define maxn 100000
using namespace std;

vector<int> g[maxn+5];
int color[maxn+5];
int n,m;

void dfs(int s,int t)
{
    stack<int>q;
    q.push(s);
    color[s]=t;
    while(!q.empty())
    {
        int v=q.top();
        q.pop();
        for(int j=0;j<g[v].size();j++)
        {
            int u=g[v][j];
            if(color[u]==nil)
            {
                q.push(u);
                color[u]=t;
            }
        }
    }
}

void work()
{
    int id=1;
    for(int i=0;i<n;i++)
        color[i]=nil;
    for(int i=0;i<n;i++)
        if(color[i]==nil)
           dfs(i,id++);
}

int main()
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        g[x].push_back(y);
        g[y].push_back(x);
    }
    work();

    int q;
    scanf("%d",&q);
    for(int i=1;i<=q;i++)
    {
        int s,t;
        scanf("%d%d",&s,&t);
        if(color[s]==color[t])
            printf("yes\n");
        else printf("no\n");
    }
    return 0;
}