#include<iostream>
using namespace std;

const int MAX_SIZE = 101;

int dp[MAX_SIZE][MAX_SIZE];

int solve(int p[], int begin,int end) {
	if (dp[begin][end] != -1)return dp[begin][end];
	if (begin >= end - 1)return 0;
	int res = -1;
	for (int i = begin + 1; i < end; i++) {
		int temp = solve(p, begin, i) + solve(p, i, end) + (p[begin] * p[i] * p[end]);
		if (res != -1) {
			res = min(temp, res);
		}
		else {
			res = temp;
		}
	}
	return dp[begin][end] = res;
}

int main() {
	int N;
	int p[MAX_SIZE + 1];

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> p[i] >> p[i + 1];
	}

	for (int i = 0; i < MAX_SIZE; i++) {
		for (int j = 0; j < MAX_SIZE; j++) {
			dp[i][j] = -1;
		}
	}

	cout << solve(p, 0, N) << endl;
	return 0;
}