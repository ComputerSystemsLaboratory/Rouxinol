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
int n, k;
vi v;
inline int check(ll P) {
	int cnt = 0;
	rep(j, 0, k) {
		ll s = 0;
		while(s + v[cnt] <= P) {
			s += v[cnt];
			if(++cnt == n) return n;
		}
	}
	return cnt;
}
inline int f() {
	ll left = 0;
	ll right = n * *max_element(all(v));
	ll mid;
	while (right - left > 1) {
		mid = (left + right) / 2;
		int v = check(mid);
		if(v >= n) right = mid;
		else left = mid;
	}
	return right;
}
int main() {
	cin >> n >> k;
	v.resize(n); rep(i, 0, n) cin >> v[i];
	P(f());
	return 0;
}