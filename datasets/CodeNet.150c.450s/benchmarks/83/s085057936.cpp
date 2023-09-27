#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>

using namespace std;

int dp[10000] = { 0 };


int main() {
	int v[100];
	int w[100];
	int N;
	int W;

	cin >> N >> W;

	for (int i = 0; i < N; i++) {
		cin >> v[i] >> w[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = W; j >= 0;j--) {
			if (dp[j] != 0) {
				if (j + w[i] <= W) {
					dp[j + w[i]] = max(dp[j + w[i]], dp[j] + v[i]);
				}
			}
		}
		dp[w[i]] = max(dp[w[i]],v[i]);
	}

	int temp = 0;
	for (int i = 0; i <= W; i++) {
		temp = max(dp[i], temp);
	}
	cout << temp << endl;
	return 0;
}