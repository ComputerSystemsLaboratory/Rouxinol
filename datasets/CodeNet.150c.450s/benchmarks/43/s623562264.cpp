#include <iostream>

using namespace std;

int main() {
	int n;
	while (cin >> n, n) {
		int a, b, p1 = 0, p2 = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a >> b;
			if (a == b) p1 += a, p2 += b;
			else if (a > b) p1 += a + b;
			else p2 += a + b;
		}
		cout << p1 << " " << p2 << endl;
	}
	return 0;
}