
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vvll vector<vll>
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define pii pair<int, int>
#define vpli vector<pair<long long, int>>
#define deb(x) cout << "deb " << #x << " " << x << endl;
#define all(x) x.begin(), x.end()
#define endl "\n"
const ll BIG = 3e5;
const int MOD =  998244353;

void swap(ll &a, ll &b)
{
    ll t = a;
    a = b;
    b = t;
}

ll Min(ll a, ll b, ll c)
{
    return min(a, min(b, c));
}

void printvec(vi &vec)
{
    for (int x : vec)
    {
        cout << x << " ";
    }
    cout << endl;
}

int sum(int a)
{
    int ans = 0;
    while (a)
    {
        ans += (a % 10);
        a = a / 10;
    }
    return ans;
}
void print(vi &mp)
{
    for (auto x : mp)
    {
        cout << x;
    }
    cout << endl;
}

void solve()
{
    int n,m;
    cin>>n>>m;
    vvi adj(n+1);
    int u,v;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    vb vis(n+1);
    vi dist(n+1,BIG);
    vis[1] = 1;
    dist[1] = 0;
    queue<int> q;
    q.push(1);
    while(!q.empty())
    {
        int s = q.front();
        q.pop();
        for(int x : adj[s])
        {
            if(!vis[x])
            {
                vis[x] = 1;
                dist[x] = s;
                q.push(x);
            }
        }
    }
    for(int i=1;i<=n;i++) if(!vis[i]){ cout<<"No\n";return;}
    cout<<"Yes\n";
    for(int i=2;i<=n;i++) cout<<dist[i]<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100001];
bool visited[100001];
int ans[100001];

void bfs(){
    queue<int> q;
    q.push(1);
    visited[1] = true;
    
    while(q.size()){
        int cur = q.front(); q.pop();
        for(auto i : adj[cur]){
            if(!visited[i]){
                ans[i] = cur;
                q.push(i);
                visited[i] = true;
            }
        }
    }
}
int main()
{
	memset(visited,false,sizeof(visited));
	memset(ans,0,sizeof(ans));
	int nodes,edges;
	cin >> nodes >> edges;
	for(int i=0;i<edges;i++)
	{
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	bfs();
	cout << "Yes\n";
	for(int i=2;i<=nodes;i++)
		cout << ans[i] << "\n";
}
 
*/