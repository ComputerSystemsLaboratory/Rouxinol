#include <iostream>
#include <algorithm>
using namespace std;

int v[100], w[100], W, n,ret;
int memo[101][10001];

int calc(int i, int j) {
	if (memo[i][j] != -1)return memo[i][j];
	if (i == n)ret = 0;
	else if (j < w[i])ret = calc(i + 1, j);
	else {
		ret = max(calc(i + 1, j), calc(i + 1, j - w[i]) + v[i]);
	}
	return memo[i][j]=ret;
}
int main() {
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 10001; j++) {
			memo[i][j] = -1;
		}
	}
	
	int ans;
	cin >> n >> W;
	for (int i = 0; i < n; i++) {
		cin >> v[i] >> w[i];
	}
	ans = calc(0, W);
	cout << ans << endl;
	return 0;
}