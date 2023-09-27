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

int W, H;
int road[20][20], dp[20][20];

int main() {
	int W, H;
	while(scanf("%d %d", &W, &H), W || H) {
		memset(dp, 0, sizeof(dp));
		memset(road, 0, sizeof(road));
		int N;
		scanf("%d", &N);
		rep(i, N) {
			int y, x;
			scanf("%d %d", &x, &y);
			road[y][x] = -1;
		}
		dp[1][1] = 1;
		FOR(i, 1, H + 1) FOR(j, 1, W + 1) {
			if(road[i][j - 1] != -1 && j != 1) {
				dp[i][j] += dp[i][j - 1];
			}
			if(road[i - 1][j] != -1 && i != 1) {
				dp[i][j] += dp[i - 1][j];
			}
		}
		/*FOR(i, 1, H + 1) {
			FOR(j, 1, W + 1) printf("%3d", dp[i][j]);
			puts("\n");
		}
		FOR(i, 1, H + 1) {
			FOR(j, 1, W + 1) printf("%3d", road[i][j]);
			puts("\n");
		}*/
		printf("%d\n", dp[H][W]);
	}
	return 0;
}