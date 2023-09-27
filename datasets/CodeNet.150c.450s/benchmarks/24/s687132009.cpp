#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
typedef pair<int, int> P;	//p, d

int n, m;
P pd[10000];

signed main() {
	int i;
	
	while (cin >> n >> m) {
		if (!n) break;
		for (i = 0; i < n; i++) cin >> pd[i].second >> pd[i].first;
		sort(pd, pd + n, greater<P>());
		
		int ans = 0;
		for (i = 0; i < n; i++) {
			if (m >= pd[i].second) {
				m -= pd[i].second;
			}
			else {
				ans += pd[i].first * (pd[i].second - m);
				m = 0;
			}
		}
		cout << ans << endl;
	}
	
	return 0;
}