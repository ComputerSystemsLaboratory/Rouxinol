#include <bits/stdc++.h>
using namespace std;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
#define P(x) cout << (x) << "\n"
#define p(x) cout << (x)
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define vv(type, c, m, n, i) vector<vector<type>> c(m, vector<type>(n, i));
#define rep(i,a,n) for(int i=(a), i##_len=(n); i<i##_len; ++i)
#define rrep(i,a,n) for(int i=(a), i##_len=(n); i>i##_len; --i)
#define len(x) ((int)(x).size())
#define mp make_pair
#define eb emplace_back
#define fi first
#define se second
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<bool> vb;
constexpr int NMAX = 50001;
constexpr int INF = (1<<29);
int main() {
	int n, m; cin >> n >> m;
	vi C(21); rep(i, 1, m + 1) cin >> C[i];
	vi T(NMAX, INF);
	T[0] = 0;
	rep(i, 1, m + 1) {
		rep(j, 0, n - C[i] + 1) {
			if(T[j + C[i]] > T[j] + 1) T[j + C[i]] = T[j] + 1;
		}
	}
	P(T[n]);
	return 0;
}