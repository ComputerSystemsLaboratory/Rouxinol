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
const int dx[4] = { 1, 0, -1, 0};
const int dy[4] = { 0, 1, 0, -1};

using LL = long long int;
using LD = long double;
using pii = pair<int, int>;
using pll = pair<LL, LL>;
using pdd = pair<double, double>;
using vi = vector<int>;
using vl = vector<LL>;
using vd = vector<double>;
using vs = vector<string>;
using vvi = vector<vi>;

//==============================================
int n;
vi color, D, P;
vvi M;

int solve() {
	D[0] = 0;

	int u, minV;
	while (true) {
		u = -1;
		minV = INF;
		REP(i, n) {
			if (color[i] != 2 && D[i] < minV) {
				u = i;
				minV = D[i];
			}
		}

		if (u == -1) break;
		color[u] = 2;

		REP(i, n) {
			if (color[i] != 2 && M[u][i] != INF && D[i] > M[u][i]) {
				D[i] = M[u][i];
				P[i] = u;
				color[i] == 1;
			}
		}
	}

	int sum = 0;
	REP(i, n) {
		if (P[i] != -1) {
			sum += M[i][P[i]];
		}
	}

	return sum;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;

	color.resize(n);
	D.resize(n, INF);
	P.resize(n, -1);
	M.resize(n, vi(n, INF));

	int edge;
	REP(i, n) {
		REP(j, n) {
			cin >> edge;
			M[i][j] = (edge == -1 ? INF : edge);
		}
	}

	cout << solve() << "\n";
	return 0;
}