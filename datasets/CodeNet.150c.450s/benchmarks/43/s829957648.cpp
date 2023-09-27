#include<iostream>
using namespace std;

int main() {
	int i, a, b, n, ap, bp;

	while (1) {
		cin >> n;
		if (n == 0)break;
		ap = bp = 0;
		for (i = 0; i < n; i++) {
			cin >> a >> b;
			if (a > b) {
				ap += a + b;
			} else if (a < b) {
				bp += a + b;
			} else {
				ap += a;
				bp += b;
			}
		}
		cout << ap << " " << bp << endl;
	}
	return 0;
}