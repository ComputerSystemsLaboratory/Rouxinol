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
/*
template<class... T>
ostream& operator<<(ostream& os, tuple<T...>& t) {
	for (size_t i = 0; i < tuple_size< tuple<T...> >::value; ++i) {
		if (i) os << " ";
		os << get<0>(t);
	}
	return os;
}
*/
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

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
    int n, m;
    while ( cin >> n >> m, n || m ) {
        vector<int> a(n), b(m); cin >> a >> b;
        int sa = 0, sb = 0;
        REP(i, n) sa += a[i];
        REP(i, m) sb += b[i];
        int tgt = sb - sa;
        int a0 = -1, a1 = -1, a2 = 1e9;
        REP(i, n) REP(j, m) {
            if (2*(a[i]-b[j]) == -tgt && a[i]+b[j] < a2) {
                a0 = a[i], a1 = b[j], a2 = a[i]+b[j];
            }
        }
        if (a0 < 0) cout << -1 << endl;
        else cout << a0 << " " << a1 << endl;
    }
}