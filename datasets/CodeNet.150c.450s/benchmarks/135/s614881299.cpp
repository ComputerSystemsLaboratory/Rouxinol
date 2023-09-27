#include <iostream>
#include <vector>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define vec vector

int main(void)
{
	while(1) {
		int n, m;
		cin >> n >> m;
		if (n == 0) break;
		vec<int> h(n + 1), w(m + 1);
		h[0] = 0;
		w[0] = 0;
		rep(i, n) {
			int l;
			cin >> l;
			h[i + 1] = h[i] + l;
		}
		rep(i, m) {
			int l;
			cin >> l;
			w[i + 1] = w[i] + l;
		}

		int K = 1500 * 1000;
		vec<int> x(K + 1, 0);
		vec<int> y(K + 1, 0);
		rep(i, n) {
			for (int j = i + 1; j <= n; j++) {
				x[h[j] - h[i]]++;
			}
		}
		rep(i, m) {
			for (int j = i + 1; j <= m; j++) {
				y[w[j] - w[i]]++;
			}
		}
		int ans = 0;
		rep(i, K) {
			ans += x[i + 1] * y[i + 1];
		}
		cout << ans << endl;
	}
	return 0;
}