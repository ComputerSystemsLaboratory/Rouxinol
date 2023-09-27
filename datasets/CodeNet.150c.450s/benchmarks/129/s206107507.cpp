#include <iostream>

using namespace std;

int main() {
	int r, c;
	cin >> r >> c;
	int A[110][110] = {0};

	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			int num;
			cin >> num;
			A[i][j] = num;
		}
	}

	//計算処理
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			A[r][c] += A[i][j];
			A[i][c] += A[i][j];
			A[r][j] += A[i][j];
		}
	}

	//最後の表示
	for(int i = 0; i <= r; i++) {
		for(int j = 0; j <= c; j++) {
			if(j == c) cout << A[i][j]; 
			else cout << A[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}
