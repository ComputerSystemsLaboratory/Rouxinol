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
inline int partition(vi &a, int p, int r) {
	int x = a[r];
	int i = p - 1;
	rep(j, p, r) {
		if(a[j] <= x) {
			++i;
			swap(a[i], a[j]);
		}
	}
	swap(a[++i], a[r]);
	return i;
}
int main() {
	int n; cin >> n;
	vi v(n); rep(i, 0, n) cin >> v[i];
	int q = partition(v, 0, n - 1);
	rep(i, 0, n) {
		if(i == q) cout << "[" << v[i] << "]";
		else p(v[i]);
		p(i + 1 == n ? "\n" : " ");
	}
	return 0;
}