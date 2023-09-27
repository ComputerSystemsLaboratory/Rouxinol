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
int main() {
	int n; cin >> n;
	char m;
	int k;
	VV(int, v, 4, 14, 0);
	map<char, int> mc;
	mc['S'] = 0;
	mc['H'] = 1;
	mc['C'] = 2;
	mc['D'] = 3;
	map<int, char> mn;
	mn[0] = 'S';
	mn[1] = 'H';
	mn[2] = 'C';
	mn[3] = 'D';
	rep(i, 0, n) {
		cin >> m >> k;
		++v[mc[m]][k];
	}
	rep(i, 0, 4) {
		rep(j, 1, 14) {
			if (v[i][j] == 0) {
				cout << mn[i] << " " << j << endl;
			}
		}
	}
	return 0;
}