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

#define MAX 1001

static int dp[MAX][MAX];

int main() {
	int q; cin >> q;
	while (q--) {
		memset(dp, 0, sizeof(dp));
		string X, Y; cin >> X >> Y;
		for (int i = 1; i <= X.size(); i++) {
			for (int j = 1; j <= Y.size(); j++) {
				if (X[i - 1] == Y[j - 1]) {
					//cout << i << j << X[i - 1] << endl;
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
		//for (int i = 0; i <= Y.size(); i++) {
		//	for (int j = 0; j <= X.size(); j++) {
		//		cout << dp[j][i] << " ";
		//	}
		//	cout << endl;
		//}
		cout << dp[X.size()][Y.size()] << endl;

	}

	return 0;
}