#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cassert>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<numeric>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

typedef long long llong;
typedef unsigned long long ullong;

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL

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

//???????¢??????¨??????
int lis(int A[]) {
	static const int MAX_N = 100000;
	static int a[MAX_N];
	memset(a, 0x3f, sizeof(a));
	for (int i = 0; i < MAX_N; i++) {
		*lower_bound(a, a + MAX_N, A[i]) = A[i];
	}
	return find(a, a + MAX_N, INF) - a;
}

int main() {
	int A[100000] = {};
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	cout << lis(A) << endl;
	return 0;
}