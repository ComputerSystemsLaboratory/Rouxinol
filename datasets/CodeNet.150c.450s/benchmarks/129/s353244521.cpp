#include <iostream>
#define R 100
#define C 100
using namespace std;

void Input(int ary[R][C], int m, int n) {
	int i, j;

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cin >> ary[i][j];
		}
	}

	return;
}

void OutputAndSum(int ary[R][C], int m, int n) {
	int i, j;
	int *Rsum = new int[n];
	int Csum = 0;
	int sum = 0;

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cout << ary[i][j] << " ";
			Rsum[j] += ary[i][j];
			Csum += ary[i][j];
		}
		cout << Csum << endl;
		Csum = 0;
	}

	for (j = 0; j < n; j++) {
		cout << Rsum[j] << " ";
		sum += Rsum[j];
	}

	cout << sum << endl;

	delete [] Rsum;

	return;
}

int main()
{
	int table[R][C];
	int r, c;

	cin >> r >> c;

	Input(table, r, c);

	OutputAndSum(table, r, c);

	return 0;
}