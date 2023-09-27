#include "bits/stdc++.h"

#define ALL(a) (a).begin(),(a).end()
#define SORT(c) sort((c).begin(),(c).end())
#define DESCSORT(c) sort(c.begin(), c.end(), greater<int>())

using namespace std;

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
using vvd = vector<vd>;
using vs = vector<string>;
using vb = vector<bool>;
using vvb = vector<vb>;

const int INF = (1 << 30) - 1;
const LL INF64 = ((LL)1 << 62) - 1;
const double PI = 3.1415926535897932384626433832795;

const int dy[] = { 0, 1, 0, -1 };
const int dx[] = { 1, 0, -1, 0 };

int gcd(int x, int y) { return y ? gcd(y, x % y) : x; }
LL gcd(LL x, LL y) { return y ? gcd(y, x % y) : x; }

string solve(int m, int f, int r) {
	if (m == -1 || f == -1)return "F";
	
	if (m + f >= 80) {
		return "A";
	} else if (m + f >= 65) {
		return "B";
	} else if (m + f >= 50 || r >= 50) {
		return "C";
	} else if (m + f >= 30) {
		return "D";
	} else {
		return "F";
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int m, f, r;
	while (cin >> m >> f >> r) {
		if (m == -1 && f == -1 && r == -1) break;
		cout << solve(m, f, r) << endl;
	}
	return 0;
}