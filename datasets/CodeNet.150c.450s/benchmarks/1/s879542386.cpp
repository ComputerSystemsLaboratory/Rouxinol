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

int N, a[100000];
int dp[100000];

int main() {
	scanf("%d", &N);
	rep(i, N) scanf("%d", &a[i]);
	fill(dp, dp + N, INF);
	rep(i, N) {
		*lower_bound(dp, dp + N, a[i]) = a[i];
	}
	printf("%d\n", lower_bound(dp, dp + N, INF) - dp);
	return 0;
}