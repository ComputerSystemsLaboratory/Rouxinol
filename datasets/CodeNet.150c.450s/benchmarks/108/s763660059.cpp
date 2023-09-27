#include <iostream>
#include <vector>
#include <cstring>
#include <utility>
#include <queue>

using namespace std;

int main()
{
    int n, u, k, v, dis[110];
    bool vis[110];
    memset(dis, -1, sizeof(dis));
    memset(vis, false, sizeof(vis));
    vector<int> adj[110];
    queue<pair<int, int>> que; //point, dis
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>u>>k;
        for (int j=0; j<k; j++)
        {
            cin>>v;
            adj[u].push_back(v);
        }
    }
    que.push({1, 0});
    vis[1]=true;
    dis[1]=0;
    while (!que.empty())
    {
        int a=que.front().first, b=que.front().second;
        que.pop();
        for (auto u : adj[a])
        {
            if (!vis[u])
            {
                vis[u]=true;
                dis[u]=b+1;
                que.push({u, b+1});
            }
        }
    }
    for (int i=1; i<=n; i++) cout<<i<<' '<<dis[i]<<'\n';
    return 0;
}

