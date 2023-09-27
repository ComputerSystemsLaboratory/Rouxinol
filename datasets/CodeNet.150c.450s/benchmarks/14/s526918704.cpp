#include <bits/stdc++.h>
using namespace std;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
#define P(x) cout << (x) << endl
#define p(x) cout << (x)
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define VV(type, c, m, n, i) vector<vector<type>> c(m, vector<type>(n, i));
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
inline void f(int i, int x) {
	if ( x % 10 == 3 ){
		cout << " " << i;
		return;
	}
	x /= 10;
	if ( x ) f(i, x);
}
int main() {
	int n; cin >> n;
	rep(i, 3, n + 1) {
		int x = i;
		if ( x % 3 == 0 ){
			cout << " " << i;
			continue;
		}
		f(i, x);
	}
	P("");
	return 0;
}