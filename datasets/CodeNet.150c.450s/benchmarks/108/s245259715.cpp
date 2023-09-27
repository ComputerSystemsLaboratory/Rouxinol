#include <bits/stdc++.h>
using namespace std;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
#define P(x) cout << (x) << endl
#define p(x) cout << (x)
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define vv(type, c, m, n, i) vector<vector<type>> c(m, vector<type>(n, i));
#define rep(i,a,n) for(int i=(a), i##_len=(n); i<i##_len; ++i)
#define rrep(i,a,n) for(int i=(a), i##_len=(n); i>i##_len; --i)
#define len(x) ((int)(x).size())
#define mp make_pair
#define eb emplace_back
typedef long long ll;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<bool> vb;
constexpr int MAX = 101;
constexpr int INFTY = (1<<21);
int n;
vv(int, M, MAX, MAX, 0);
vi d(MAX, INFTY);
inline void bfs(int s) {
	deque<int> dq;
	dq.eb(s);
	d[s] = 0;
	int u;
	while(!dq.empty()) {
		u = dq.front(); dq.pop_front();
		rep(v, 0, n) {
			if(M[u][v] == 0 || d[v] != INFTY) continue;
			d[v] = d[u] + 1;
			dq.eb(v);
		}
	}
	rep(i, 0, n) {
		cout << i + 1 << " " << ((d[i] == INFTY) ? (-1) : d[i]) << endl;
	}
}
int main() {
	cin >> n;
	int u, k, v;
	rep(i, 0, n) {
		cin >> u >> k;
		--u;
		rep(j, 0, k) {
			cin >> v;
			M[u][--v] = 1;
		}
	}
	bfs(0);
	return 0;
}