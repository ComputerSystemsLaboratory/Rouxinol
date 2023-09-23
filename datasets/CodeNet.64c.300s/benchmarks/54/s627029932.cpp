#include<stdio.h>
#include<string.h>
using namespace std;

char n;
char num[1000];
long long dp[1000][210];
int main(){
	memset(dp, 0, sizeof(dp));
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);
	dp[0][num[0]] = 1;
	for (int i = 1; i < n - 1; i++){
		for (int j = 0; j < 21; j++){
			int a = j + num[i];
			int b = j - num[i];
			if (a <= 20)dp[i][a] += dp[i - 1][j];
			if (b >= 0)dp[i][b] += dp[i - 1][j];
		}
	}
	printf("%lld\n", dp[n - 2][num[n - 1]]);
	return 0;
}
//671013170798012928
//671013170798012928