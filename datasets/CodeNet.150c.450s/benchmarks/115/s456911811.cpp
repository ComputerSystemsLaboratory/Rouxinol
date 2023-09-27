#include<iostream>
#include<algorithm>
#include<string>
#define MAX 1001
using namespace std;

string x, y;

int c[MAX][MAX];
int lcs(int m, int n);

int main() {
	int i, q, n, m;
	cin >> q;
	for (i = 0; i < q; i++) {
		cin >> x >> y;
		cout << lcs(x.length(), y.length()) << endl;
	}
	return 0;
}

int lcs(int m, int n) {
	int i, j, maxl = 0;
	c[0][0] = 0;
	for (i = 1; i <= m; i++)c[i][0] = 0;
	for (j = 1; j <= n; j++)c[0][j] = 0;
	for (i = 1; i <= m; i++) {
		for (j = 1; j <= n; j++) {
			if (x[i - 1] == y[j - 1])c[i][j] = c[i - 1][j - 1] + 1;
			else c[i][j] = max(c[i][j - 1], c[i - 1][j]);
			maxl = max(maxl, c[i][j]);
		}
	}
	return maxl;
}