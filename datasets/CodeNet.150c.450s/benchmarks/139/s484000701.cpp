#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define ff first
#define ss second
#define file_se_input  freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define pp long long int
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define pb push_back
#define mp make_pair
#define pi 3.141592653589793238
#define eb emplace_back
#define rep(i,a,b) for (int i = a; i <= b; i++)
#define zip(i,a,b) for(int i=a;i<b;i++)
#define rzip(i,a,b) for(int i=a;i>=b;i--)
#define ll unsigned long long int
#define test int t;cin>>t; while(t--)
#define um unordered_map
#define en '\n'
#define us unordered_set
typedef pair<int, int>     pii;
typedef pair<char, int>    pci;
typedef pair<char, char>   pcc;
typedef vector<pii>       vii;
typedef long double ld;
#define all(v) v.begin(), v.end()
#define INF (1e18+5)
#define inf (1e9+5)
#define mod 1000000007
vi adj[123456];
bool vis[123456];
int parent[123456];

void dfs(int u, int p)
{
	vis[u] = true;
	//parent[u] = p;
	for (int x : adj[u])
	{
		if (!vis[x])
		{
			dfs(x, u);
		}
	}

}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	if (fopen("input.txt", "r"))
	{
		freopen ("input.txt" , "r" , stdin);
		freopen ("output.txt" , "w" , stdout);
	}
#endif
	//_______________________________-code starts-_______________________________________________

	int n, m;
	cin >> n >> m;
	zip(i, 0, m)
	{
		int a, b;
		cin >> a >> b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	// int con_component = 0;
	// rep(i, 1, n)
	// {
	// 	if (!vis[i])
	// 	{
	// 		dfs(i, 0);
	// 		con_component++;
	// 	}
	// }

	// if (con_component > 1)
	// {
	// 	cout << "No" << en;
	// 	return 0;
	// }
	queue<int>q;
	q.push(1);
	while (!q.empty())
	{
		int node = q.front();
		q.pop();
		for (auto it : adj[node])
		{
			if (!vis[it])
			{
				vis[it] = true;
				parent[it] = node;
				q.push(it);
			}
		}
	}
	cout << "Yes" << en;
	rep(i, 2, n)
	{
		cout << parent[i] << en;
	}



	return 0;
}

