# include <iostream>
# define MAX_N 100

int n;
unsigned long long dp[MAX_N][21];
int a[MAX_N];

int main(){
	std::cin >> n;
	for (int i = 0; i < n; ++i)
		std::cin >> a[i];
	
	dp[0][a[0]] = 1;

	for (int i = 1; i < n-1; ++i){
		for (int j = 0; j <= 20; ++j){
			if (j + a[i] <= 20)
				dp[i][j] += dp[i-1][j + a[i]];
			if (j - a[i] >= 0)
				dp[i][j] += dp[i-1][j - a[i]];
		}
	}

	std::cout << dp[n - 2][a[n - 1]]<<std::endl;
	return 0;
}