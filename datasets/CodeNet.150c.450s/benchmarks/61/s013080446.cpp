// 2016-11-30
#include <iostream>
using namespace std;

int main() {
	int n, a, b, c, x;
	int y[100];
	while (cin >> n >> a >> b >> c >> x, n || a || b || c || x) {
		for (int i = 0; i < n; i++) {
			cin >> y[i];
		}
		int f, r;
		for (f = 0, r = 0; f <= 10000; f++) {
			if (x == y[r]) {
				r++;
				if (r >= n) {
					break;
				}
			}
			x = (a * x + b) % c;
		}
		cout << (f <= 10000 ? f : -1) << endl;
	}
	return 0;
}