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
	int n, q; cin >> n >> q;
	deque<pair<string, int>> dq;
	{string s; int t; rep(i, 0, n) { cin >> s >> t; dq.eb(mp(s,t));}}
	string name;
	int time, ans = 0;
	while(!dq.empty()) {
		tie(name, time) = dq.front(); dq.pop_front();
		if(time <= q) {
			ans += time;
			cout << name << " " << ans << endl;
		} else {
			ans += q;
			time -= q;
			dq.eb(mp(name, time));
		}
	}
	return 0;
}