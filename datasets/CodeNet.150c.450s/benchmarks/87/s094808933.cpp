#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll, ll> P;

#define EACH(i,a) for (auto& i : a)
#define FOR(i,a,b) for (ll i=(a);i<(b);i++)
#define RFOR(i,a,b) for (ll i=(b)-1;i>=(a);i--)
#define REP(i,n) for (ll i=0;i<(n);i++)
#define RREP(i,n) for (ll i=(n)-1;i>=0;i--)
#define debug(x) cout<<#x<<": "<<x<<endl
#define pb push_back
#define ALL(a) (a).begin(),(a).end()

const ll linf = 1e18;
const int inf = 1e9;
const double eps = 1e-12;
const double pi = acos(-1);

template<typename T>
istream& operator>>(istream& is, vector<T>& vec) {
	EACH(x,vec) is >> x;
	return is;
}
template<typename T>
ostream& operator<<(ostream& os, vector<T>& vec) {
	REP(i,vec.size()) {
		if (i) os << " ";
		os << vec[i];
	}
	return os;
}
template<typename T>
ostream& operator<<(ostream& os, vector< vector<T> >& vec) {
	REP(i,vec.size()) {
		if (i) os << endl;
		os << vec[i];
	}
	return os;
}

const int W = 5;
int H;
vector< vector<int> > m;
ll check() {
	ll res = 0;
	// erase and add score
	REP(y, H) {
		REP(x, W) {
			int l = x, r = x;
			FOR(i, x, W) {
				if (m[y][x] != m[y][i]) break;
				r = i;
			}
			++r;
			if (r-l < 3) continue;
			res += (ll)(r-l) * m[y][x];
			FOR(i, x, r) {
				m[y][i] = 0;
			}
		}
	}
//	cout << m << endl;
//	cout << endl;
	// fall
	REP(t, H) {
		RFOR(y, 1, H) {
			REP(x, W) {
				if (m[y][x] == 0) {
					m[y][x] = m[y-1][x];
					m[y-1][x] = 0;
				}
			}
		}
	}
//	cout << m << endl;
//	cout << endl;
	return res;
}
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	while (cin >> H, H) {
		m = vector< vector<int> >(H, vector<int>(W, 0));
		cin >> m;
		ll ans = 0;
		while (1) {
			int c = check();
			ans += c;
			if (c == 0) break;
		}
		cout << ans << endl;
	}
}