#include <iostream>
using namespace std;

int main() {
	while (1) {
		int n, m;
		cin >> n >> m;
		if (m == 0) break;
		
		int t[n], h[m];
		for (int i = 0; i < n; i++)
			cin >> t[i];
		for (int i = 0; i < m; i++)
			cin >> h[i];
		int sumt = 0, sumh = 0;
		for (int i = 0; i < n; i++)
			sumt += t[i];
		for (int i = 0; i < m; i++)
			sumh += h[i];
		
		int x, y, min = 1000;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (sumt - t[i] + h[j] == sumh + t[i] - h[j]) {
					if (t[i] + h[j] < min) {
						min = t[i] + h[j];
						x = t[i];
						y = h[j];
					}
				}
			}
		}
		
		if (min == 1000)
			cout << -1 << endl;
		else
			cout << x << ' ' << y << endl;
	}		
	return 0;
}