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
vi a, b, c;
int n;
inline void CountingSort(int k) {
	rep(i, 0, n) ++c[a[i]];
	rep(i, 1, k + 1) c[i] = c[i] + c[i - 1];
	rrep(j, n - 1, -1) {
		b[--c[a[j]]] = a[j];
	}
}
int main() {
	cin >> n;
	a.resize(n); rep(i, 0, n) cin >> a[i];
	b.resize(n);
	int max_a = *max_element(all(a));
	c.resize(max_a + 1);
	CountingSort(max_a);
	rep(i, 0, n) cout << b[i] << (i + 1 == n ? "\n" : " ");
	return 0;
}