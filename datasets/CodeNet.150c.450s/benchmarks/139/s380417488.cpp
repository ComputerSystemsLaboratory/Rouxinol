#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>adj[200005];
int ans[100005];
bool vis[100005];

void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=1;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        for(int i=0; i<adj[x].size(); i++)
        {
            int y=adj[x][i];
            if(vis[y]==0)
            {
                q.push(y);
                vis[y]=1;
                ans[y]=x;
            }
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(ans,-1,sizeof ans);
    bfs(1);

    for(int i=2; i<=n; i++)
    {
        if(ans[i]==-1)
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    for(int i=2; i<=n; i++) cout<<ans[i]<<endl;

}
