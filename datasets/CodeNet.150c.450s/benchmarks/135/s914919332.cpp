#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <queue>
using namespace std;

int main()
{
	while (1) {
		int n, m; cin >> n >> m;
		if (n == 0)break;

		vector<int>h(n + 1), w(m + 1);
		for (int i = 0; i < n; i++)cin >> h[i + 1];
		for (int i = 0; i < m; i++)cin >> w[i + 1];
		for (int i = 1; i <= n; i++)h[i] += h[i - 1];
		for (int i = 1; i <= m; i++)w[i] += w[i - 1];

		vector<int>hs(1500001), ws(1500001);

		for (int i1 = n; i1 >= 0; i1--) {
			for (int j1 = i1 + 1; j1 < n + 1; j1++) {
				hs[h[j1] - h[i1]]++;
			}
		}

		for (int i2 = m; i2 >= 0; i2--) {
			for (int j2 = i2 + 1; j2 < m + 1; j2++) {
				ws[w[j2] - w[i2]]++;
			}
		}

		long long ans = 0;
		for (int i = 1; i <= 1500000; i++) {
			ans += hs[i] * ws[i];
		}

		cout << ans << endl;
	}
	return 0;
}