#include <iostream>
using namespace std;

int main () {
	int n;
	while (cin >> n, n) {
		int step[n + 1];
		step[0] = 1;
		for (int i = 1; i <= n; i++) {
			step[i] = step[i - 1];
			if (i > 1) step[i] += step[i - 2];
			if (i > 2) step[i] += step[i - 3];
		}
		cout << step[n] / 3650 + 1 << endl;
	}
	return 0;
}