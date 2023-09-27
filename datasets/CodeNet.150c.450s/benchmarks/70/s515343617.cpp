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

int solve(int m, int d) {
	int y = 2004;
	if (m <= 2) {
		m += 12;
		y--; 
	}
	return (y + y / 4 - y / 100 + y / 400 + (13 * m + 8) / 5 + d) % 7;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int m, d;
	while (cin >> m >> d) {
		if (m == 0 && d == 0) break;

		switch (solve(m, d)) {
			case 0:
				cout << "Sunday" << endl;
				break;
			case 1:
				cout << "Monday" << endl;
				break;
			case 2:
				cout << "Tuesday" << endl;
				break;
			case 3:
				cout << "Wednesday" << endl;
				break;
			case 4:
				cout << "Thursday" << endl;
				break;
			case 5:
				cout << "Friday" << endl;
				break;
			case 6:
				cout << "Saturday" << endl;
				break;
		}
	}
	return 0;
}