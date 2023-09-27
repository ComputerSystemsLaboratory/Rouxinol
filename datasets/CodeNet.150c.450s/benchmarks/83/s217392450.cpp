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
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (b < a) { a = b; return true; } return false; }
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<bool> vb;
int main() {
	int N, W; cin >> N >> W;
	vi v(N), w(N); rep(i, 0, N) cin >> v[i] >> w[i];
	vv(int, dp, N + 1, W + 1, 0);
	rrep(i, N - 1, -1)
		rep(j, 0, W + 1)
			dp[i][j] = (j < w[i]) ? (dp[i + 1][j]) : (max(dp[i + 1][j], dp[i + 1][j - w[i]] + v[i]));
	P(dp[0][W]);
	return 0;
}