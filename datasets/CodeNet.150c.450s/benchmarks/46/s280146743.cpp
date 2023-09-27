#include<iostream>
using namespace std;
int main() {
	int n, x, a, b, c;
	int s = 0;
	while (true) {
		cin >> n >> x;
		if (n == 0 && x == 0) {
			break;
		}
		a = x / 3 + 1;
		for (int i = a; i <= n; i++) {
			c = (x - i) / 2 + 1;
			for (int j = c; j < i; j++) {
				if (0 < x - i - j&&x - i - j < a) {
					s += 1;
				}
			}
		}
		cout << s << endl;
		s = 0;
	}
	return 0;
}