#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <cstdlib>
#include <list>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int lcs(string X, string Y) {
	int n, m;
	int c[1001][1001] = { 0 };
	int maxlcs = 0;;

	m = X.size();
	n = Y.size();


	X = ' ' + X;
	Y = ' ' + Y;

	for (int i = 1; i <= m; i++)c[i][0] = 0;
	for (int j = 1; j <= n; j++)c[0][j] = 0;

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {

			if (X[i] == Y[j])
				c[i][j] = c[i - 1][j - 1] + 1; 
			else
				c[i][j] = max(c[i][j - 1],c[i - 1][j]);

			maxlcs = max(maxlcs, c[i][j]);
		}
	}
	return maxlcs;
}

int main() {

	int n;
	string S1, S2;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> S1 >> S2;
		cout << lcs(S1, S2) << endl;
	}

	return 0;
}