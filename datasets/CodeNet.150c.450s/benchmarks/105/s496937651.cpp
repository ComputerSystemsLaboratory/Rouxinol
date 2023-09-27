//include
//------------------------------------------
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>

#include <numeric>
#include <utility>
#include <complex>

#include <sstream>
#include <iostream>
#include <iomanip>

#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <ctime>

#include <stdexcept>

using namespace std;

// type alias
using ll = long long;
using ull = unsigned long long;
using comp = complex<double>;

const ll MOD = 1000000007LL;
const double PI = 3.14159265358979323846;

//conversion
//------------------------------------------
inline int toint(string s) { int v; istringstream sin(s); sin >> v; return v; }
template<class t> inline string tostring(t x) { ostringstream sout; sout << x; return sout.str(); }

// for loop
#define RET(x) return cout << x << endl, 0;
#define REP(i, a, b) for ((i) = (ll)(a);(i) < (ll)(b);(i)++)
#define REPD(i, a, b) for (ll i = (ll)(a);(i) < (ll)(b);(i)++)
#define REPI(v, vs) for (auto v : vs)

//debug
#define DUMP(x)  cerr << #x << " = " << (x) << endl
#define DEBUG(x) cerr << #x << " = " << (x) << " (l" << __line__ << ")" << " " << __file__ << endl

ull normalize(ull a, const vector<pair<ull, ull>>& bases) {
	ull normalized = a;
	ull bit, val;
	REPI(basis, bases) {
		tie(bit, val) = basis;
		if (((normalized >> bit) & 1LL) != 0LL) normalized ^= val;
	}
	return normalized;
}

int solve() {
	ll n;
	cin >> n;

	vector<ull> as(n);
	REPD(i, 0, n) cin >> as[i];

	string s;
	cin >> s;

	vector<pair<ull, ull>> bases;
	reverse(s.begin(), s.end());
	reverse(as.begin(), as.end());
	REPD(i, 0, n) {
		ull normalized = normalize(as[i], bases);
		if (s[i] == '0') {
			if (normalized != 0LL) REPD(bit, 0, 64) if (((normalized >> bit) & 1LL) != 0LL)bases.emplace_back(bit, normalized);
		}
		else if (normalized != 0LL) RET(1);
	}

	RET(0);
}

//main function
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	ll t;
	cin >> t;
	REPD(i, 0, t) solve();

	return 0;
}
