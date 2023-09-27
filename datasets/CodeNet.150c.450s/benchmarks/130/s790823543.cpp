#include <iostream>
using namespace std;

int main() {
	int n, m, A[100][100], b[100], c[100];

	//配列の初期化
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			A[i][j] = 0;
		}
	}
	for (int i = 0; i < m; i++) {
		b[i] = 0;
	}

	cin >> n >> m;
	
	//二次元配列Aの入力
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}
	
	//一次元配列bの入力
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	for (int i = 0; i < n; i++) {
		c[i] = 0; //一次元配列cの初期化
		for (int j = 0; j < m; j++) {
			c[i] += A[i][j] * b[j];
		}
	}

	for (int i = 0; i < n; i++) cout << c[i] << endl;

	return 0;
}
