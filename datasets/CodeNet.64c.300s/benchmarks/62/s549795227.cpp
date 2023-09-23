#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
	int m, n;
	int a[999][999], b[999], c[999], d[999];

	for (int i = 0; i < 999; i++) {
		c[i] = 0;
	}

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	for (int k = 0; k < m; k++) {
		cin >> b[k];
	}

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++) {
			d[j] = a[i][j] * b[j];
			c[i] = c[i] + d[j];
		}
	}
	for (int i = 0; i < n; i++) {
		cout << c[i] << endl;
	}
	return 0;
}
