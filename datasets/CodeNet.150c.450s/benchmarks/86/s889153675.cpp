#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m, p;
	while (cin >> n >> m >> p) {
		if (n == 0 && m == 0 && p == 0) {
			break;
		}
		int x;
		int sum = 0;
		int y = 0;
		for (int i = 0; i < n; i++) {
			cin >> x;
			sum += x;
			if (i == m - 1) {
				y = x;
			}
		}
		sum *= (100 - p);
		if (y == 0) {
			cout << 0 << endl;
		}
		else {
			cout << sum / y << endl;
		}
	}
	return 0;
}