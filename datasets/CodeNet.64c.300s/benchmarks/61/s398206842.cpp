#include <iostream>
using namespace std;

int main() {
	int c[101][101], x, y, num = 0;
	cin >> x >> y;
	for (int i = 0; i<x; i++) {
		for (int j = 0; j<y; j++) {
			cin >> c[i][j];
			num += c[i][j];
		}
		c[i][y] = num;
		num = 0;
	}
	for (int j = 0; j<=y; j++) {
		for (int i = 0; i<x; i++) {
			num += c[i][j];
		}
		c[x][j] = num;
		num = 0;
	}
	for (int i = 0; i<=x; i++) {
		for (int j = 0; j<=y; j++) {
			cout << c[i][j];
			if (j != y)cout << " ";
		}
		cout << endl;
	}


	return 0;
}