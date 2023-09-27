#include<bits/stdc++.h>
using namespace std;

vector<int>g[200010];
int ans[100010];
bool vis[100010];
void bfs(int rt)
{
    vis[rt]=1;
    queue<int>q;
    q.push(rt);

    while(!q.empty())
    {
        int adj=q.front(); q.pop();
        for(auto x: g[adj])
        {
            if(vis[x]==0)
            {
                vis[x]=1;
                ans[x]=adj;
                q.push(x);
            }
        }
    }
}
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        scanf("%d%d", &a,&b);
        g[a].push_back(b);
        g[b].push_back(a);
    }

    bfs(1);
    for(int i= 1; i<=n; i++)
    {
        if(vis[i]==0)
        {
            cout<<"No";
            return 0;
        }
    }

    cout<<"Yes"<<endl;
    for(int i=2; i<=n; i++)
        printf("%d\n", ans[i]);
}
