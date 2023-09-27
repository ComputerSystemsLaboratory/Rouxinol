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
int main() {
	int n, k; cin >> n >> k;
	vi v(n); rep(i, 0, n) cin >> v[i];
	ll lo = *max_element(all(v)) - 1;
	ll hi = accumulate(all(v), 0L);
	ll p, P, m;
	while(hi - lo > 1) {
		p = P = (lo + hi) / 2;
		m = 1;
		rep(i, 0, n) {
			if(v[i] > p) {
				p = P;
				++m;
			}
			p -= v[i];
		}
		(m <= k ? hi : lo) = P;
	}
	P(hi);
	return 0;
}