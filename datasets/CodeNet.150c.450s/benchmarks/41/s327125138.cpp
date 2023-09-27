#include <bits/stdc++.h>
using namespace std;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
#define P(x) cout << (x) << "\n"
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
const constexpr int MAX = 100;
const constexpr ll INF = 1LL<<32;
int n;
vv(ll, d, MAX, MAX, INF);
inline void floyd() {
	rep(k, 0, n) {
		rep(i, 0, n) {
			if(d[i][k] == INF) continue;
			rep(j, 0, n) {
				if(d[k][j] == INF) continue;
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
}
int main() {
	int e; cin >> n >> e;
	rep(i, 0, n) d[i][i] = 0LL;
	int u, v, c;
	rep(i, 0, e) {
		cin >> u >> v >> c;
		d[u][v] = c;
	}
	floyd();
	rep(i, 0, n) if(d[i][i] < 0) { P("NEGATIVE CYCLE"); return 0; }
	rep(i, 0, n) {
		rep(j, 0, n) {
			if(d[i][j] == INF) p("INF");
			else p(d[i][j]);
			p(j + 1 == n ? "\n" : " ");
		}
	}
	return 0;
}