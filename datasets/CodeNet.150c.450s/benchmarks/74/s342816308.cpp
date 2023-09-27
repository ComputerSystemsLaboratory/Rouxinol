#include <bits/stdc++.h>
using namespace std;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
#define P(x) cout << (x) << "\n"
#define p(x) cout << (x)
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define vv(type, c, m, n, i) vector<vector<type>> c(m, vector<type>(n, i));
#define rep(i,a,n) for(int i=(a), i##_len=(n); i<i##_len; ++i)
#define rrep(i,a,n) for(int i=(a), i##_len=(n); i>i##_len; --i)
#define len(x) ((int)(x).size())
#define mp make_pair
#define eb emplace_back
#define fi first
#define se second
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<bool> vb;
int main() {
	int n, m; cin >> n >> m;
	vi C(m, 0); rep(i, 0, m) cin >> C[i];
	vi dp(n + 1, 1e9);
	dp[0] = 0;
	rep(i, 0, m) {
		rep(j, C[i], n + 1) {
			if(dp[j] > dp[j - C[i]] + 1) {
				dp[j] = dp[j - C[i]] + 1;
			}
		}
	}
	P(dp[n]);
	return 0;
}