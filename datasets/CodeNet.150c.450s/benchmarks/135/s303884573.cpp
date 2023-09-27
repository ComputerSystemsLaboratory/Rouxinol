// 2017-02-04
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, m, h[1500 + 1], w[1500 + 1];
	static int hc[1500 * 1000 + 1], wc[1500 * 1000 + 1];
	h[0] = 0; w[0] = 0;
	while (cin >> n >> m, n) {
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			h[i + 1] = h[i] + a;
		}
		for (int i = 0; i < m; i++) {
			int a;
			cin >> a;
			w[i + 1] = w[i] + a;
		}
		fill(hc, hc + 1500 * 1000 + 1, 0);
		fill(wc, wc + 1500 * 1000 + 1, 0);
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j <= n; j++) {
				hc[h[j] - h[i]]++;
			}
		}
		for (int i = 0; i < m; i++) {
			for (int j = i + 1; j <= m; j++) {
				wc[w[j] - w[i]]++;
			}
		}
		int c = 0;
		for (int i = 0; i < 1500 * 1000 + 1; i++) {
			c += hc[i] * wc[i];
		}
		cout << c << endl;
	}
	return 0;
}