#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	int v[101];
	long m[100][100];
	const long nil = 999999999;

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> v[i] >> v[i + 1];

	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			if (i == j)
				m[i][j] = 0;
			else
				m[i][j] = nil;
	
	for(int i = n - 2; i > -1; i--)
		for(int j = i + 1; j < n; j++)
			for (int k = i; k < n; k++)
				m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + v[i] * v[k + 1] * v[j + 1]);

	cout << m[0][n - 1] << endl;

	return 0;
}
