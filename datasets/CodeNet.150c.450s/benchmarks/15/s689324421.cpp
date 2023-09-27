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
inline int f(int n, vi s, int q, vi t) {
	int cnt = 0;
	rep(j, 0, q) {
		if(count(all(s), t[j])) ++cnt;
	}
	return cnt;
}
int main() {
	int n; cin >> n;
	vi s(n); rep(i, 0, n) cin >> s[i];
	int q; cin >> q;
	vi t(q); rep(i, 0, q) cin >> t[i];
	P(f(len(s), s, q, t));
	return 0;
}