#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

#define MAX_LEN 1000

int dp[MAX_LEN + 1][MAX_LEN + 1];

int main() {
	int q;
	cin >> q;
	while (q-->0) {
		string X, Y;
		cin >> X >> Y;
		for (int i = 0; i <= X.size(); ++i)
			for (int j = 0; j <= Y.size(); ++j)
				dp[i][j] = 0;
		for (int i = 0; i < X.size(); ++i)
			for (int j = 0; j < Y.size(); ++j)
				if (X[i] == Y[j])
					dp[i+1][j+1] = dp[i][j] + 1;
				else
					dp[i+1][j+1] = max(dp[i][j + 1], dp[i + 1][j]);
		cout << dp[X.size()][Y.size()] << endl;
	}
	return 0;
}