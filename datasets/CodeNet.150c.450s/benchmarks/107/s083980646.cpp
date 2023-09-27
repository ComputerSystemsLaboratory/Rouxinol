#include <cstdio>
#include <cstring>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int n, m;
char s[1001];
char t[1001];
int dp[1001][1001];

int main(){
	scanf("%s%s", s, t);
	n = strlen(s);
	m = strlen(t);

	rep(i, n + 1){
		dp[i][0] = i;
	}
	rep(i, m + 1){
		dp[0][i] = i;
	}
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= m ; ++j){
			dp[i][j] = min(dp[i - 1][j - 1] + (s[i - 1] != t[j - 1]), min(dp[i][j - 1], dp[i - 1][j]) + 1);
		}
	}
	printf("%d\n", dp[n][m]);
	return 0;
}