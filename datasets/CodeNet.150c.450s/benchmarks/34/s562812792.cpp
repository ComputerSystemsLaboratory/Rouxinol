#include<iostream>
#include<stdio.h>
#include<memory.h>

using namespace std;
int main(){
	int dp[31][31];
	int n;
	while (1){
		cin >> n;
		if (n == 0)break;
		memset(dp, 0, sizeof(dp));
		dp[1][1] = 1;
		dp[1][2] = 1;
		dp[1][3] = 1;
		for (int i = 1; i <= 30; i++){
			for (int i2 = 1; i2 <= 30; i2++){
				if(i2+1<=30)dp[i + 1][i2 + 1] += dp[i][i2];
				if(i2+2<=30)dp[i + 1][i2 + 2] += dp[i][i2];
				if(i2+3<=30)dp[i + 1][i2 + 3] += dp[i][i2];
			}
		}
		int sum = 0;

		for (int i = 0; i < 30; i++){
			sum += dp[i][n];
		}
		cout << sum / 10 / 365 + 1 << endl;
	}
}