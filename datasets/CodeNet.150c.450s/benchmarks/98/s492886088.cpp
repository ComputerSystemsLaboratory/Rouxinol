#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int n,m;
	while (cin >> n >> m, n) {
		vector<int> t(n);
		int sum_t = 0;
		for (int i = 0; i < n; ++i) {
			cin >> t[i];
			sum_t += t[i];
		}
		vector<int> h(m);
		int sum_h = 0;
		for (int i = 0; i < m; ++i) {
			cin >> h[i];
			sum_h += h[i];
		}

		bool find = false;
		for (int i = 0; !find && i < n; ++i) {
			for (int j = 0; !find && j < m; ++j) {
				if (sum_t-t[i]+h[j] == sum_h-h[j]+t[i]) {
					cout << t[i] << " " << h[j] << endl;
					find = true;
				}
			}
		}
		if (!find) {
			cout << -1 << endl;
		}
	}
	return 0;
}