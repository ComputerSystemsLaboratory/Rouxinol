#include <bits/stdc++.h>
using namespace std;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
#define P(x) cout << (x) << endl
#define p(x) cout << (x)
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define vv(type, c, m, n, i) vector<vector<type>> c(m, vector<type>(n, i));
#define vvv(type, c, m, n, l, i) vector<vector<vector<type>>> c(m, vector<vector<type>>(n, vector<type>(l, i)));
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
int main() {
	int r, c; cin >> r >> c;
	vv(int, v, r + 1, c + 1, 0);
	rep(i, 0, r) {
		rep(j, 0, c) {
			cin >> v[i][j];
		}
		v[i][c] = accumulate(all(v[i]), 0);
	}
	rep(j, 0, c + 1) {
		int ans = 0;
		rep(i, 0, r) {
			ans += v[i][j];
		}
		v[r][j] = ans;
	}
	rep(i, 0, r + 1) {
		rep(j, 0, c + 1) {
			if(j != 0) cout << " ";
			cout << v[i][j];
		}
		P("");
	}
	return 0;
}