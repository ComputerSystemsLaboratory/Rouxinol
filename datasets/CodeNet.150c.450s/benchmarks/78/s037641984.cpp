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

const int maxN = 1000000;
int dp1[maxN+1] = {0}, dp2[maxN+1] = {0};
int temp[maxN+1];

typedef long long ll;

int f(ll n) {
	return n * (n+1) * (n+2) / 6;
}

void knapsack(int dp[], const vector<int>& v) {
	int *now = dp, *next = temp;
	fill(now, now+maxN+1, inf); now[0] = 0;
	for (int i = 0; i < v.size(); ++i) {
		fill(next, next+maxN+1, inf);
		for (int j = 0; j <= maxN; ++j) {
			next[j] = min(next[j], now[j]);
			int nj = j + v[i];
			if (nj <= maxN) {
				now[nj] = min(now[nj], now[j]+1);
			}
		}
		swap(now, next);
	}
	for (int i = 0; i <= maxN; ++i) {
		dp[i] = now[i];
	}
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	vector<int> v1, v2;
	REP(i, maxN+1) {
		if ( f(i) >= maxN ) break;
		v1.push_back( f(i) );
		if ( f(i) % 2 == 1 ) {
			v2.push_back( f(i) );
		}
	}
	knapsack(dp1, v1);
	knapsack(dp2, v2);

	int N;
	while (cin >> N, N) {
		cout << dp1[N] << " " << dp2[N] << endl;
	}
}