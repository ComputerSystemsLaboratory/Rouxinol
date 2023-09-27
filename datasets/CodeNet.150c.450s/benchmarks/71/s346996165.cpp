#include <iostream>
using namespace std;

int main(){
	int root[5][51], i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 51; j++)
			root[i][j] = 0;
	}
	for (i = 0; i < 10; i++) {
		root[1][i] = 1;
	}
	for (i = 1; i < 5; i++) {
		root[i][0] = 1;
	}
	for (i = 2; i < 5; i++) {
		for (j = 1; j < 51; j++) {
			for (int k = j; k >= 0 && k > j - 10; k--) {
				root[i][j] += root[i - 1][k];
			}
		}
	}
	while (true) {
		int n;
		cin >> n;
		if (cin.eof()){
			break;
		}
		cout << root[4][n] << endl;
	}
	return 0;
}