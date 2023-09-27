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
using vvi = vector<vi>;
using vll = vector<LL>;

//==============================================

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	
	int n;
	cin >> n;

	vi p(150);
	REP3(i, 1, n) {
		cin >> p[i - 1] >> p[i];
	}

	vvi m(150, vi(150));
	REP3(i, 1, n) m[i][i] = 0;
	REP3(l, 2, n) {
		REP3(i, 1, n - l + 1) {
			int j = i + l - 1;
			m[i][j] = (1 << 21);
			REP3(k, i, j - 1) {
				m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]);
			}
		}
	}

	cout << m[1][n] << "\n";
	return 0;
}