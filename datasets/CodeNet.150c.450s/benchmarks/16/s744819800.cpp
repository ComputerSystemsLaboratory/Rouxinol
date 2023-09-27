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
	string s; cin >> s;
	int N = s.size();
	vector<int> v(N+1, 0);
	REP(i, N) {
		int d = s[i] == '/' ? 1 : s[i] == '_' ? 0 : -1;
		v[i+1] = v[i]+d;
	}
	vector<int> h(N);
	REP(i, N) {
		h[i] = max(v[i], v[i+1]);
	}
	int hm = inf;
	REP(i, N) hm = min(hm, h[i]);
	REP(i, N) h[i] -= hm;
	map<int, set<int> > m;
	REP(i, N) {
		m[h[i]].insert(i);
	}
	vector< pair<P, int> > a;
	REP(i, N) {
		if (s[i] == '\\') {
			set<int>& x = m[h[i]];
			auto it = x.upper_bound(i);
			if (it != x.end()) {
//				cout << i << " " << *it << endl;
				a.pb( pair<P, int>(P(i, *it), *it-i) );
			}
		}
	}
	auto it = a.begin();
	while (it != a.end()) {
		auto nxt = it; ++nxt;
		if (nxt == a.end()) break;
		if (nxt->first.second <= it->first.second) {
			nxt->first = it->first;
			nxt->second += it->second;
			it->second = 0;
		}
		++it;
	}
	ll sum = 0;
	vector<ll> ans;
	EACH(p, a) {
		if (p.second == 0) continue;
		ans.pb( p.second );
		sum += p.second;
	}
	cout << sum << endl;
	cout << ans.size();
	REP(i, ans.size()) {
		cout << " " << ans[i];
	}
	cout << endl;
}