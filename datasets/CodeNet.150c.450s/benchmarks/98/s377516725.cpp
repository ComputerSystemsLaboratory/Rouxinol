#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, m;

	while (cin >> n >> m, !(n == 0 && m == 0)) {
		vector<int> ts(100, 0), hs(100, 0);
		int tsum = 0, hsum = 0;
		for (int i = 0; i < n; ++i) {
			cin >> ts[i];
			tsum += ts[i];
		}
		for (int i = 0; i < m; ++i) {
			cin >> hs[i];
			hsum += hs[i];
		}
		sort(ts.begin(), ts.begin()+n);
		sort(hs.begin(), hs.begin()+m);
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (tsum + hs[j] - ts[i] == hsum + ts[i] -hs[j]) {
					cout << ts[i] << " " << hs[j] << endl;
					goto escape;
				}
			}
		}
		cout << -1 << endl;
	escape:;
	}
	return 0;
}