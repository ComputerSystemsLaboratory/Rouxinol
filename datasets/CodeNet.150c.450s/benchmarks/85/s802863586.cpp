#include <iostream>
#include <algorithm>
using namespace std;

#define N 100

int M[101][101], p[101], n;

int solve()
{
	int l, i, j, k;
	for (l = 2; l <= n; l++) {
		for (i = 1; i <= n - l + 1; i++) {
			j = i + l - 1;
			M[i][j] = 1 << 30;
			for (k = i; k < j; k++)
				M[i][j] = min(M[i][j], M[i][k] + M[k + 1][j] + p[i - 1] * p[k] * p[j]);
		}
	}
	return M[1][n];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> p[i - 1] >> p[i];

	for (int i = 1; i <= n; i++) 
		M[i][i] = 0;

	cout << solve() << endl;
	return 0;
}