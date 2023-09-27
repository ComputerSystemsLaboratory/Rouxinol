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

int N, K;
int num[100000];
int tmp[100000];

int main() {
	while(scanf("%d %d", &N, &K), N || K) {
		rep(i, N) scanf("%d", &num[i]);
		FOR(i, 1, N) num[i] += num[i - 1];
		int ans = num[K - 1];
		FOR(i, K, N) ans = max(num[i] - num[i - K], ans);
		printf("%d\n", ans);
	}
	return 0;
}