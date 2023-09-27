#include "bits/stdc++.h"
using namespace std;
#ifdef _DEBUG
#include "dump.hpp"
#else
#define dump(...)
#endif

//#define int long long
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(c) begin(c),end(c)
const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)(1e9) + 7;
const double PI = acos(-1);
const double EPS = 1e-9;
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }

signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	stack<int>s1; stack<pair<int, int>>s2;
	int sum(0);
	string in; cin >> in;
	rep(i, 0, in.size()) {
		if (in[i] == '\\') {
			s1.push(i);
		}
		else if (!s1.empty() && in[i] == '/') {
			int b = s1.top(); s1.pop();
			int x = i - b;
			sum += x;
			while (!s2.empty() && b < s2.top().first) {
				x += s2.top().second;
				s2.pop();
			}
			s2.push(make_pair(b, x));
		}
	}
	cout << sum << endl;
	vector<int>ans;
	while (!s2.empty()) {
		ans.push_back(s2.top().second);
		s2.pop();
	}
	reverse(all(ans));
	cout << ans.size();
	rep(i, 0, ans.size())cout << ' ' << ans[i];
	cout << endl;
	return 0;
}