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
constexpr int MAX = 1005;
inline int lcs(string X, string Y) {
	vv(int, c, MAX, MAX, 0);
	int m = len(X);
	int n = len(Y);
	int maxl = 0;
	X = ' ' + X;
	Y = ' ' + Y;
	rep(i, 1, m + 1) {
		rep(j, 1, n + 1) {
			if(X[i] == Y[j]) c[i][j] = c[i - 1][j - 1] + 1;
			else c[i][j] = max(c[i - 1][j], c[i][j - 1]);
			if(maxl < c[i][j]) maxl = c[i][j];
		}
	}
	return maxl;
}
int main() {
	int n; cin >> n;
	string s1, s2;
	rep(i, 0, n) {
		cin >> s1 >> s2;
		P(lcs(s1, s2));
	}
	return 0;
}