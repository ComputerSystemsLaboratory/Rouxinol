#include<bits/stdc++.h>
#define ll long long
#define pb push_back
long long int mod = (long long int)1000000007;
using namespace std;

int n;
const int full=200006;
vector<int>adj[full];
bool vis[full];
int par[full];
int depth[full];
int ans[full];

void dfs(int i)
{
    queue<int>q;
    q.push(1);
    while(q.size()>0)
    {
        int x=q.front();
        vis[x]=1;
        q.pop();
        for(int j=0;j<adj[x].size();j++)
        {
            if(vis[adj[x][j]]==0 && ans[adj[x][j]]==0)
            {
                
                ans[adj[x][j]]=x;
                q.push(adj[x][j]);
            }
            
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int i,j,k;
    int n,m;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].push_back(a);
    }
    dfs(1);
    for(i=2;i<=n;i++)
    {
        if(ans[i]==0)
        {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes\n";
    for(i=2;i<=n;i++)
    {
        cout<<ans[i]<<"\n";
    }
}