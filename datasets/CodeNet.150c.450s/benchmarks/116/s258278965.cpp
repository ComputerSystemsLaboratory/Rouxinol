#include <iostream>
#include<algorithm>

using namespace std;

int rsw[1000002];

int main() {
	int n, k;
	while (cin >> n >> k, n + k) {
		rsw[0] = 0;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			rsw[i + 1] = rsw[i] + a;
		}
		int MAX = rsw[k] - rsw[0];
		for (int i = 0; i < n - k + 1; i++) {
			MAX = max(MAX, rsw[i + k] - rsw[i]);
		}
		cout << MAX << endl;
		for (int i = 0; i < 1000002; i++) {
			rsw[i] = 0;
		}
	}
	return 0;
}