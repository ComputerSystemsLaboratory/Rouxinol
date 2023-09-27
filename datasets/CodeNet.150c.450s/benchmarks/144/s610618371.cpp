#include<iostream>

int main(void)
{
	using namespace std;
	int n, m, l, r, c;
	cin >> n >> m >> l;
	int A[n][m], B[m][l];
	long long int C[n][l];
	for(r = 0; r < n; r++)
	{
		for(c = 0; c < m; c++)
		{
			cin >> A[r][c];
		}
	}
	for(r = 0; r < m; r++)
	{
		for(c = 0; c < l; c++)
		{
			cin >> B[r][c];
		}
	}
	for(r = 0; r < n; r++)
	{
		for(c = 0; c < l; c++)
		{
			C[r][c] = 0;
			for(int i = 0; i < m; i++)
			{
				C[r][c] += (A[r][i] * B[i][c]);
			}
		}
	}
	for(r = 0; r < n; r++)
	{
		for(c = 0; c < l; c++)
		{
			cout << C[r][c];
			if(c != l-1)
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}
