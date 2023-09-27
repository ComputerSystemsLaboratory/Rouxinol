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

int W, H;
bool inRange(int x, int y) {
	return 0 <= x && x < W && 0 <= y && y < H;
}
int dx[2] = {1, 0};
int dy[2] = {0, 1};
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	while ( cin >> W >> H, W || H ) {
		int N; cin >> N;
		ll dp[20][20] = {0}; dp[0][0] = 1;
		REP(i, N) {
			int x, y; cin >> x >> y; --x, --y;
			if ( inRange(x, y) ) {
				dp[y][x] = -1;
			}
		}
		REP(i, W+H) {
			REP(j, i+1) {
				int x = j, y = i-j;
				if ( !inRange(x, y) ) continue;
				if ( !dp[y][x] ) continue;
				if ( dp[y][x] < 0 ) continue;
				REP(d, 2) {
					int nx = x + dx[d], ny = y + dy[d];
					if ( !inRange(nx, ny) ) continue;
					if ( dp[ny][nx] < 0 ) continue;
					dp[ny][nx] += dp[y][x];
				}
			}
		}
/*
		REP(i, H) {
			REP(j, W) {
				cout << dp[i][j] << " ";
			}
			cout << endl;
		}
*/
		cout << dp[H-1][W-1] << endl;
	}
}