#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m, l, a[100][100], b[100][100];
	cin >> n >> m >> l;
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> a[i][j];
	for (int i = 0; i < m; i++) for (int j = 0; j < l; j++) cin >> b[i][j];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < l; j++)
		{
			long long c = 0;
			for (int k = 0; k < m; k++)
				c += a[i][k] * b[k][j];
			cout << c << (j == l - 1 ? '\n' : ' ');
		}
	}
}
