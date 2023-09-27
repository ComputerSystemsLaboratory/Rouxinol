#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>

using namespace std;
using ll = long long int;
#define rep(i,n) for(int i = 0; i < n; i++)
#define FOR(i, a, b)  for(int i = (a); i < (b) ; i++)
#define pb push_back
#define SORT(v,n) sort(v, v+n)
#define ALL(x) (x).begin(),(x).end()
#define debug(x) cerr << #x << ": " << x << '\n'
#define elif else if
#define itn ll
#define int ll
//const int INF = 100100100;
const int INF = (1LL<<32);
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
int dx[8] = { 1, 0, -1, 0, 1, -1, -1, 1 };
int dy[8] = { 0, 1, 0, -1, 1, 1, -1, -1 };
typedef vector<vector<int>> vvi;
typedef vector<vector<vector<int>>> vvvi;

static  const int MAX = 100;

int d[MAX][MAX];
int n;
void floyd() {
	rep(k,n){
		rep(i, n) {
			if (d[i][k] == INF) continue;
			rep(j, n) {
				if (d[k][j] == INF) continue;
				d[i][j] = min(d[i][k] + d[k][j], d[i][j]);
			}
		}
	}
}

signed main() {
	ios::sync_with_stdio(false);
	int v, e, u, c;
	cin >> n >> e;
	//自分へのコストは0にする
	rep(i,n) {
		rep(j, n) {
			d[i][j] = ((i == j) ? 0 : INF);
		}
	}

	rep(i, e) {
		cin >> u >> v >>c;
		d[u][v] = c;
	}

	floyd();
	bool negative = false;
	rep(i, n) if (d[i][i] < 0) negative = true;
	if (negative)
		cout << "NEGATIVE CYCLE\n";
	else
	{
		rep(i, n) {
			rep(j, n) {
				if (j) cout << ' ';
				if (d[i][j] == INF) cout << "INF";
				else
					cout << d[i][j];
			}
			cout << '\n';
		}
	}
	return 0;
}
