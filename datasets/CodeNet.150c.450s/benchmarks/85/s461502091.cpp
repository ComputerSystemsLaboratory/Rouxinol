#include<iostream>
#include <limits.h>
using namespace std;

int main() 
{
	int n, m[101][101], p[101];
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> p[i - 1] >> p[i];

	for (int i = 1; i <= n; i++) 
		m[i][i] = 0;
		
	for (int j = 2; j <= n; j++) 
	{
		for (int i = 1; i <= n - j + 1; i++) 
		{
			int k = i + j - 1;
			m[i][k] = INT_MAX;
			for (int l = i; l <= k - 1; l++)
				m[i][k] = min(m[i][k], m[i][l] + m[l + 1][k] + p[i - 1] * p[l] * p[k]);
		}
	}

	cout << m[1][n] << endl;

	return 0;
}