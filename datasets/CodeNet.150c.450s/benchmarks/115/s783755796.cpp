#include <cmath>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n, m, q;
	string a, b;//two sequences
	int M[1010][1010] = { { 0 } };//Memory matrix

	cin >> q;
	for (int l = 0; l < q; l++)
	{
		cin >> a >> b;
		n = a.length();
		m = b.length();
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= m; j++)
			{
				if (a[i] == b[j])
				{
					M[i + 1][j + 1] = M[i][j] + 1;
				}
				else
				{
					M[i + 1][j + 1] = max(M[i][j + 1], M[i + 1][j]);
				}
			}
		}

		cout << M[n][m] << endl;//The time complexity equals to O (n * m)
	}
	return 0;
}