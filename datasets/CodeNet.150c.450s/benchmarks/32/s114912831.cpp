#include <iostream>
#include <algorithm>
using namespace std;

int m, nMin, nMax;
int p[200];

int main() {
	while (cin >> m >> nMin >> nMax) {
		if (!m) break;
		for (int i = 0; i < m; i++) {
			cin >> p[i];
		}
		
		int gap = -1, ans = -1;
		for (int i = nMax; i >= nMin; i--) {
			if (gap < p[i-1] - p[i]) {
				gap = p[i-1] - p[i];
				ans = i;
			}
		}
		cout << ans << endl;
	}
	return 0;
}