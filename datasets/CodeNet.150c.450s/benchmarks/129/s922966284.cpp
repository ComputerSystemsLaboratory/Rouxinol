#include <iostream>
using namespace std;

int main(){
	int i, j, r, c;
	int array[102][102];

	cin >> r >> c;

	for (i = 1; i <= r + 1; i++){
		for (j = 1; j <= c + 1; j++){
			array[i][j] = 0;
		}
	}

	for (i = 1; i <= r; i++){
		for (j = 1; j <= c; j++){
			cin >> array[i][j];
			array[i][c+1] += array[i][j];
			array[r+1][j] += array[i][j];
			array[r+1][c+1] += array[i][j];
		}
	}

	for (i = 1; i <= r + 1; i++){
		for (j = 1; j <= c + 1; j++){
			if (j != 1) cout << " ";
			cout << array[i][j];
		}
		cout << endl;
	}

	return 0;
}