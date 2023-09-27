#include<stdio.h>
struct
{
    int Top=0;
    int s[20000];
    bool Empty()
    {
        return Top==0;
    }
    void push(int x)
    {
        s[++Top]=x;
    }
    void pop()
    {
        Top--;
    }
    int top()
    {
        return s[Top];
    }
}S;
const int N=100;
const int bai=0;
const int hui=1;
const int hei=2;
int n,tu[N][N];
int fx[N],js[N],sum,nt[N],jilu[N];
int next(int u)
{
    for (int v=nt[u];v<n;v++)
    {
        nt[u]=v+1;
        if(tu[u][v]) return v;
    }
    return -1;
}
void DFS_visit(int r)
{

    S.push(r);
    jilu[r]=hui;
    fx[r]=++sum;
    while(!S.Empty())
    {
        int u=S.top();
        int v=next(u);
        if(v!=-1)
        {
            if(jilu[v]==bai)
            {
                jilu[v]=hui;
                fx[v]=++sum;
                S.push(v);
            }
        }
        else
        {
            S.pop();
            jilu[u]=hei;
            js[u]=++sum;    
        }
    }
}
void DFS()
{
    sum=0;
    for (int u=0;u<n;u++)
    {
        if(jilu[u]==bai)
            DFS_visit(u);
    }
    for (int i=0;i<n;i++)
    {
        printf("%d %d %d\n",i+1,fx[i],js[i]);
    }
}
int main()
{
    int u,k,v;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d%d",&u,&k);
        u--;
        for(int j=0;j<k;j++)
        {
            scanf("%d",&v);
            v--;
            tu[u][v]=1;
        }
    }
    DFS();
    return 0;
}