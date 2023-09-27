#include <iostream>
#include <algorithm>
#define int long long
using namespace std;

int n, m;
int y[1501];
int x[1501];
int cnt_h[1500001];
int cnt_w[1500001];

signed main() {
	while (cin >> n >> m) {
		if (!n) break;
		int i, j;
		
		for (i = 0; i < n; i++) cin >> y[i + 1];
		for (i = 0; i < m; i++) cin >> x[i + 1];
		for (i = 0; i < n; i++) y[i + 1] += y[i];
		for (i = 0; i < m; i++) x[i + 1] += x[i];
		
		for (i = 0; i <= n * 1000; i++) cnt_h[i] = 0;
		for (i = 0; i <= m * 1000; i++) cnt_w[i] = 0;
		for (i = 0; i <= n; i++) for (j = i + 1; j <= n; j++) cnt_h[y[j] - y[i]]++;
		for (i = 0; i <= m; i++) for (j = i + 1; j <= m; j++) cnt_w[x[j] - x[i]]++;
		int ans = 0;
		for (i = 0; i <= min(n, m) * 1000; i++) { ans += cnt_h[i] * cnt_w[i]; }
		cout << ans << endl;
	}
	return 0;
}