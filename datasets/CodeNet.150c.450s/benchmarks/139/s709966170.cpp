#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define inf 1e9
#define mod 1000000007
#define ff first
#define ss second

const int maxn = 100005;
vector<int> adj[maxn];
bool vis[maxn];
int cnt = 0;
void dfs(int node)
{
	vis[node] = true;
	cnt++;
	for (auto child : adj[node])
	{
		if (vis[child] == false)
			dfs(child);
	}
}

vector<int> ans(maxn);

void bfs(int src = 1)
{
	memset(vis, false, sizeof(vis));
	queue<int> que;

	que.push(src);

	while (!que.empty())
	{
		int par = que.front();
		que.pop();
		vis[par] = true;
		for (auto child : adj[par])
		{
			if (vis[child] == false)
			{
			    ans[child] = par;
				que.push(child);
				vis[child] = true;
			}
		}
	}
}


void solve()
{
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	memset(vis, false, sizeof(vis));
	cnt = 0;
	dfs(1);
	if (cnt != n)
	{
		cout << "No" << "\n";
		return;
	}
	bfs();
	cout << "Yes" << "\n";
	for (int i = 2; i <= n; i++)
		cout << ans[i] << "\n";


}

signed main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	solve();
	return 0;
}
