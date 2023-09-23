#include<iostream>

int a[1000];
unsigned long long dp[1000][21];
int n, s;

int main()
{
	std::cin >> n;
	
	n--;
	
	for( int i = 0; i < n; i++ ) std::cin >> a[i];
		
	dp[0][a[0]] = 1;
		
	for( int i = 0; i < n; i++ ){	
		for( int j = 0; j <= 20; j++ ){
			if( j - a[i+1] >= 0 ) dp[i+1][j] += dp[i][j-a[i+1]];
			if( j + a[i+1] <= 20 ) dp[i+1][j] += dp[i][j+a[i+1]];
		}
	}
	
	std::cin >> s;
	
	std::cout << dp[n-1][s] << std::endl;
	
 	return 0;
}