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
int n;
vi v;
inline bool f(int i, int t) {
	if(t == 0) return true;
	if(i >= n) return false;
	return f(i + 1, t) || f(i + 1, t - v[i]);
}
int main() {
	cin >> n;
	v.resize(n); rep(i, 0, n) cin >> v[i];
	int m; cin >> m;
	int t;
	rep(i, 0, m) {
		cin >> t;
		P(f(0, t) ? "yes" : "no");
	}
	return 0;
}