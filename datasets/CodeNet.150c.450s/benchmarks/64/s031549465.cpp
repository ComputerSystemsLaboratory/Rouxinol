#include <bits/stdc++.h>
using namespace std;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
#define P(x) cout << (x) << endl
#define p(x) cout << (x)
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define vv(type, c, m, n, i) vector<vector<type>> c(m, vector<type>(n, i));
#define rep(i,a,n) for(int i=(a), i##_len=(n); i<i##_len; ++i)
#define rrep(i,a,n) for(int i=(a), i##_len=(n); i>i##_len; --i)
#define len(x) ((int)(x).size())
#define mp make_pair
#define eb emplace_back
typedef long long ll;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<bool> vb;
vb dp(10000);
int main() {
	dp[0] = true;
	int n; cin >> n;
	vi a(n); rep(i, 0, n) cin >> a[i];
	rep(i, 0, n) {
		rrep(j, 2000, -1) {
			if(dp[j]) dp[j + a[i]] = true;
		}
	}
	int q; cin >> q;
	int m;
	rep(i, 0, q) {
		cin >> m;
		P(dp[m] ? "yes" : "no");
	}
	return 0;
}