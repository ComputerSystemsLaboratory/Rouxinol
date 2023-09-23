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

int dp[31];

int main() {
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	FOR(i, 3, 31) {
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}
	int N;
	while(scanf("%d", &N), N) {
		printf("%d\n", dp[N]/10/365 + 1);
	}
	return 0;
}