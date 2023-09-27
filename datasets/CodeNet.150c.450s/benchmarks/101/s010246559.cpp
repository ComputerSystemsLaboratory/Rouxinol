#include "bits/stdc++.h"
#include <unordered_set>

#define _CRT_SECURE_NO_WARNINGS

#define REP(i, n) for(decltype(n) i = 0; i < (n); i++)
#define REP2(i, x, n) for(decltype(x) i = (x); i < (n); i++)
#define REP3(i, x, n) for(decltype(x) i = (x); i <= (n); i++)
#define RREP(i, n) for (decltype(n) i = (n) - 1; i >= 0; i--)

#define ALL(a) (a).begin(),(a).end()
#define SORT(c) sort((c).begin(),(c).end())
#define DESCSORT(c) sort(c.begin(), c.end(), greater<int>())

using namespace std;

const int INF = 1000000000;
const double PI = 3.1415926535897932384626433832795;

// N, E, S, W
const int dx[4] = { -1, 0,  1,  0 };
const int dy[4] = { 0, 1,  0, -1 };

using LL = long long int;
using LD = long double;
using pii = pair<int, int>;
using pdd = pair<double, double>;
using pll = pair<LL, LL>;
using vi = vector<int>;
using vd = vector<double>;
using vll = vector<LL>;
using vs = vector<string>;
using vvi = vector<vi>;

//==============================================
int n, m, q;
vi color;
vvi G;

void antDfs(int r, int teamNum) {
	stack<int>S;
	S.push(r);
	color[r] = teamNum;
	while (!S.empty()) {
		int u = S.top(); S.pop();
		REP(i, G[u].size()) {
			int v = G[u][i];
			if (color[v] == -1) {
				color[v] = teamNum;
				S.push(v);
			}
		}
	}
}

void func() {
	int id = 1;
	REP(i, n) {
		if (color[i] == -1) {
			antDfs(i, id++);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> m;

	color.resize(n, -1);
	G.resize(n);

	int a, b;
	REP(i, m) {
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	func();


	cin >> q;

	REP(i, q) {
		cin >> a >> b;
		if (color[a] == color[b]) {
			cout << "yes" << "\n";
		} else {
			cout << "no" << "\n";
		}
	}
	return 0;
}