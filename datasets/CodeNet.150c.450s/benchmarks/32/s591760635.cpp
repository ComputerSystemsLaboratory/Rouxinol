// 2016-12-03
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int m, min, max, n;
	int p[200];
	while (cin >> m >> min >> max, m) {
		for (int i = 0; i < m; i++) {
			cin >> p[i];
		}
		n = min - 1;
		for (int i = min; i < max; i++) {
			if (p[i] - p[i + 1] >= p[n] - p[n + 1]) {
				n = i;
			}
		}
		cout << n + 1 << endl;
	}
	return 0;
}