#include <iostream>

using namespace std;

int main() {
	int a[10000] = { 0 }, b[10000] = { 0 }, c[10000] = { 0 };
	int n;
	int d[10000], e[10000], f[10000], g[10000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i] >> c[i];
		d[i] = a[i] * a[i];
		e[i] = b[i] * b[i];
		f[i] = c[i] * c[i];
		g[i] = d[i] + e[i] + f[i];
	}
	for (int j = 0; j < n; j++) {
		if (g[j] == 2*d[j] || g[j] == 2*e[j] || g[j] == 2*f[j]) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}