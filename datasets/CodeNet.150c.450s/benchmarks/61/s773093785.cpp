#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, a, b, c, x;
	while (cin >> n >> a >> b >> c >> x) {
		if (n == 0 && a == 0 && b == 0 && c == 0 && x == 0) {
			break;
		}
		int r[110];
		for (int i = 0; i < n; i++) {
			cin >> r[i];
		}
		int k;
		int count = 0;
		for (k = 0; k < 10010; k++) {
			if (count == n) {
				k--;
				break;
			}
			if (x == r[count]) {
				count++;
			}
			x = (a*x+b)%c;
		}
		if (k <= 10000) {
			cout << k << endl;
		} else {
			cout << -1 << endl;
		}
	}
}