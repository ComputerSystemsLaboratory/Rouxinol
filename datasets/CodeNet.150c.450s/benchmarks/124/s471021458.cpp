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
constexpr int MAX = 100;
enum Color { WHITE = 0, GRAY, BLACK };
int n;
vv(int, M, MAX, MAX, INT_MAX);
inline void dijkstra() {
	vi d(MAX, INT_MAX), color(MAX, WHITE);
	d[0] = 0;
	color[0] = GRAY;
	int minv, u;
	while(true) {
		minv = INT_MAX;
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
			if(color[v] != BLACK && M[u][v] != INT_MAX && d[v] > d[u] + M[u][v]) {
				d[v] = d[u] + M[u][v];
				color[v] = GRAY;
			}
		}
	}
	rep(i, 0, n) {
		cout << i << " " << (d[i] == INT_MAX ? -1 : d[i]) << endl;
	}
}
int main() {
	cin >> n;
	int u, k, v, c;
	rep(i, 0, n) {
		cin >> u >> k;
		rep(j, 0, k) {
			cin >> v >> c;
			M[u][v] = c;
		}
	}
	dijkstra();
	return 0;
}