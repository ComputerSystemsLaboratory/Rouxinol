#include <cstdio>

using namespace std;

int main()
{
	int n;
	
	scanf("%d", &n);
	
	int num[110];
	
	for (int i = 0; i < n; i++){
		scanf("%d", &num[i]);
	}
	
	long dp[110][25] = {0};
	
	dp[0][num[0]] = 1;
	
	for (int i = 1; i < n - 1; i++){
		for (int j = 0; j <= 20; j++){
			if (j + num[i] <= 20){
				dp[i][j] += dp[i-1][j + num[i]];
			}
			if (j - num[i] >= 0){
				dp[i][j] += dp[i-1][j - num[i]];
			}
		}
	}
	
	printf("%ld\n", dp[n - 2][num[n-1]]);
	return (0);
}