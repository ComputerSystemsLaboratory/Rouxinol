#include <iostream>

using namespace std;

int main() {
	const int v[6] = {1, 5, 10, 50, 100, 500};
	int ans, c;

	while (1) {
		ans = 0;

		cin >> c;
		if (c == 0) break;

		c = 1000 - c;
		for (int i = 5; i >= 0; --i) {
			int tmp = c / v[i];
			c -= v[i] * tmp;
			ans += tmp;
		}
		cout << ans << endl;
	}

	return 0;
}