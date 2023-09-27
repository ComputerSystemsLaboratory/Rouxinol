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
int main() {
	deque<int> s1;
	deque<pair<int, int>> s2;
	char c;
	int sum = 0;
	for(int i = 0; cin >> c; ++i) {
		if(c == '\\') s1.eb(i);
		else if(c == '/' && len(s1) > 0) {
			int j = s1.back(); s1.pop_back();
			int a = i - j;
			sum += a;
			while(len(s2) > 0 && s2.back().first > j) {
				a += s2.back().second; s2.pop_back();
			}
			s2.eb(mp(j, a));
		}
	}
	P(sum);
	p(len(s2));
	rep(i, 0, len(s2)) {
		cout << " " << s2[i].second;
	}
	P("");
	return 0;
}