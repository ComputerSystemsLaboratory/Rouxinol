#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(void){
	const int ofDay = 10;
	const int MAXN = 30;
	const int TOBIN = 3;
	const int YEAR = 365;
	int dp[MAXN+1];
	
	// init
	for(int i=1; i<=MAXN; i++)
		dp[i] = 0;
	dp[0] = 1;

	// 全通り計算
	for(int i=0; i<=MAXN; i++){
		for(int j=1; j<=TOBIN; j++){
			if( i+j <= MAXN )
				dp[i+j] += dp[i];
		}
	}

	// 年数計算
	for(int i=1; i<=MAXN; i++){
		dp[i] = dp[i] / ofDay + (dp[i] % ofDay ? 1 : 0);
		dp[i] = dp[i] / YEAR + (dp[i] % YEAR ? 1 : 0);
	}

	// 対話
	while( true ){
		int n;
		cin >> n;
		if( n == 0 )
			break;

		cout << dp[n] << endl;
	}

	return 0;
}