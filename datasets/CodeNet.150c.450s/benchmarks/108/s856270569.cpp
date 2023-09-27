#include<iostream>
#include<cstring>
#include<queue>
using namespace std;

#define N 100
#define INFTY (1<<30)
int n,m[N][N],d[N];//通过距离管理访问状态(color)

void bfs(int s) //广搜
{
    queue<int> q;
    q.push(s);
    for(int i=0;i<n;i++) d[i]=INFTY; //注意这里不能用memset
    d[s]=0; //初始化

    while(!q.empty())
    {
        int u=q.front();q.pop();
        for(int v=0;v<n;v++)
        {
            if(m[u][v]&&d[v]==INFTY) //如果有节点与u相邻且该节点没有被访问过
            {
                d[v]=d[u]+1; //距离+1
                q.push(v); //将该节点加入待访问队列中
            }
        }
    }

    for(int i=0;i<n;i++)
        cout<<i+1<<" "<<(d[i]==INFTY ? -1 : d[i])<<endl; //注意这里要用括号
}

int main()
{
    int u,k,v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>u>>k;
        u--;
        for(int j=0;j<k;j++)
        {
            cin>>v;
            v--;
            m[u][v]=1;
        }
    }
    bfs(0);
    return 0;
}
