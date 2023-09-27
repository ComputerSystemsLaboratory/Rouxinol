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

int dp[45];

int fib(int n) {
	if(dp[n] >= 0) return dp[n];
	else return dp[n] = fib(n - 1) + fib(n - 2);
}

int main() {
	memset(dp, -1, sizeof(dp));
	dp[0] = 1;
	dp[1] = 1;
	int n;
	scanf("%d", &n);
	printf("%d\n", fib(n));
	return 0;
}