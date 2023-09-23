#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	int num[100];
	long long int dp[100][21] = {0};
	
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
		scanf("%d", num + i);
		
	dp[0][num[0]] = 1;
		
	for(int i = 1; i < n - 1; ++i) {
		for(int j = 0; j < 21; ++j) {
			
			if(j - num[i] > -1)
				dp[i][j] += dp[i - 1][j - num[i]];
			if(j + num[i] < 21)
				dp[i][j] += dp[i - 1][j + num[i]];
		}
	}
	
	printf("%lld\n", dp[n - 2][num[n - 1]]);
	
	return 0;
}