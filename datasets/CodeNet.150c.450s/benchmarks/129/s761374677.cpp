#include <stdio.h>
#include <iostream>
using namespace std;

int main(void)
{		
	int r, c;
	cin >> r >> c;
	
	int ary[100 + 1][100 + 1];
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> ary[i][j];
		}
	}
	
	for (int i = 0; i < r; i++) {
		int sum = 0;
		for (int j = 0; j < c; j++) {
			sum += ary[i][j];
		}
		ary[i][c] = sum;
	}
	
	for (int j = 0; j < c + 1; j++) {
		int sum = 0;
		for (int i = 0; i < r; i++) {
			sum += ary[i][j];
		}
		ary[r][j] = sum;
	}
	
	for (int i = 0; i < r + 1; i++) {
		for (int j = 0; j < c + 1; j++) {
			cout << ary[i][j];
			if (j < c) cout << " ";
		}
		cout << endl;
	}
	
	return 0;
}