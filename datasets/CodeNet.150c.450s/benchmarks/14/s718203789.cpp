#include <iostream>
using namespace std;
int main() {
	int i, x, n;
	cin >> n;
	for (i = 1; i <= n; i++) {
		x = i;
		if (x % 3 == 0) {
			cout << ' ' << i;
		}
		else {
			do {
				if (x % 10 == 3) {
					cout << ' ' << i;
					break;
				}
				x /= 10;
			} while (x);
		}
	}
	cout << endl;
}