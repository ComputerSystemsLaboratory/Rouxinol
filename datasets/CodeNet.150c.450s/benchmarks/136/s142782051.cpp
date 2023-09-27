#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e, f, g, l;
	while (cin >> a >> b) {
		c = a; d = b;
		e = a; f = b;
		while (1) {
			if (a >= b) {
				a %= b;
				if (a == 0) { g = b; break; }
			}
			else if (a<b) {
				b %= a;
				if (b == 0) { g = a; break; }
			}
		}
		while (1) {
			if (c>d) d += f;
			else if (c < d) c += e;
			if (c == d) { l = c; break; }
		}
		cout << g << " " << l << endl;
	}
}