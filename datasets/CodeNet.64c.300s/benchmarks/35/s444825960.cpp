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
const int INF = 100100100;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
///                →,↑,←,↓,↗,↖,↙,↘
int dx[8] = { 1, 0, -1, 0, 1, -1, -1, 1 };
int dy[8] = { 0, 1, 0, -1, 1, 1, -1, -1 };

int h[1010];

int M[110][110];

signed main() {
	ios::sync_with_stdio(false);
	int i, n;
	cin >> n;
	rep(i, n) {
		int u, k;
		cin >> u >> k;
		int j;
		rep(j, k) {
			int v;
			cin >> v;
			M[u][v] = 1;
		}
	}

	rep(i, n) {
		int j;
		rep(j,n){
			if (j) cout << ' ';
			cout << M[i + 1][j + 1];
		}
		cout << endl;
	}
	return 0;
}
