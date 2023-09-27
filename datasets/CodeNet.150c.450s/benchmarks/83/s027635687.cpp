#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
//#include "MyMath.h"
//#include "DataStructure.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>
using namespace std;
typedef pair<int, int> p;
const int INF = 1000000000;
int main(){
	int n, W; cin >> n >> W;
	int dp[101][10001];
	int *v = new int[n];
	int *w = new int[n];
	for (int i = 0; i < n; i++)
		cin >> v[i] >> w[i];
	fill(dp[0], dp[n + 1], 0);
	for (int i = 0; i < n; i++)for (int j = 0; j <= W; j++) {
		if (w[i] > j)
			dp[i + 1][j] = dp[i][j];
		else dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
	}
	cout << dp[n][W] << endl;
	delete[] v, w;
	return 0;
}