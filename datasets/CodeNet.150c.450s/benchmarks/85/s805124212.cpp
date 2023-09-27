#include<iostream>
#include<math.h>
#include<algorithm>
#include<stdint.h>
#include<vector>
#include<deque>
#include<stack>
#include<string>
#include<cstring>
#include<time.h>
#include<iomanip>
#include<list>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<random>
#include<bitset>
#include <queue>
#include <map>


using namespace std;
using ll = long long;
using ull = unsigned long long;
using uint = unsigned int;
using ldouble = long double;


#define repi(i,a,b) for(ll i = (a); i < (b); i++)
#define rep(i, n) for(ll i = 0; i < (n); ++i)


ll MOD = 1000000007;
ll inf = 1e18;
int main() {
	int N;
	cin >> N;
	vector<ll> R(N + 1);
	vector<ll> C(N + 1);
	repi(i, 1, N + 1) cin >> R[i] >> C[i];
	vector<vector<ll>> dp(N + 1);
	rep(i, N + 1) {
		dp[i].resize(N + 2);
		rep(j, N + 2)dp[i][j] = (i == j || i +1 == j) ? 0 : inf;
	}
	repi(x, 2, N+1) {
		repi(r, 1, N + 1) {
			int l = r + x;
			if (l > N + 1) break;
			ll m = inf;
			repi(j, r + 1, l) {
				m = min(m, dp[r][j] + dp[j][l] + (R[r] * R[j] * C[l - 1]));
			}
			dp[r][l] = m;
		}
	}
	cout << dp[1][N + 1] << endl;
	return 0;
}

