#include <iostream>
using namespace std;

int main() {
	int w, n, a, b, c[31], i, d;
	char e;
	cin >> w >> n;
	for (i = 1; i <= w; i++) {
		c[i] = i;
	}
	for (i = 0; i < n; i++) {
		cin >> a >> e >> b;
		d = c[a];
		c[a] = c[b];
		c[b] = d;
	}
	for (i = 1; i <= w; i++) {
		cout << c[i] << endl;
	}
}