#include <bits/stdc++.h>
#define range(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, a) range(i, 0, a)
using namespace std;
const int INF = sizeof(int) == sizeof(long long) ? 1e18 : 1e9;
const int MOD = 1000000007;
const long double EPS = 1e-8;

int main() {
	int n;
	while(cin >> n, n) {
		map <pair <int, int>, bool> mp;
		rep (i, n) {
			int x, y;
			cin >> x >> y;
			mp[make_pair(x, y)] = true;
		}
		int m;
		cin >> m;
		pair <int, int> now = {10, 10};
		set <pair <int, int>> st;
		if (mp.find({10, 10}) != mp.end()) st.insert({10, 10});
		rep (i, m) {
			char d;
			int l;
			cin >> d >> l;
			rep (j, l) {
				if (d == 'N') now.second += 1;
				if (d == 'S') now.second -= 1;
				if (d == 'W') now.first -= 1;
				if (d == 'E') now.first += 1;
				if (mp.find(now) != mp.end()) st.insert(now);
			}
		}
		cout << (st.size() == n ? "Yes" : "No") << endl;
	}
	return 0;
}
