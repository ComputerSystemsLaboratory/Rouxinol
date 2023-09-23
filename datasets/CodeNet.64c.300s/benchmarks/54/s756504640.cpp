#include<iostream>
using namespace std;

unsigned long long dp[101][21];

int main()
{
	int n;
	int num[100];
	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>num[i];

	dp[1][num[0]] = 1;

	for(int i = 1; i < n - 1; i++){
		for(int j = 0; j <= 20; j++) {
			int plus = j + num[i];
			int minus = j - num[i];
	
			if(plus >= 0 && plus <= 20)
				dp[i + 1][plus] += dp[i][j];
			if(minus >= 0 && minus <= 20)
				dp[i + 1][minus] += dp[i][j];
		}
	}

	cout << dp[n - 1][num[n - 1]] << endl;

	return 0;
}