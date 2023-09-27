#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL)
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define trace(x)  cerr << #x << ": " << x << endl;
typedef long long ll;
typedef long double ld;const ll N=1e5+5;
vector<ll> adj[N];bool visited[N]={0};ll parent[N];queue<ll> q;
void bfs(ll x)
{
	visited[x] = true;
	q.push(x);
	while (!q.empty()) {
	int s = q.front(); q.pop();
	// process node s
	for (auto u : adj[s]) {
	if (visited[u]) continue;
	visited[u] = true;
	parent[u] = s;
	q.push(u);
	}
}
}
int main()
{
	ll n,m;cin>>n>>m;
	for(ll i=0;i<m;i++)
	{
		ll u,v;
		cin>>u>>v;u--;v--;adj[u].push_back(v);adj[v].push_back(u);
	}
	for(ll i=0;i<n;i++)parent[i]=-1;
	bfs(0);
	for(ll i=1;i<n;i++)if(parent[i]==-1){cout<<"No";return 0;}
	cout<<"Yes\n";
	for(ll i=1;i<n;i++)cout<<parent[i]+1<<"\n";
}
