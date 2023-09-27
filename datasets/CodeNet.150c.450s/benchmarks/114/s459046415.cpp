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
constexpr int INF = 1<<21;
enum Color { WHITE = 0, GRAY, BLACK };
int n;
vv(int, M, MAX, MAX, INF);
inline int prim() {
	vi d(n, INF), t(n, -1), color(n, WHITE);
	d[0] = 0;
	int minv, u;
	while(true) {
		minv = INF;
		u = -1;
		rep(i, 0, n) {
			if(minv > d[i] && color[i] != BLACK) {
				u = i;
				minv = d[i];
			}
		}
		if(u == -1) break;
		color[u] = BLACK;
		rep(v, 0, n) {
			if(color[v] != BLACK && d[v] > M[u][v]) {
				d[v] = M[u][v];
				t[v] = u;
				color[v] = GRAY;
			}
		}
	}
	return accumulate(all(d), 0);
;
}
int main() {
	cin >> n;
	int e;
	rep(i, 0, n) {
		rep(j, 0, n) {
			cin >> e;
			if(e != -1) M[i][j] = e;
		}
	}
	P(prim());
	return 0;
}