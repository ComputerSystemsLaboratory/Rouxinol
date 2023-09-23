#include <iostream>

using namespace std;

int main() {

	int r, c;
	int values[101][101];
	
	cin >> r >> c;

	//??\???
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> values[i][j];
		}
	}

	//???????¨????
	//???
	for (int i = 0; i < r; i++) {
		//?????????
		values[i][c] = 0;
		for (int j = 0; j < c; j++) {
			values[i][c] += values[i][j];
		}
	}
	//???
	for (int j = 0; j < c; j++) {
		//?????????
		values[r][j] = 0;
		for (int i = 0; i < r; i++) {
			values[r][j] += values[i][j];
		}
	}

	//??????
	values[r][c] = 0;
	for (int i = 0; i < r; i++) {
		values[r][c] += values[i][c];
	}

	//??¨???
	for (int i = 0; i <= r; i++) {
		for (int j = 0; j <= c; j++) {
			cout << values[i][j];
			if (j < c) {
				cout << " ";
			}
			else if (j == c) {
				cout << endl;
			}
		}
	}

	return 0;
}