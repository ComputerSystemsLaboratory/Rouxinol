#include<iostream>
using namespace std;
int main() {
	int x, n, a[100] = { 0 }, hasi;
	for (int i0 = 0;i0 < 100;i0++) {
		cin >> n;
		cin >> x;
		if (n == 0 && x == 0) {
			break;
		}
		for (int i = 0;i < n;i++) {
			for (int i2 = i + 1;i2 < n;i2++) {
				for (int i3 = i2 + 1;i3 < n;i3++) {
					if (i + i2 + i3 + 3 == x) {
						a[i0] = a[i0] + 1;
					}
				}
			}
		}
		hasi = i0;
	}
	for (int i = 0;i <= hasi;i++) {
		cout << a[i] << endl;
	}
	return 0;
}