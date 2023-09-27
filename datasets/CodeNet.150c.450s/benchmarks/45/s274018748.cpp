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
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vl = vector<LL>;
using vvl = vector<vl>;
using vvvl = vector<vvl>;
using vd = vector<double>;
using vs = vector<string>;
using vb = vector<bool>;

//==============================================
LL m, n;
const LL MOD = 1000000007;

LL solve() {
	LL r = 1;

	for (; n > 0; n >>= 1) {
		if (n & 1) r = (r * m) % MOD;
		m = (m * m) % MOD;
	}

	return r;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> m >> n;
	cout << solve() << "\n";
	return 0;
}