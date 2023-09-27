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
constexpr int MAX = 101;
int main() {
	int n; cin >> n;
	vi z(MAX);
	vv(int, m, MAX, MAX, 0);
	rep(i, 1, n + 1) {
		cin >> z[i - 1] >> z[i];
	}
	int j;
	rep(l, 2, n + 1) {
		rep(i, 1, n - l + 2) {
			j = i + l - 1;
			m[i][j] = 1e8;
			rep(k, i, j) {
				m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + z[i - 1] * z[k] * z[j]);
			}
		}
	}
	P(m[1][n]);
	return 0;
}