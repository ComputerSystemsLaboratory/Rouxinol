#include<iostream>

using namespace std;

int main() {

	int n, x;
	int a, b, c;
	int count = 0;

	while (1) {
		cin >> n >> x;

		if (n == 0 && x == 0) break;

		for (int i = 1; i <= n; i++) {
			a = i;
			for (int j = 1; j <= n; j++) {
				if (a == j) continue;
				 b = j;

				c = x - (a + b);

				if (c >= 1 && c <= n && c != a && c != b) count++;
			}
		}

		count /= 6;

		cout << count << endl;
		count = 0;
	}

	return 0;
}