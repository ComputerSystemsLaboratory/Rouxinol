#include<iostream>
using namespace std;

int main()
{
	int n, m, l;
	int i, j, k;
	int array[100][100] = {};
	int brray[100][100] = {};
	long crray[100][100] = {};

	cin >> n >> m >> l;

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			cin >> array[i][j];
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < l; j++)
			cin >> brray[i][j];
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < l; j++) {
			for (k = 0; k < m; k++)
				crray[i][j] += array[i][k] * brray[k][j];
			cout << crray[i][j];
			if (j != l-1) cout << " ";
		}
		cout << endl;
	}
}