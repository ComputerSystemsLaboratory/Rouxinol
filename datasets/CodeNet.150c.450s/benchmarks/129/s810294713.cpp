#include <iostream>
using namespace std;

int main()
{
	int r, c;
	cin >> r >> c;

	int table[r+1][c+1];
	int i, j;
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			cin >> table[i][j];


	int sum;
	int all_sum = 0;
	for (i = 0; i < r; i++) {
		sum = 0;
		for (j = 0; j < c; j++) {
			sum += table[i][j];
		}
		table[i][c] = sum;
	}

	for (j = 0; j < c; j++) {
		sum = 0;
		for (i = 0; i < r; i++) {
			sum += table[i][j];
		}
		table[r][j] = sum;
		all_sum += sum;
	}

	table[r][c] = all_sum;

	for (i = 0; i < r+1; i++) {
		for (j = 0; j < c+1; j++) {
			cout << table[i][j];
			if (j != c) cout << " ";
		}
		cout << "\n";
	}

	return 0;
}