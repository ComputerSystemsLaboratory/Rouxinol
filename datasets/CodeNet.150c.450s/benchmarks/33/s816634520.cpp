#include <iostream>

using namespace std;

int main(void) {
	while (1) {
		int x, y, s;
		cin >> x >> y >> s;
		if (x == 0 && y == 0 && s == 0) break;

		int q[s];
		int m = 0;
		q[0] = 0;
		for (int p = 1; p < s; p++) {
			q[p] = p * (100 + x) / 100;
		}
		for (int i = 1; i < s; i++) {
			for (int j = 1; j < s; j++) {
				if (q[i] + q[j] == s) {
					int a = i * (100 + y) / 100;
					int b = j * (100 + y) / 100;
					int t = a + b;
					m = max(t, m);
				}
			}
		}

		cout << m << endl;
	}
	return 0;
}