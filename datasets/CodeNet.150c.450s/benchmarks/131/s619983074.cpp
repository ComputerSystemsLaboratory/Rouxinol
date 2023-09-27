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

string toString(int n) {
	stringstream ss; ss << n;
	string res; ss >> res;
	return res;
}
int toInt(string s) {
	stringstream ss; ss << s;
	int res; ss >> res;
	return res;
}
string fix(string n, int keta) {
	while (n.size() < keta) {
		n = "0" + n;
	}
	return n;
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	string a; int L;
	while (cin >> a >> L, a != "0" || L) {
		a = fix(a, L);
		map<string, int> r; r[a] = 0;
		int ans = 0;
		while (++ans) {
			string m = a, M = a;
			sort(ALL(M), greater<char>());
			sort(ALL(m));
			a = fix(toString( toInt(M) - toInt(m) ), L);
			if (r.count(a) > 0) {
				break;
			}
			r[a] = ans;
		}
		cout << r[a] << " " << toInt(a) << " " << ans-r[a] << endl;
	}
}