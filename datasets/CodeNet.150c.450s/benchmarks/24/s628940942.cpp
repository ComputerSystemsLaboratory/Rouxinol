#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int n, m;
	while (cin >> n >> m, n) {
		vector<pair<int, int>>v;
		int ans = 0;
		for (int i = 0; i < n; i++) {
			int d, p; cin >> d >> p;
			ans += d*p;
			v.push_back(make_pair(p, d));
		}
		sort(v.begin(), v.end());
		int i = v.size() - 1;
		while (m > 0) {
			ans -= min(m, v[i].second)*v[i].first;
			m -= min(m, v[i].second);
			i--;
			if (i < 0)break;
		}
		cout << ans << endl;
	}
}