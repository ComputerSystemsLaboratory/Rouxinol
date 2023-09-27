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
using vs = vector<string>;
using vvi = vector<vi>;
using vll = vector<LL>;

//==============================================
int n;
vi D;
vvi M;

void print() {
	REP3(i, 1, n) {
		cout << i << " " << ((D[i] == INF) ? -1 : D[i]) << "\n";
	}
}

void antBfs() {
	D[1] = 0;
	queue<int> q;
	q.push(1);

	int u;
	while (!q.empty()) {
		u = q.front(); q.pop();
		REP3(i, 1, n) {
			if (M[u][i] == 0) continue;
			if (D[i] != INF) continue;
			D[i] = D[u] + 1;
			q.push(i);
		}
	}

	print();
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;

	D.resize(n + 1, INF);
	M.resize(n + 1, vi(n + 1));

	int u, k, v;
	REP3(i, 1, n) {
		cin >> u >> k;
		REP3(j, 1, k) {
			cin >> v;
			M[u][v] = 1;
		}
	}

	antBfs();
	return 0;
}