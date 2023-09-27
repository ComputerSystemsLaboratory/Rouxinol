#include<iostream>
using namespace std;
int x[200000], n, a, b, c, d, p, rell, y[200000];
int main() {
	while (true) {
		cin >> n >> a >> b >> c >> p; if (!n) { break; }
		x[0] = p; rell = 0;
		for (int i = 1; i < 200000; i++) { x[i] = (x[i - 1] * a + b) % c; }
		for (int i = 0; i < n; i++) { cin >> y[i]; }
		for (int i = 0; i < 10001; i++) {
			if (y[rell] == x[i]) { rell++; }
			if (rell == n) { d = i; goto E; }
		}
		d = -1;
	E:;
		cout << d << endl;
	}
}