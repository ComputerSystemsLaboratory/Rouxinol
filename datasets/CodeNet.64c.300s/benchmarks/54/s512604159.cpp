#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	long long int n, num[101], ans, dp[21][101] = {0};
	cin >>n;
	for(int i = 0; i < n; i++){
		cin >>num[i];
	}
	dp[num[0]][0] = 1;
	for(int i = 1; i < (n - 1); i++){
		for(int j = 0; j <= 20; j++){
			if(dp[j][i - 1] != 0){
				int p = j + num[i], m = j - num[i];
				if(p >= 0 && p <= 20) dp[p][i] += dp[j][i - 1];
				if(m >= 0 && m <= 20) dp[m][i] += dp[j][i - 1];
			}
		}
	}
	printf("%lld\n", dp[num[n - 1]][n - 2]);
	return 0;
}