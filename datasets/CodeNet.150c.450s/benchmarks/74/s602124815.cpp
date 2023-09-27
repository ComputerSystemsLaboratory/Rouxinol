#include <bits/stdc++.h>
 
using namespace std;
 
#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define repr(i, j) for(int i = j; i >= 0; --i)
#define INF (1 << 30)
#define MOD 1e9 + 7
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;

int N, M;
int coin[20];
int dp[50001];

int main() {
	scanf("%d %d", &N, &M);
	rep(i, M) scanf("%d", &coin[i]);
	rep(i, N + 1) dp[i] = INF;
	dp[0] = 0;
	rep(i, M) FOR(j, coin[i], N + 1) {
		if(j - coin[i] >= 0) {
			dp[j] = min(dp[j - coin[i]] + 1, dp[j]);
		}
	}
	printf("%d\n", dp[N]);
	return 0;
}