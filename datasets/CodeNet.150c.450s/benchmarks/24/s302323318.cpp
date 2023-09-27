#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main() {
	int n, m;
	while (cin >> n >> m && n + m) {
		vector<pair<int,int> > pd(n);
		int ans = 0;
		for (int i = 0; i < n; ++i) {
			cin >> pd[i].second >> pd[i].first;
			ans += pd[i].first * pd[i].second;
		}
		sort(pd.begin(), pd.end(), greater<pair<int, int> >());
		int tmp = 0;
		while (m--) {
			if (pd[tmp].second == 0) tmp++;
			if(tmp >= n) break;
			ans -= pd[tmp].first; pd[tmp].second--;
		}
		cout << ans << endl;
	}
	
	return 0;
}
