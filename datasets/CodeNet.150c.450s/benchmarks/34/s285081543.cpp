#include<bits/stdc++.h>
using namespace std;

int main(void){

	int n; 
	while (cin >> n, n){
		vector<int> dp(n + 5);

		dp[0] = 1;
		dp[1] = 1;
		dp[2] = 2;
		dp[3] = 4;
		for (int i = 4; i <= n; i++){
			dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
		}


		cout << (((dp[n] + 9) / 10) + 364) / 365 << endl;

	}


	return 0;
}