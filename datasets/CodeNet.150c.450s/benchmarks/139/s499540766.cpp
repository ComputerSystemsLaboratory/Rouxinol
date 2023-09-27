#include <bits/stdc++.h>
using namespace std;

const double pi = 3.1415926535;
/********************************************************************/
#define M1 1000000007
#define M2 998244353
#define ll long long
#define pll pair<ll,ll>
#define REP(i,a,b) for(ll i=a;i<b;i++)
#define REPR(i,a,b) for(ll i=b-1;i>=a;i--)
#define forr(i,n) for(ll i=0;i<n;i++)
#define F first
#define S second
#define pb push_back
#define DB pop_back
#define mp make_pair
#define MT make_tuple
#define V(a) vector<a>
#define vi vector<ll>
#define endl '\n'
#define ce(ele) cout<<ele<<' '
#define cs(ele) cout<<ele<<'\n'
#define CASE(t) ll t; cin>>t; while(t--)
void FAST() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
ll gcd(ll x, ll y) {
	if (x == 0) return y;
	return gcd(y % x, x);
}

ll powM(ll x, ll y, ll m) {
	ll ans = 1, r = 1;
	x %= m;
	while (r > 0 && r <= y)
	{
		if (r & y)
		{
			ans *= x;
			ans %= m;
		}
		r <<= 1;
		x *= x;
		x %= m;
	}
	return ans;
}

map<long long, long long> factorize(long long n) {
	map<long long, long long> ans;
	for (long long i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			ans[i]++;
			n /= i;
		}
	}
	if (n > 1) {
		ans[n]++;
		n = 1;
	}
	return ans;
}
/* **********END OF TEMPLATE*********** */
const int mx = 1e5 + 5;


//dfs
queue<int> q;
//bool visited[N];
ll ddd[mx] = {};
vector<ll>  adj[mx];
bool visited[mx];
/*
void bfs(int x) {
	visited[x] = true;
	distance[x] = 0;
	q.push(x);
	while (!q.empty()) {
		int s = q.front(); q.pop();
		// process node s
		//CODE HERE:
		for (auto u : adj[s]) {
			if (visited[u]) continue;
			visited[u] = true;
			distance[u] = distance[s] + 1;
			q.push(u);
		}
	}
}
*/
int main() {
	FAST();
	ll n, m;
	cin >> n >> m;
	while (m--) {
		ll a, b;
		cin >> a >> b;
		a--;
		b--;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	int x = 0;
	visited[x] = true;
	ddd[x] = 0;
	q.push(x);
	while (!q.empty()) {
		int s = q.front(); q.pop();
		// process node s
		//CODE HERE:
		for (auto u : adj[s]) {
			if (visited[u]) continue;
			visited[u] = true;
			ddd[u] = ddd[s] + 1;
			q.push(u);
		}
	}
	bool ok = true;
	for (int i = 0; i < n; i++) {
		ok &= visited[i];
	}
	if (!ok) {
		cout << "No";
	}
	else {
		cout << "Yes\n";
		for (int i = 1; i < n; i++) {
			ll rr = INT_MAX, city = -1;
			for (int x : adj[i]) {
				if (ddd[x] < rr) {
					rr = ddd[x];
					city = x;
				}
			}
			cout << city + 1 << endl;
		}
	}
	return 0;
}