#include "bits/stdc++.h"
using namespace std;

int main() {
	int n,m;
	while (cin >> n >> m) {
		if (!n)break;
		vector<int>t(n);
		vector<int>h(m);
		int in, ts = 0, hs = 0;
		for (int i = 0; i < n; ++i) {
			cin >> in;
			t[i] = in;
			ts += in;
		}
		for (int i = 0; i < m; ++i) {
			cin >> in;
			h[i] = in;
			hs += in;
		}
		//	sort(t.begin(), t.end());
		//	sort(h.begin(), h.end());
		int mi = 201, f = 0;
		int nt = 0, nh = 0;
		int ans[2];
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				nt = ts - t[i] + h[j];
				nh = hs - h[j] + t[i];
				if (nt == nh) {
					if (t[i] + h[j] < mi) {
						ans[0] = t[i];
						ans[1] = h[j];
						mi = t[i] + h[j];
						f = 1;
					}
				}

			}
		}
		if (f)cout << ans[0] << " " << ans[1] << endl;
		else cout << -1 << endl;
	}
	return 0;
}
