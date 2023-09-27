#include <iostream>
using namespace std;

int main(){
	while(true){
		int n;
		int dp[35] = {0};
		dp[1] = 1;
		dp[2] = 1;
		dp[3] = 1;

		cin >> n;
		if(n == 0){
			break;
		}

		for(int i = 1; i <= n; i++){
			dp[i + 1] += dp[i];
			dp[i + 2] += dp[i];
			dp[i + 3] += dp[i];
		}

		dp[n] /= 10;
		dp[n] /= 365;
		dp[n]++;

		cout << dp[n] << endl;

	}
}