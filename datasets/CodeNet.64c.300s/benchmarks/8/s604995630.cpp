#include <iostream>
using namespace std;

int main() {
	
	int n, x, f;

	cin >> n;

	for (int i = 1; i <= n; i++) {

		if (i % 3 == 0) {
			cout << " " << i;
		}
		else {
			x = i;
			f = 0;
			for (int j = 1;; j++) {
				if (x % 10 == 3) {
					f = 1;
				}
				x /= 10;
				if (x == 0) {
					break;
				}
			}
			if (f == 1) {
				cout << " " << i;
			}
		}

	}

	cout << "\n";

	return 0;

}