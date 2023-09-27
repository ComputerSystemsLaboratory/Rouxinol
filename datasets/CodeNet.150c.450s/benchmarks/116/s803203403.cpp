# include <iostream>
# include <vector>
# include <limits>
# include <algorithm>
# include <map>
# include <string>
# include <functional>
using namespace std;

int main() {
	int n, k;
	while (cin >> n >> k) {
		vector<int> num;
		if (n == 0 && k == 0) {
			break;
		}
		int o;
		for (int i = 0; i < n; i++) {
			cin >> o;
			num.emplace_back(o);
		}
		int m = 0;
		for (int i = 0; i < n - k + 1; i++) {
			int h = 0;
			for (int j = 0; j < k; j++) {
				h += num[i + j];
			}
			m = max(m, h);
		}
		cout << m << endl;
	}
}