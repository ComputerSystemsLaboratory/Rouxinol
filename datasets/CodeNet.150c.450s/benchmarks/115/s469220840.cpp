#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

//????????±?????¨??????
int lcs(string X, string Y) {
	static const int MAX_X = 1000, MAX_Y = 1000;
	static int dp[MAX_X + 1][MAX_Y + 1];
	memset(dp, 0, sizeof(dp));
	for (int i = 1; i <= X.size(); i++) {
		for (int j = 1; j <= Y.size(); j++) {
			if (X[i - 1] == Y[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else {
				dp[i][j] = max(
					dp[i - 1][j],
					dp[i][j - 1]
				);
			}
		}
	}
	return dp[X.size()][Y.size()];
}

int main() {
	int q; cin >> q;
	while (q--) {
		string X, Y; cin >> X >> Y;
		cout << lcs(X, Y) << endl;
	}
	return 0;
}