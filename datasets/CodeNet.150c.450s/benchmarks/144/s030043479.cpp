#include <bits/stdc++.h>
using namespace std;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
#define P(x) cout << (x) << endl
#define p(x) cout << (x)
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define vv(type, c, m, n, i) vector<vector<type>> c(m, vector<type>(n, i));
#define vvv(type, c, m, n, l, i) vector<vector<vector<type>>> c(m, vector<vector<type>>(n, vector<type>(l, i)));
#define mat(type, c, m, n) vector<vector<type>> c(m, vector<type>(n));for(auto& r:c)for(auto& i:r)cin>>i;
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
	int n, m, l; cin >> n >> m >> l;
	mat(ll, a, n, m);
	mat(ll, b, m, l);
	vv(ll, c, n, l, 0LL);
	rep(i, 0, n) {
		rep(j, 0, l) {
			rep(k, 0, m) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	rep(i, 0, n) {
		rep(j, 0, l) {
			cout << c[i][j];
			if (j != l - 1) cout << " ";
		}
		P("");
	}
	return 0;
}