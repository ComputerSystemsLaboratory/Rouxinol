#include <iostream>
using namespace std;

int main() {

	int n, x, c;

	for (int h = 1;; h++) {
		cin >> n >> x;
		c = 0;
		if (n == 0 && x == 0) break;
		for (int i = 1; i <= n; i++) {
			for (int j = i+1; j <= n; j++) {
				for (int k = j+1; k <= n; k++) {
					if (!(i == j || j == k || k == i)) {
						if ((i + j + k) == x) c++;
					}
				}
			}
		}
		cout << c << "\n";
	}

	return 0;
}