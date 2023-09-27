#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
#include <algorithm>
#define loop(i, N) for(int i=0; i<(N); ++i)
using namespace std;
int main() {
	for (;;) {
		vector<int> h(1), w(1), dp;
		int n, m, t, o= 0;
		cin >> n >> m;
		if (!n) return 0;
		loop(i, n) {
			cin >> t;
			o += t;
			h.push_back(o);
		}
		o = 0;
		loop(i, m) {
			cin >> t;
			o += t;
			w.push_back(o);
		}
		o = 0;
		dp.resize(std::max(h[n], w[m]) + 10);
		loop(i, n)
			for (int e = i; e < n; ++e)
				++dp[h[e + 1] - h[i]];
		loop(i, m) {
			for (int e = i; e < m; ++e) {
				t = w[e + 1] - w[i];
				if (dp[t]>0) o += dp[t];
			}
		}
		cout << o << endl;
	}
	return 0;
}