#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int lcs(string X, string Y)
{
	static int Z[1001][1001];
	int m = X.size();
	int n = Y.size();
	int i, j;

	for (i = 1; i <= m; i++) {
		for (j = 1; j <= n; j++) {
			if (X[i - 1] == Y[j - 1])
				Z[i][j] = Z[i - 1][j - 1] + 1;
			else
				Z[i][j] = max(Z[i - 1][j], Z[i][j - 1]);
		}
	}
	return Z[m][n];
}

int main()
{
	string X, Y;
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> X >> Y;
		cout << lcs(X, Y) << endl;
	}
	return 0;
}