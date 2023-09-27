#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int x[8000000][2], a[999], b[999], s, n;
int main() {
	a[0] = 1; b[0] = 1;
	for (int i = 1; i < 300; i++) {
		a[i] = a[i - 1] + (i + 1)*(i + 2) / 2;
		if (a[i] % 2 == 1) {
			s++; b[s] = a[i];
		}
	}
	n = 1200000;
	memset(x, 127, sizeof(x));
	x[0][0] = 0; x[0][1] = 0;
	for (int i = 0; i < 200; i++) {
		for (int j = 0; j < n; j++) {
			x[j + a[i]][0] = min(x[j + a[i]][0], x[j][0] + 1);
		}
	}
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < n; j++) {
			x[j + b[i]][1] = min(x[j + b[i]][1], x[j][1] + 1);
		}
	}
	while (true) {
		cin >> n; if (!n) { break; }
		cout << x[n][0] << ' ' << x[n][1] << endl;
	}
}