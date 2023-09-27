#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

typedef long long lint;

int main()
{
	int n;
	int dat[128];
	lint dp[128][21];
	
	scanf("%d", &n);
	
	memset(dp, 0, sizeof(dp));
	
	for (int i = 0; i < n; i++){
		scanf("%d", dat + i);
	}
	dp[0][dat[0]] = 1;
	
	for (int i = 1; i < n - 1; i++){
		for (int j = 0; j <= 20; j++){
			if (j + dat[i] <= 20){
				dp[i][j + dat[i]] += dp[i - 1][j];
			}
			if (j - dat[i] >= 0){
				dp[i][j - dat[i]] += dp[i - 1][j];
			}
		}
	}
	
	printf("%lld\n", dp[n - 2][dat[n - 1]]);
	
	return (0);
}