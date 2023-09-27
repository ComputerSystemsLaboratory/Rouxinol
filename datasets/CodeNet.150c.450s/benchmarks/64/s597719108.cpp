#include <bits/stdc++.h>
using namespace std;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
#define P(x) cout << (x) << endl
#define p(x) cout << (x)
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define vv(type, c, m, n, i) vector<vector<type>> c(m, vector<type>(n, i));
#define rep(i,a,n) for(int i=(a), i##_len=(n); i<i##_len; ++i)
#define rrep(i,a,n) for(int i=(a); i>n; --i)
#define len(x) ((int)(x).size())
#define mp make_pair
#define eb emplace_back
typedef long long ll;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<bool> vb;
bool dp[20][2001];
int main() {
	int n; cin >> n;
	vi v(n); rep(i, 0, n) { cin >> v[i]; dp[i][v[i]] = dp[i][0] = true; }
	rep(j, 1, n) {
		rep(k, 0, 2001){
			dp[j][k] |= dp[j - 1][k];
			if(v[j] < k) dp[j][k] |= dp[j - 1][k - v[j]];
		}
	}
	int m; cin >> m;
	int q;
	rep(i, 0, m) {
		cin >> q;
		P(dp[n - 1][q] ? "yes" : "no");
	}
	return 0;
}