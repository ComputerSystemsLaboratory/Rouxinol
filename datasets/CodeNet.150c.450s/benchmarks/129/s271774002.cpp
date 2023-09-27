#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
	int r, c;
	cin >> r >> c;

	int i, j;
	int table[100][100] = {};
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			cin >> table[i][j];
		}
	}

	int line[100] = {};
	int column[100] = {};
	int sum = 0;
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			line[j] += table[i][j];
			column[i] += table[i][j];
			sum += table[i][j];
		}
		
	}

	for (i = 0; i <= r; i++) {
		for (j = 0; j <= c; j++) {
			if (i == r && j == c) {
				cout << sum << endl;
			}
			else if (i == r) {
				cout << line[j] << " ";
			}
			else if (j == c) {
				cout << column[i] << endl;
			}
			else cout << table[i][j] << " ";
		}

	}

	return 0;
}

