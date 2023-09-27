#include <iostream>

using namespace std;

int main() {

	int r, c, a[101][101] = {0};

	cin >> r >> c;

	for (int i = 0; i < r;i++) {

		for (int j = 0; j < c;j++) {

			cin >> a[i][j];
			a[i][c] += a[i][j];
		}
	}

	for (int i = 0; i < c;i++) {

		for (int j = 0; j < r;j++) {

			a[r][i] += a[j][i];
		}
	}

	for (int i = 0; i < r; i++) {

		for (int j = 0; j < c; j++) {

			a[r][c] += a[i][j];
		}
	}

	for (int i = 0; i < r + 1;i++) {

		for (int j = 0; j < c + 1;j++) {

			cout << a[i][j];
			if (j != c)cout << " ";
		}
		cout << endl;
	}

	//cin >> /*変数他*/;
	//cout << /*文字列*/ << endl;
	return 0;
}
