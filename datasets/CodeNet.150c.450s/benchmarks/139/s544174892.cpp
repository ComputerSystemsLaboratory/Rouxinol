#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<long long, long long> pl;
 
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define speedhack() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define form(i, n) for (size_t i = 0; i < size_t(n); ++i)
#define forn(i, n) for (size_t i = 1; i <= size_t(n); ++i)
template<class T> using ordered_set=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
ll mod(ll a, ll b) { return (a%b+b)%b; }
ll gcd(ll x, ll y) { return __gcd(x, y); }
ll lcm(ll x, ll y) { return x * 1ll * y / gcd(x, y); }
 
 
const ll MAXN = 1e18;
const ll SIZE = 2e5 + 5;
const ll MOD  = 1e9 + 7;


int n, m, dp[SIZE], res[SIZE];
vector<int> adj[SIZE];
bool used[SIZE];

void bfs () {
	queue<int> q;
	used[1] = true;
	q.push(1);

	while (!q.empty()) {
		int from = q.front();
		q.pop();
		
		for (int to : adj[from]) {
			if (used[to])
				continue;
			used[to] = true;
			q.push(to);
			dp[to] = dp[from] + 1;
		}
	}
}


int main() { speedhack()
	
	cin >> n >> m;

	forn (i, m) {
		int u, v;
		cin >> u >> v;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	bfs ();

	forn (i, n) {
		if (!used[i]) {
			cout << "No";
			return 0;
		}
		if (dp[i]) {
			for (int v : adj[i]) {
				if (dp[v] + 1 == dp[i]) {
					res[i] = v;
					break;
				}
			}
		}
	}

	cout << "Yes" << endl;
	for (int i = 2; i <= n; i++)
		cout << res[i] << endl;
	


	return 0;
}
