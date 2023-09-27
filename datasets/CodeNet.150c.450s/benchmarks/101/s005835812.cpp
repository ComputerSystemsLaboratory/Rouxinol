#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
using namespace std;

const int grey=1;
const int white=0;
const int black=-1;

const int maxn=100005;
int head[maxn+5],pos=0;
int color[maxn+5],id[maxn+5];
int n,m;

struct node
{
    int k;
    int next;
};
struct node G[2*maxn+5];

void add(int u,int v)
{
    G[++pos].k=v;
    G[pos].next=head[u];
    head[u]=pos;
}

void bfsvisit(int u,int k)
{
    color[u]=black;
    queue<int> q;
    q.push(u);
    id[u]=k;
    while(!q.empty())
    {
        int r=q.front();
        q.pop();
        for(int j=head[r];j;j=G[j].next)
        {
            int v=G[j].k;
            if(color[v]==white)
            {
                q.push(v);
                color[v]=black;
                id[v]=k;
            }
        }
    }
}

void bfs()
{
    memset(id,0,sizeof(id));
    memset(color,0,sizeof(color));
    int k=0;

    for(int i=0;i<n;i++)
    {
        if(color[i]==white)
        {
            bfsvisit(i,k++);
        }
    }
}

int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++)
    {
        int u,v;
        scanf("%d%d",&u,&v);
        add(u,v);
        add(v,u);
    }

    bfs();
    int q,s,t;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d%d",&s,&t);
        if(id[s]==id[t])
            printf("yes\n");
        else printf("no\n");
    }
}