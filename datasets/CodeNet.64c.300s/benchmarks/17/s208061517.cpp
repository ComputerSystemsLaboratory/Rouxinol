#include <iostream>

using namespace std;

int tax(int p, int r) {
	return p * (r + 100) / 100;
}

int main() {
	int x, y, s;
	cin >> x >> y >> s;
	if (!(x || y || s)) {
		return 0;
	}
	int m = 0;
	for (int i = 1; i < s; i++) {
		for (int j = i; j < s; j++) {
			int o = tax(i, x) + tax(j, x);
			if (o == s) {
				int n = tax(i, y) + tax(j, y);
				if (m < n) {
					m = n;
				}
			}
		}
	}
	cout << m << endl;
	return main();
}