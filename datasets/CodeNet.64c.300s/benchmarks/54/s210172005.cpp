#include <iostream>
#include <algorithm>
using namespace std;

int a[105];
long long int dp[105][21];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)cin >> a[i];
	fill((long long int*)dp, (long long int*)(dp + n), 0);
		
	dp[0][a[0]] = 1;
	for (int i = 0; i < n - 2; ++i){
		for (int j = 0; j <= 20; ++j){
			if (0 <= j - a[i+1]) dp[i+1][j] += dp[i][j-a[i+1]];
			if (j + a[i+1] <= 20) dp[i+1][j] += dp[i][j+a[i+1]];
		}
	}
	
	cout << dp[n-2][a[n-1]] << endl;
	
}
	