#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using V = vector<int>;
using VV = vector<V>;
using VVV = vector<VV>;
using VL = vector<ll>;
using VVL = vector<VL>;
using VVVL = vector<VVL>;
template<class T> using VE = vector<T>;
template<class T> using P = pair<T, T>;
#define rep(i,n) for(int i=0;i<(n);i++)
#define rep1(i,n) for(int i=1;i<=(n);i++)
#define REP(i,k,n) for(int i=(k);i<(n);i++)
#define all(a) (a).begin(),(a).end()
#define output(x,y) cout << fixed << setprecision(y) << x << endl;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
const ll MOD = 1e9 + 7;
// const ll MOD = 998244353;
ll upper = MOD + MOD;
ll under = -upper;
ll UPPER = MOD * MOD;
ll UNDER = -UPPER;
const long double pi = 3.141592653589793;
const int N = 101010;
VE<P<int>> e[N];
void dijkstra(int r, VL& dist) {
	priority_queue<P<int>, VE<P<int>>,greater<P<int>>> pq;
	pq.push(make_pair(0, r));
	while (!pq.empty()) {
		int nd = pq.top().first;
		int nv = pq.top().second;
		pq.pop();
		if (dist[nv] < nd) continue;
		rep(i, e[nv].size()) {
			int nxtv = e[nv][i].first;
			int nxtd = e[nv][i].second;
			if (chmin(dist[nxtv], dist[nv] + nxtd)) pq.push(make_pair(dist[nxtv], nxtv));
		}
	}
}
int main() {
	int n, E, r;
	cin >> n >> E >> r;
	rep(i, E) {
		int a, b, c;
		cin >> a >> b >> c;
		e[a].push_back(make_pair(b, c));
	}
	VL dist(n, UPPER);
	dist[r] = 0;
	dijkstra(r, dist);
	rep(i, n) {
		if (dist[i] == UPPER) cout << "INF" << endl;
		else cout << dist[i] << endl;
	}
	return 0;
}
