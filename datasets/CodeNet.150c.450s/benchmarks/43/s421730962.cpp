#include<iostream>
using namespace std;
int main() {
	int n = 0;
	int aa, bb = 0;
	while (cin >> n, n != 0) {
		aa = 0;
		bb = 0;
		int a[10000] = {};
		int b[10000] = {};


		for (int i = 0; i < n; i++) {
			cin >> a[i] >> b[i];
		}
		for (int j = 0; j < n; j++) {
			if (a[j] > b[j]) {
				aa += a[j] + b[j];
			}
			else if (a[j] < b[j]) {
				bb += a[j] + b[j];
			}
			else if (a[j] == b[j]) {
				aa += a[j];
				bb += b[j];
			}
		}
		cout << aa << " " << bb << endl;

	}
	return 0;
}