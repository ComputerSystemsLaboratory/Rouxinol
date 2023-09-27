#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n, m;
	while (cin >> n >> m, n) {
		vector<int>taro(n), hanako(m);
		int sum_t = 0, sum_h = 0;
		for (int i = 0; i < n; ++i) {
			cin >> taro[i]; sum_t += taro[i];
		}
		for (int i = 0; i < m; ++i) {
			cin >> hanako[i]; sum_h += hanako[i];
		}
		int ans = -1;
		if ((sum_t + sum_h) % 2)ans = -1;
		else {
			if ((sum_h - sum_t) % 2)ans = -1;
			else {
				sort(taro.begin(), taro.end());
				sort(hanako.begin(), hanako.end());
				for (auto x : taro) {
					auto range = equal_range(hanako.begin(), hanako.end(), x + (sum_h - sum_t) / 2);
					if (range.first != range.second) {
						vector<int>::iterator it = range.first;
						ans = *it;
						cout << x << " " << ans << endl;
						break;
					}
				}
			}
		}
		if (ans == -1)cout << ans << endl;
	}
}