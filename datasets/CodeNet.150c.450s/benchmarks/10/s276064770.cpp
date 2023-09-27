#include <iostream>

using namespace std;

int main() {

	int number[10][3][4] = { 0 };//部屋・階数・棟
	int b, f, r, v, n;//b棟f階のr番目の部屋にv人が追加で入居or退去+情報の数n

	cin >> n;

	for (int i = 0; i < n; i++) {

		cin >> b >> f >> r >> v;

		number[r - 1][f - 1][b - 1] += v;
	}

	for (int j = 0; j < 4;j++) {//棟

		for (int k = 0; k < 3;k++) {//階数

			for (int l = 0; l < 10;l++) {//部屋

				cout << ' ' << number[l][k][j];
			}
			cout << endl;
		}
		if(j != 3) for (int m = 0; m < 20; m++) {
			cout << "#";
		}
		if(j != 3) cout << endl;
	}
	//cin >> /*変数他*/;
	//cout << /*文字列*/ << endl;
	return 0;
}
