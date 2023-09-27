#include <cstdio>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int n, x;
int v[100];
int w[100];
int dp[101][10001];

int main(){
	scanf("%d%d", &n, &x);
	rep(i, n){
		scanf("%d%d", &v[i], &w[i]);
	}
	for(int i = 1; i <= n; ++i){
		for(int j = 0; j <= x; ++j){
			dp[i][j] = dp[i - 1][j];
			if(j >= w[i - 1]){
				dp[i][j] = max(dp[i - 1][j - w[i - 1]] + v[i - 1], dp[i][j]);
			}
		}
	}
	printf("%d\n", dp[n][x]);
	return 0;
}