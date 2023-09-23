#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;
	int value[N];
	for(int i=0; i<N; i++)
		cin >> value[i];

	long dp[1000][N-1];
	for(int i=0; i<1000; i++) {
		for(int j=0; j<N-1; j++)
			dp[i][j] = 0;
	}

	dp[value[0]][0] = 1;
	for(int i=1; i<N-1; i++) {
		for(int j=0; j<1000; j++) {
			if(dp[j][i-1] > 0) {
				if(j+value[i] >= 0 && j+value[i] <= 20) dp[j+value[i]][i] += dp[j][i-1];
				if(j-value[i] >= 0 && j-value[i] <= 20) dp[j-value[i]][i] += dp[j][i-1];
			}
		}
	}

	cout << dp[value[N-1]][N-2] << endl;

	return 0;
}