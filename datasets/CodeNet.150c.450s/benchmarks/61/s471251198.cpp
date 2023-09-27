#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n, a, b, c, x;
	while (cin >> n >> a >> b >> c >> x) {
		if (n == 0 && a == 0 && b == 0 && c == 0 && x == 0) {
			break;
		}
		vector<int> y(n);
		for (int i = 0; i < n; i++) {
			cin >> y[i];
		}
		int ans = 0;
		for (int i = 0; i < n; i++) {
			if (i > 0) {
				x = (a*x + b) % c;
				ans++;
			}
			while (x != y[i] && ans <= 10000) {
				x = (a*x + b) % c;
				ans++;
			}
			if (ans > 10000) {
				ans = -1;
				break;
			}
		}
		cout << ans << endl;
	}

	return 0;
}
