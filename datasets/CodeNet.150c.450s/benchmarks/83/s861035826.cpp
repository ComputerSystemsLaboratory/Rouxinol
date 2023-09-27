#include<iostream>
#include<algorithm>
using namespace std;
int DP[10001][101];
int main() {
	int N, W;
	cin >> N >> W;
	int  v[100], w[100];
	for (int i = 0; i < N; i++) {
		cin >> v[i] >> w[i];
	}
	for (int i = 1; i <= W; i++) {
		for (int j = 1; j <= N; j++) {
			if (i - w[j-1] < 0) {
				DP[i][j] = DP[i][j - 1];
			}
			else {
				DP[i][j] = max(DP[i][j - 1], DP[i - w[j-1]][j - 1] + v[j-1]);
			}
		}
	}
	cout << DP[W][N] << endl;
	cin >> N;
	return 0;
}
