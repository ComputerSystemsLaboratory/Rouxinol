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
	int q;
	scanf("%d", &q);
	rep(z, q){
		scanf("%s%s", s, t);
		n = strlen(s);
		m = strlen(t);

		rep(i, n + 1){
			dp[i][0] = 0;
		}
		rep(i, m + 1){
			dp[0][i] = 0;
		}
		for(int i = 1; i <= n; ++i){
			for(int j = 1; j <= m ; ++j){
				dp[i][j] = max(dp[i - 1][j - 1] + (s[i - 1] == t[j - 1]), max(dp[i][j - 1], dp[i - 1][j]));
			}
		}
		printf("%d\n", dp[n][m]);
	}
	return 0;
}