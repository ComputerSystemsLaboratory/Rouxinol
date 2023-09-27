#include <iostream>
#include <vector>
using namespace std;

int main() {
	int r, c;
	while (cin >> r >> c, r || c) {
		vector<vector<int>> osenbei(r);
		for (auto& vb : osenbei) {
			vb.resize(c);
			for (auto& x : vb) {
				cin >> x;
			}
		}
		int ans = 0;
		for (int rptn = 0; rptn < (1 << r); rptn++) {
			int sum = 0;
			for (int i = 0; i < c; i++) {
				int rsum = 0;
				for (int j = 0; j < r; j++) {
					int b = (rptn >> j) & 1;
					rsum += b ^ osenbei[j][i];
				}
				sum += max(rsum, r - rsum);
			}
			ans = max(ans, sum);
		}
		cout << ans << endl;
	}
	return 0;
}