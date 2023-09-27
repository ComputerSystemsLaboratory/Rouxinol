#include <iostream>
using namespace std;

int main() {

	int r, c, a[100][100], column[100], row[100], sum=0;

	for (int i = 0; i < 100; i++)column[i] = 0;
	for (int i = 0; i < 100; i++)row[i] = 0;

	cin >> r >> c;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> a[i][j];
			sum += a[i][j];
		}
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			column[i] += a[i][j];
		}
	}

	for (int j = 0; j < c; j++) {
		for (int i = 0; i < r; i++) {
			row[j] += a[i][j];
		}
	}

	for (int i = 0; i < r + 1; i++) {
		if (i < r) {
			for (int j = 0; j < c + 1; j++) {
				if (j < c) cout << a[i][j] << " ";
				else cout << column[i] << "\n";
			}
		}
		else {
			for (int j = 0; j < c + 1; j++) {
				if (j < c) cout<< row[j] << " ";
				else cout << sum << "\n";
			}
		}
	}

	return 0;
}