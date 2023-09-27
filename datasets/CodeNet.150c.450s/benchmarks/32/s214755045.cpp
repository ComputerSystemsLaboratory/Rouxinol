#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
	int n, m1, m2;
	while (cin >> n >> m1 >> m2) {
		if (n == 0 && m1 == 0 && m2 == 0) {
			break;
		}
		vector<int> p(n);
		for (int i = 0; i < n; i++) {
			cin >> p[i];
		}
		int ans = m1;
		int ansn = p[m1-1]-p[m1];
		for (int i = m1; i <= m2; i++) {
			if (p[i-1] - p[i] >= ansn) {
				ansn = p[i-1] - p[i];
				ans = i;
			}
			//cout << ans << ' ' << ansn << endl;
		}
		cout << ans << endl;
	}
	return 0;
}