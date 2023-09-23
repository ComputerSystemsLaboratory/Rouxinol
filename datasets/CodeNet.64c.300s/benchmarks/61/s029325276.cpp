// class point	の練習（クラスの高度な実装）
#include <iostream>
#include <vector>
#include <algorithm>

typedef long long llong;
using namespace std;



int main() {
	int r, c;
	int A[101][101];
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < r; i++) {
		A[i][c] = 0;
		for (int j = 0; j < c; j++) {
			A[i][c] += A[i][j];
		}
	}
	for (int j = 0; j <= c; j++) {
		A[r][j] = 0;
		for (int i = 0; i < r; i++) {
			A[r][j] += A[i][j];
		}
	}
	for (int i = 0; i <= r; i++) {
		for (int j = 0; j <= c; j++) {
			cout << A[i][j];
			if (j != c)cout << " ";
		}
		cout << endl;
	}
	return 0;
}

