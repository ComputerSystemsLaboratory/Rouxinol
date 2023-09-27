//...Bismillahir Rahmanir Rahim...
// Code by    Asad Bin Saber

#include <bits/stdc++.h>

using namespace std;

// typedefs...
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<ll, ll> pll;

// constants...
const double PI = acos(-1);
const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5;
const ll INF = 1e18+5;

// defines...
#define MP make_pair
#define PB push_back
#define fi first
#define se second
#define si(a) scanf("%d", &a)
#define sii(a, b) scanf("%d%d", &a, &b)
#define siii(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define sl(a) scanf("%lld", &a)
#define sll(a, b) scanf("%lld%lld", &a, &b)
#define slll(a, b, c) scanf("%lld%lld%lld", &a, &b, &c)
#define sz(x) (int)x.size()
#define all(x) begin(x), end(x)

// chess moves...
// int dx[] = {+0, +0, -1, +1}; ///Up-down, Left-Right
// int dy[] = {+1, -1, +0, +0};
// int dx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's Move
// int dy[] = {-1,+1,+0,+0,+1,+1,-1,-1};
// int dx[] = {-2, -2, -1, -1,  1,  1,  2,  2}; ///Knight's Move
// int dy[] = {-1,  1, -2,  2, -2,  2, -1,  1};

// structs...
struct hash_pair { 
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    { 
        auto hash1 = hash<T1>{}(p.first); 
        auto hash2 = hash<T2>{}(p.second); 
        return hash1 ^ hash2; 
    } 
}; 

// functions...
ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
ll lcm(ll a, ll b)
{
    return (a/gcd(a, b)*b);
}
ll comb(ll a, ll b)
{
    ll x = max(a-b, b), ans=1;

    for(ll K=a, L=1; K>=x+1; K--, L++){
        ans *= K;
        ans /= L;
    }

    return ans;
}


int n, ara[100001];
vector<bool> vis(100001);
vector<vi> edge(100001);
void bfs()
{
	queue<int> q;
	q.push(1);
	int u;
	
	while(!q.empty()){
		u = q.front();
		q.pop();
		vis[u] = 1;
		
		for(int K=0; K<sz(edge[u]); K++){
			if(!vis[edge[u][K]] && ara[edge[u][K]]==-1){
				ara[edge[u][K]] = u;
				q.push(edge[u][K]);
			}
		}
	}
}
void task()
{
    //code here...
    
    int m, a, b;
    memset(ara, -1, sizeof ara);
    
    cin >> n >> m;
    while(m--){
		cin >> a >> b;
		edge[a].PB(b);
		edge[b].PB(a);
	}
	
	for(int K=1; K<=n; K++) sort(edge[K].begin(), edge[K].end());
	
	bfs();
	
	for(int K=2; K<=n; K++){
		if(ara[K]==-1){
			cout << "No\n";
			return;
		}
	}
	
	cout << "Yes\n";
	for(int K=2; K<=n; K++) cout << ara[K] << "\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    task();

    return 0;
}
