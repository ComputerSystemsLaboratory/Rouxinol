#include <iostream>
#include <string>
using namespace std;

int main() {
	int a[100][100] = { 0 };
	int b[100] = { 0 };
	int c[100] = { 0 };
	int x, y;
	
	cin >> x >> y;

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < y; i++) {
		cin >> b[i];
	}

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			c[i] += a[i][j] * b[j];
		}
	}
	for (int i = 0; i < x; i++) {
		cout << c[i] << endl;
	}

	return 0;
}