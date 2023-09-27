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

int num[5000];

int main() {
	int N;
	while(scanf("%d", &N), N) {
		memset(num, 0, sizeof(num));
		int ans = 0;
		rep(i, N) {
			scanf("%d", &num[i]);
			ans += num[i];
		}
		rep(i, N) {
			int sum = 0;
			FOR(j, i, N) {
				sum += num[j];
				ans = max(ans, sum);
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}