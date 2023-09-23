#include <iostream>
using namespace std;

int r, c, a[101][101] = { 0 };

int main(){
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> a[i][j];
			a[i][c] += a[i][j];
			a[r][j] += a[i][j];
		}
	}
	for (int i = 0; i < c; i++) {
		a[r][c] += a[r][i];
	}
	for (int i = 0; i <= r; i++) {
		cout << a[i][0];
		for (int j = 1; j <= c; j++) {
			cout << " " << a[i][j];
		}
		cout << endl;
	}

	return 0;
}