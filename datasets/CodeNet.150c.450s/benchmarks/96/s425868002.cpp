#include <bits/stdc++.h>

using ll = long long;
#define int long long

// [a -> b-1]
#define reps(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
// [0 -> a-1]
#define rep(i, a) reps(i, 0, (a))
// [a-1 -> b]
#define rreps(i, a, b) for (int i = (int)((a)-1); i >= (int)(b); i--)
// [a-1 -> 0]
#define rrep(i, a) rreps(i, a, 0)
#define all(v) (v).begin(), (v).end()
// next_permutation(all(v))
#define PERM(v) next_permutation(all(v))
/*sort(all(v));
 * (v).erase(unique(all(v)), v.end())*/
#define UNIQUE(v)\
	sort(all(v));\
	(v).erase(unique(all(v)), v.end())
#define MINV(v) min_element(all(v))
#define MAXV(v) max_element(all(v))
#define MIN3(a, b, c) min(min(a, b), c)
#define MIN4(a, b, c, d) min(MIN3(a, b, c), d)
#define MIN5(a, b, c, d, e) min(MIN4(a, b, c, d), e)
#define MIN6(a, b, c, d, e, f) min(MIN5(a, b, c, d, e), f)
#define MAX3(a, b, c) max(max(a, b), c)
#define MAX4(a, b, c, d) max(MAX3(a, b, c), d)
#define MAX5(a, b, c, d, e) max(MAX4(a, b, c, d), e)
#define MAX6(a, b, c, d, e, f) max(MAX5(a, b, c, d, e), f)
// b is [a, c)
#define RANGE(a, b, c) ((a) <= (b) && (b) < (c))
// c is [a, e) && d is [b, f)
#define RANGE2D(a, b, c, d, e, f) (RANGE((a), (c), (e)) && RANGE((b), (d), (f)))
#define chmin(a, b) a = min(a, (b))
#define chmin3(a, b, c) a = MIN3(a, (b), (c))
#define chmin4(a, b, c, d) a = MIN4(a, (b), (c), (d))
#define chmin5(a, b, c, d, e) a = MIN5(a, (b), (c), (d), (e))
#define chmin6(a, b, c, d, e, f) a = MIN6(a, (b), (c), (d), (e), (f))
#define chmax(a, b) a = max(a, (b))
#define chmax3(a, b, c) a = MAX3(a, (b), (c))
#define chmax4(a, b, c, d) a = MAX4(a, (b), (c), (d))
#define chmax5(a, b, c, d, e) a = MAX5(a, (b), (c), (d), (e))
#define chmax6(a, b, c, d, e, f) a = MAX6(a, (b), (c), (d), (e), (f))
#define fcout cout << fixed << setprecision(15)
#define YES(f) cout << ((f) ? YES_STR : NO_STR) << endl;

using namespace std;

vector<vector<char>> v(10);

string solve() {
	string s; cin >> s;
	string res;
	char c = 0;
	int p = 0;
	rep(i, s.size()) {
		if (s[i] == '0') {
			if (c) res += c;
			p = c = 0;
		} else {
			c = v[s[i]-'0'][p];
			p = (p + 1) % v[s[i]-'0'].size();
		}
	}
	return res;
}

signed main() {
	int n; cin >> n;
	v[1] = vector<char>{'.', ',', '!', '?', ' '};
	v[2] = vector<char>{'a', 'b', 'c'};
	v[3] = vector<char>{'d', 'e', 'f'};
	v[4] = vector<char>{'g', 'h', 'i'};
	v[5] = vector<char>{'j', 'k', 'l'};
	v[6] = vector<char>{'m', 'n', 'o'};
	v[7] = vector<char>{'p', 'q', 'r', 's'};
	v[8] = vector<char>{'t', 'u', 'v'};
	v[9] = vector<char>{'w', 'x', 'y', 'z'};
	while (n--) cout << solve() << endl;
}


