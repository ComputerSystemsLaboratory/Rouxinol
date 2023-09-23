#include<iostream>
#include<string.h>
using namespace std;

int dp[100];

int main(){
	int n;
	while(cin >> n){
		if(n == 0){
			break;
		}
		memset(dp,0,sizeof(dp));
		dp[1] = 1;
		dp[2] = 1;
		dp[3] = 1;
		for(int i=1;i<n;i++){
			dp[i+1] += dp[i];
			dp[i+2] += dp[i];
			dp[i+3] += dp[i];
		}

		dp[n] /= 10;
		int add = 0;
		if(dp[n]%365 != 0 || dp[n] == 0){
			add++;
		}

		cout << dp[n]/365+add << endl;
	}
}