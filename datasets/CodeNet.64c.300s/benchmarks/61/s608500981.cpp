#include<iostream>
using namespace std;

int main() {
	int r, c, sum = 0,sum2 = 0;
	cin >> r >> c;
	int a[r][c];


	for (int i = 0; i < r; i++) {
		sum = 0;
		for (int j = 0; j < c; j++) {
			cin >> a[i][j];
			cout << a[i][j] << " ";
			sum += a[i][j];
		}
		cout << sum << endl;
	}
	for (int j = 0; j < c; j++) {
		sum = 0;
		for (int i = 0; i < r; i++) {
			sum += a[i][j];
			sum2 += a[i][j];
		}
		cout << sum << " ";
	}
	cout << sum2 << endl;

	return 0;
}