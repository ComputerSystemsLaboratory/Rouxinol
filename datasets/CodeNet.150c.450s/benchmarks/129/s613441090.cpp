#include <iostream>

using namespace std;

int main()
{
	int r, c;
	int A[101][101] = {};
	int i, j;

	cin >> r >> c;

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			cin >> A[i][j];
			A[i][c] += A[i][j];
			A[r][j] += A[i][j];
			A[r][c] += A[i][j];
		}
	}

	for (i = 0; i <= r; i++)
	{
		for (j = 0; j <= c; j++)
		{			
			cout << A[i][j];
			if (j != c)
				cout << " ";
		}
		cout << endl;
	}
}