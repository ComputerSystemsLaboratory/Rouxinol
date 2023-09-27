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
#include <climits>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> R, C;
	int r, c;
	R.push_back(0);
	for (int i = 0; i < n; ++i) {
		cin >> r >> c;
		R.push_back(r);
	}
	R.push_back(c);

	int cost[100+1][100+1];
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			cost[i][j] = INT_MAX;
	for (int i = 1; i <= n; ++i)
		cost[i][i] = 0;

	for (int j = 1; j <= n - 1; ++j) {
		for (int i = 1; i <= n - j; ++i) {
			for (int k = i + 1; k <= i + j; ++k) {
				cost[i][i+j] = min(cost[i][i+j], cost[i][k-1] + cost[k][i+j] + R[i]*R[k]*R[i+j+1]);
			}
		}
	}

	cout << cost[1][n] << endl;

	return 0;
}